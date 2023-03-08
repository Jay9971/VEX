/*----------------------------------------------------------------------------*/
/*                                                                            */
/*    Module:       main.cpp                                                  */
/*    Author:       VEX                                                       */
/*    Created:      Thu Sep 26 2019                                           */
/*    Description:  Competition Template                                      */
/*                                                                            */
/*----------------------------------------------------------------------------*/

// ---- START VEXCODE CONFIGURED DEVICES ----
// Robot Configuration:
// [Name]               [Type]        [Port(s)]
// Controller1          controller                    
// Intake               motor         6               
// FlyWheel             motor         10              
// LBack                motor         11              
// RBack                motor         12              
// LFront               motor         19              
// RFront               motor         20              
// Rollers              motor         7               
// Extension            motor         9               
// pneum                digital_out   A               
// ---- END VEXCODE CONFIGURED DEVICES ----

#include "vex.h"
#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <fstream>
#include <auton.cpp>

using namespace vex;

// A global instance of competition
competition Competition;

// define your global instances of motors and other devices here


int check_next(int index, std::vector<uint8_t> values, int extent) {
  while (1) {
    if (index+23 < values.size() && values[index] == values[index+12] && values[index+1] == values[index+13] && values[index+2] == values[index+14] && values[index+3] == values[index+15] && values[index+4] == values[index+16] && values[index+5] == values[index+17] && values[index+6] == values[index+18] && values[index+7] == values[index+19] && values[index+8] == values[index+20]&& values[index+9] == values[index+21] && values[index+10] == values[index+22] && values[index+11] == values[index+23]) {
        index += 12;
        extent += 1;
    } else {
      return extent;
    }
  }
}


/*---------------------------------------------------------------------------*/
/*                          Pre-Autonomous Functions                         */
/*                                                                           */
/*  You may want to perform some actions before the competition starts.      */
/*  Do them in the following function.  You must return from this function   */
/*  or the autonomous and usercontrol tasks will not be started.  This       */
/*  function is only called once after the V5 has been powered on and        */
/*  not every time that the robot is disabled.                               */
/*---------------------------------------------------------------------------*/

void pre_auton(void) {
  // Initializing Robot Configuration. DO NOT REMOVE!
  vexcodeInit();
  digital_out pneum = digital_out( Brain.ThreeWirePort.A);
  pneum.set( false );

  // All activities that occur before the competition starts
  // Example: clearing encoders, setting servo positions, ...
}

/*---------------------------------------------------------------------------*/
/*                                                                           */
/*                              Autonomous Task                              */
/*                                                                           */
/*  This task is used to control your robot during the autonomous phase of   */
/*  a VEX Competition.                                                       */
/*                                                                           */
/*  You must modify the code to add your own robot specific commands here.   */
/*---------------------------------------------------------------------------*/
void autonomous(void) {
//auton();
std::ifstream file("rerun.txt", std::ios::binary);
if (!file) {
  auton();
  return;
} 
//int size = 20000;
//uint8_t data[size];
std::vector<uint8_t> data((std::istreambuf_iterator<char>(file)), std::istreambuf_iterator<char>());
//Brain.SDcard.loadfile("rerun.txt", reinterpret_cast<uint8_t*>(data), size);

digital_out pneum = digital_out( Brain.ThreeWirePort.A);
for (int i=0; i < data.size(); i+=12) {
  RFront.spin(vex::directionType::rev, data[i], vex::velocityUnits::pct);
  RBack.spin(vex::directionType::rev, data[i+1], vex::velocityUnits::pct);
  LFront.spin(vex::directionType::rev, data[i+2],  vex::velocityUnits::pct);
  LBack.spin(vex::directionType::rev, data[i+3], vex::velocityUnits::pct);
  if(data[i+4]){
    Intake.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
  } else if(data[i+5]){
    Intake.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
  } else{
    Intake.stop(vex::brakeType::brake);
  }
  if(data[i+6]){
    Rollers.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
  } else if(data[i+7]){
    Rollers.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
  } else{
    Rollers.stop(vex::brakeType::brake);
  }
  if(data[i+8]){
    FlyWheel.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
  } else{
    FlyWheel.stop(vex::brakeType::coast);
  }
  if(data[i+9]){
    Extension.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
  } else if(data[i+10]){
    Extension.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
  } else{
    Extension.stop(vex::brakeType::brake);
  }
  if(data[i+11]) {
      pneum.set( true );
      this_thread::sleep_for(500);
      pneum.set( false );
  }

  task::sleep(check_next(i, data, 1)*10);
  i += 12*check_next(i, data, 1) - 12;
}

file.close();

}


void initRerun(int rf, int rb, int lf, int lb, bool intake_fwd, bool intake_rev, bool rollers_fwd, bool rollers_rev, bool flywheel, bool extension_rev, bool extension_fwd, bool pn) {
      uint8_t arr[12];
      arr[0] = rf;
      arr[1] = rb;
      arr[2] = lf;
      arr[3] = lb;
      arr[4] = intake_fwd;
      arr[5] = intake_rev;
      arr[6] = rollers_fwd;
      arr[7] = rollers_rev;
      arr[8] = flywheel;
      arr[9] = extension_rev;
      arr[10] = extension_fwd;
      arr[11] = pn;
      Brain.SDcard.savefile("rerun.txt", arr, sizeof(arr));
}

void saveFrame(int rf, int rb, int lf, int lb, bool intake_fwd, bool intake_rev, bool rollers_fwd, bool rollers_rev, bool flywheel, bool extension_rev, bool extension_fwd, bool pn) {
      //brain.SDcard.savefile(const char *name, uint8_t *buffer, uint32_t len);
      //"RFront.spin(vex::directionType::rev, rf, vex::velocityUnits::pct);"
      uint8_t arr[12];
      arr[0] = rf;
      arr[1] = rb;
      arr[2] = lf;
      arr[3] = lb;
      arr[4] = intake_fwd;
      arr[5] = intake_rev;
      arr[6] = rollers_fwd;
      arr[7] = rollers_rev;
      arr[8] = flywheel;
      arr[9] = extension_rev;
      arr[10] = extension_fwd;
      arr[11] = pn;
      
      Brain.SDcard.appendfile("rerun.txt", arr, sizeof(arr));
      
      

}

void endRerun(void) {
    uint8_t data[20000];
    int written = Brain.SDcard.loadfile("rerun.txt", data, sizeof(data));
    Brain.Screen.clearScreen();
      if (written > 0) {
        Brain.Screen.setCursor( 2, 2 );
        Brain.Screen.print( "We wrote %d bytes to the SD Card", written );
      } else {
        Brain.Screen.setCursor( 2, 2 );
        Brain.Screen.print( "Well fuck, the write failed!");
      }
}

/*---------------------------------------------------------------------------*/
/*                                                                           */
/*                              User Control Task                            */
/*                                                                           */
/*  This task is used to control your robot during the user control phase of */
/*  a VEX Competition.                                                       */
/*                                                                           */
/*  You must modify the code to add your own robot specific commands here.   */
/*---------------------------------------------------------------------------*/

void usercontrol(void) {
  // User control code here, inside the loop
  bool rerun = false;
  while (1) {

    int rf = Controller1.Axis3.value() - Controller1.Axis1.value() - Controller1.Axis4.value();
    int rb = Controller1.Axis3.value() - Controller1.Axis1.value() + Controller1.Axis4.value();
    int lf = Controller1.Axis3.value() + Controller1.Axis1.value() + Controller1.Axis4.value();
    int lb = Controller1.Axis3.value() + Controller1.Axis1.value() - Controller1.Axis4.value();
    bool intake_fwd = Controller1.ButtonR1.pressing();
    bool intake_rev = Controller1.ButtonR2.pressing();
    bool rollers_fwd = Controller1.ButtonA.pressing();
    bool rollers_rev = Controller1.ButtonB.pressing();
    bool flywheel = Controller1.ButtonL2.pressing();
    bool extension_rev = Controller1.ButtonX.pressing();
    bool extension_fwd = Controller1.ButtonY.pressing();
    bool pn = Controller1.ButtonL1.pressing();


  //Drivetrain
  RFront.spin(vex::directionType::rev, Controller1.Axis3.value() - Controller1.Axis1.value() - Controller1.Axis4.value(), vex::velocityUnits::pct);
  RBack.spin(vex::directionType::rev, Controller1.Axis3.value() - Controller1.Axis1.value() + Controller1.Axis4.value(), vex::velocityUnits::pct);
  LFront.spin(vex::directionType::rev, Controller1.Axis3.value() + Controller1.Axis1.value() + Controller1.Axis4.value(),  vex::velocityUnits::pct);
  LBack.spin(vex::directionType::rev, Controller1.Axis3.value() + Controller1.Axis1.value() - Controller1.Axis4.value(), vex::velocityUnits::pct);



  //INTAKE 
  if(Controller1.ButtonR1.pressing()){
    Intake.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
  }

  else if(Controller1.ButtonR2.pressing()){
    Intake.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
  }

  else{
    Intake.stop(vex::brakeType::brake);
  }

    if(Controller1.ButtonA.pressing()){
      Rollers.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
    }

    else if(Controller1.ButtonB.pressing()){
      Rollers.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
    }

    else{
      Rollers.stop(vex::brakeType::brake);
    }


  //OUTTAKE
  if(Controller1.ButtonL2.pressing()){
    FlyWheel.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
  }

  else{
    FlyWheel.stop(vex::brakeType::coast);
  }
  //Pneumatics
  digital_out pneum = digital_out( Brain.ThreeWirePort.A);
  if(Controller1.ButtonL1.pressing()) {
      pneum.set( true );
      this_thread::sleep_for(500);
      pneum.set( false );
  }

    //Extension
  if(Controller1.ButtonX.pressing()){
    Extension.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
  }
  else if(Controller1.ButtonY.pressing()){
    Extension.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
  }
  else{
    Extension.stop(vex::brakeType::brake);
  }

  //Rerun 
  if (Brain.SDcard.isInserted()) {
  if ((Controller1.ButtonUp.pressing() && !rerun)) {
    rerun = true;
    initRerun(rf, rb, lf, lb, intake_fwd, intake_rev, rollers_fwd, rollers_rev, flywheel, extension_rev, extension_fwd, pn);
  } else if (rerun) {
    saveFrame(rf, rb, lf, lb, intake_fwd, intake_rev, rollers_fwd, rollers_rev, flywheel, extension_rev, extension_fwd, pn);
  }else if (Controller1.ButtonDown.pressing()) {
    rerun = false;
    endRerun();
  }
  }
  }

    // Temperature Code
  //Brain.Screen.clearScreen();
  //Brain.Screen.setCursor(1, 1);
  //Brain.Screen.print("Right Front Drivetrainn otor: %.2f%", RightFront.temperature);
  //Brain.Screen.setCursor(2, 1);

}

//
// Main will set up the competition functions and callbacks.
//
int main() {
  // Set up callbacks for autonomous and driver control periods.
  Competition.autonomous(autonomous);
  Competition.drivercontrol(usercontrol);


    

  // Run the pre-autonomous function.
  pre_auton();

  // Prevent main from exiting with an infinite loop.
  while (true) {
    wait(100, msec);
  }
}