#include "vex.h"

void auton(void) {
	RFront.spin(vex::directionType::rev,0, vex::velocityUnits::pct);
	RBack.spin(vex::directionType::rev, 0, vex::velocityUnits::pct);
	LFront.spin(vex::directionType::rev, 0,  vex::velocityUnits::pct);
	LBack.spin(vex::directionType::rev, 0, vex::velocityUnits::pct);
	if(false){
	Intake.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if( false){
	Intake.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Intake.stop(vex::brakeType::brake);
}
	if( false){
	Rollers.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if(false){
	Rollers.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Rollers.stop(vex::brakeType::brake);
}
	  if(false){
	FlyWheel.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	FlyWheel.stop(vex::brakeType::coast);
}
	digital_out pneum = digital_out( Brain.ThreeWirePort.A);
	if(false) {
	pneum.set( true );
	this_thread::sleep_for(500);
	pneum.set( false );
}
	if(false){
	Extension.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	}else if(false){
	Extension.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
} else{
	Extension.stop(vex::brakeType::brake);
}
	task::sleep(570);
	RFront.spin(vex::directionType::rev,0, vex::velocityUnits::pct);
	RBack.spin(vex::directionType::rev, 0, vex::velocityUnits::pct);
	LFront.spin(vex::directionType::rev, 0,  vex::velocityUnits::pct);
	LBack.spin(vex::directionType::rev, 0, vex::velocityUnits::pct);
	if(false){
	Intake.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if( false){
	Intake.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Intake.stop(vex::brakeType::brake);
}
	if( true){
	Rollers.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if(false){
	Rollers.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Rollers.stop(vex::brakeType::brake);
}
	  if(false){
	FlyWheel.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	FlyWheel.stop(vex::brakeType::coast);
}
	if(false) {
	pneum.set( true );
	this_thread::sleep_for(500);
	pneum.set( false );
}
	if(false){
	Extension.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	}else if(false){
	Extension.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
} else{
	Extension.stop(vex::brakeType::brake);
}
	task::sleep(1400);
	RFront.spin(vex::directionType::rev,0, vex::velocityUnits::pct);
	RBack.spin(vex::directionType::rev, 0, vex::velocityUnits::pct);
	LFront.spin(vex::directionType::rev, 0,  vex::velocityUnits::pct);
	LBack.spin(vex::directionType::rev, 0, vex::velocityUnits::pct);
	if(false){
	Intake.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if( false){
	Intake.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Intake.stop(vex::brakeType::brake);
}
	if( false){
	Rollers.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if(false){
	Rollers.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Rollers.stop(vex::brakeType::brake);
}
	  if(false){
	FlyWheel.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	FlyWheel.stop(vex::brakeType::coast);
}
	if(false) {
	pneum.set( true );
	this_thread::sleep_for(500);
	pneum.set( false );
}
	if(false){
	Extension.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	}else if(false){
	Extension.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
} else{
	Extension.stop(vex::brakeType::brake);
}
	task::sleep(430);
	RFront.spin(vex::directionType::rev,196, vex::velocityUnits::pct);
	RBack.spin(vex::directionType::rev, 196, vex::velocityUnits::pct);
	LFront.spin(vex::directionType::rev, 60,  vex::velocityUnits::pct);
	LBack.spin(vex::directionType::rev, 60, vex::velocityUnits::pct);
	if(false){
	Intake.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if( false){
	Intake.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Intake.stop(vex::brakeType::brake);
}
	if( false){
	Rollers.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if(false){
	Rollers.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Rollers.stop(vex::brakeType::brake);
}
	  if(false){
	FlyWheel.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	FlyWheel.stop(vex::brakeType::coast);
}
	if(false) {
	pneum.set( true );
	this_thread::sleep_for(500);
	pneum.set( false );
}
	if(false){
	Extension.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	}else if(false){
	Extension.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
} else{
	Extension.stop(vex::brakeType::brake);
}
	task::sleep(40);
	RFront.spin(vex::directionType::rev,130, vex::velocityUnits::pct);
	RBack.spin(vex::directionType::rev, 130, vex::velocityUnits::pct);
	LFront.spin(vex::directionType::rev, 126,  vex::velocityUnits::pct);
	LBack.spin(vex::directionType::rev, 126, vex::velocityUnits::pct);
	if(false){
	Intake.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if( false){
	Intake.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Intake.stop(vex::brakeType::brake);
}
	if( false){
	Rollers.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if(false){
	Rollers.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Rollers.stop(vex::brakeType::brake);
}
	  if(false){
	FlyWheel.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	FlyWheel.stop(vex::brakeType::coast);
}
	if(false) {
	pneum.set( true );
	this_thread::sleep_for(500);
	pneum.set( false );
}
	if(false){
	Extension.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	}else if(false){
	Extension.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
} else{
	Extension.stop(vex::brakeType::brake);
}
	task::sleep(60);
	RFront.spin(vex::directionType::rev,129, vex::velocityUnits::pct);
	RBack.spin(vex::directionType::rev, 129, vex::velocityUnits::pct);
	LFront.spin(vex::directionType::rev, 127,  vex::velocityUnits::pct);
	LBack.spin(vex::directionType::rev, 127, vex::velocityUnits::pct);
	if(false){
	Intake.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if( false){
	Intake.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Intake.stop(vex::brakeType::brake);
}
	if( false){
	Rollers.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if(false){
	Rollers.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Rollers.stop(vex::brakeType::brake);
}
	  if(false){
	FlyWheel.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	FlyWheel.stop(vex::brakeType::coast);
}
	if(false) {
	pneum.set( true );
	this_thread::sleep_for(500);
	pneum.set( false );
}
	if(false){
	Extension.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	}else if(false){
	Extension.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
} else{
	Extension.stop(vex::brakeType::brake);
}
	task::sleep(770);
	RFront.spin(vex::directionType::rev,0, vex::velocityUnits::pct);
	RBack.spin(vex::directionType::rev, 0, vex::velocityUnits::pct);
	LFront.spin(vex::directionType::rev, 0,  vex::velocityUnits::pct);
	LBack.spin(vex::directionType::rev, 0, vex::velocityUnits::pct);
	if(false){
	Intake.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if( false){
	Intake.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Intake.stop(vex::brakeType::brake);
}
	if( false){
	Rollers.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if(false){
	Rollers.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Rollers.stop(vex::brakeType::brake);
}
	  if(false){
	FlyWheel.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	FlyWheel.stop(vex::brakeType::coast);
}
	if(false) {
	pneum.set( true );
	this_thread::sleep_for(500);
	pneum.set( false );
}
	if(false){
	Extension.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	}else if(false){
	Extension.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
} else{
	Extension.stop(vex::brakeType::brake);
}
	task::sleep(60);
	RFront.spin(vex::directionType::rev,247, vex::velocityUnits::pct);
	RBack.spin(vex::directionType::rev, 247, vex::velocityUnits::pct);
	LFront.spin(vex::directionType::rev, 247,  vex::velocityUnits::pct);
	LBack.spin(vex::directionType::rev, 247, vex::velocityUnits::pct);
	if(false){
	Intake.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if( false){
	Intake.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Intake.stop(vex::brakeType::brake);
}
	if( false){
	Rollers.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if(false){
	Rollers.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Rollers.stop(vex::brakeType::brake);
}
	  if(false){
	FlyWheel.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	FlyWheel.stop(vex::brakeType::coast);
}
	if(false) {
	pneum.set( true );
	this_thread::sleep_for(500);
	pneum.set( false );
}
	if(false){
	Extension.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	}else if(false){
	Extension.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
} else{
	Extension.stop(vex::brakeType::brake);
}
	task::sleep(40);
	RFront.spin(vex::directionType::rev,190, vex::velocityUnits::pct);
	RBack.spin(vex::directionType::rev, 190, vex::velocityUnits::pct);
	LFront.spin(vex::directionType::rev, 190,  vex::velocityUnits::pct);
	LBack.spin(vex::directionType::rev, 190, vex::velocityUnits::pct);
	if(false){
	Intake.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if( false){
	Intake.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Intake.stop(vex::brakeType::brake);
}
	if( false){
	Rollers.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if(false){
	Rollers.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Rollers.stop(vex::brakeType::brake);
}
	  if(false){
	FlyWheel.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	FlyWheel.stop(vex::brakeType::coast);
}
	if(false) {
	pneum.set( true );
	this_thread::sleep_for(500);
	pneum.set( false );
}
	if(false){
	Extension.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	}else if(false){
	Extension.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
} else{
	Extension.stop(vex::brakeType::brake);
}
	task::sleep(40);
	RFront.spin(vex::directionType::rev,148, vex::velocityUnits::pct);
	RBack.spin(vex::directionType::rev, 148, vex::velocityUnits::pct);
	LFront.spin(vex::directionType::rev, 148,  vex::velocityUnits::pct);
	LBack.spin(vex::directionType::rev, 148, vex::velocityUnits::pct);
	if(false){
	Intake.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if( false){
	Intake.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Intake.stop(vex::brakeType::brake);
}
	if( false){
	Rollers.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if(false){
	Rollers.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Rollers.stop(vex::brakeType::brake);
}
	  if(false){
	FlyWheel.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	FlyWheel.stop(vex::brakeType::coast);
}
	if(false) {
	pneum.set( true );
	this_thread::sleep_for(500);
	pneum.set( false );
}
	if(false){
	Extension.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	}else if(false){
	Extension.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
} else{
	Extension.stop(vex::brakeType::brake);
}
	task::sleep(50);
	RFront.spin(vex::directionType::rev,129, vex::velocityUnits::pct);
	RBack.spin(vex::directionType::rev, 129, vex::velocityUnits::pct);
	LFront.spin(vex::directionType::rev, 129,  vex::velocityUnits::pct);
	LBack.spin(vex::directionType::rev, 129, vex::velocityUnits::pct);
	if(false){
	Intake.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if( false){
	Intake.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Intake.stop(vex::brakeType::brake);
}
	if( false){
	Rollers.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if(false){
	Rollers.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Rollers.stop(vex::brakeType::brake);
}
	  if(false){
	FlyWheel.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	FlyWheel.stop(vex::brakeType::coast);
}
	if(false) {
	pneum.set( true );
	this_thread::sleep_for(500);
	pneum.set( false );
}
	if(false){
	Extension.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	}else if(false){
	Extension.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
} else{
	Extension.stop(vex::brakeType::brake);
}
	task::sleep(380);
	RFront.spin(vex::directionType::rev,116, vex::velocityUnits::pct);
	RBack.spin(vex::directionType::rev, 116, vex::velocityUnits::pct);
	LFront.spin(vex::directionType::rev, 142,  vex::velocityUnits::pct);
	LBack.spin(vex::directionType::rev, 142, vex::velocityUnits::pct);
	if(false){
	Intake.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if( false){
	Intake.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Intake.stop(vex::brakeType::brake);
}
	if( false){
	Rollers.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if(false){
	Rollers.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Rollers.stop(vex::brakeType::brake);
}
	  if(false){
	FlyWheel.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	FlyWheel.stop(vex::brakeType::coast);
}
	if(false) {
	pneum.set( true );
	this_thread::sleep_for(500);
	pneum.set( false );
}
	if(false){
	Extension.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	}else if(false){
	Extension.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
} else{
	Extension.stop(vex::brakeType::brake);
}
	task::sleep(50);
	RFront.spin(vex::directionType::rev,76, vex::velocityUnits::pct);
	RBack.spin(vex::directionType::rev, 76, vex::velocityUnits::pct);
	LFront.spin(vex::directionType::rev, 182,  vex::velocityUnits::pct);
	LBack.spin(vex::directionType::rev, 182, vex::velocityUnits::pct);
	if(false){
	Intake.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if( false){
	Intake.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Intake.stop(vex::brakeType::brake);
}
	if( false){
	Rollers.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if(false){
	Rollers.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Rollers.stop(vex::brakeType::brake);
}
	  if(false){
	FlyWheel.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	FlyWheel.stop(vex::brakeType::coast);
}
	if(false) {
	pneum.set( true );
	this_thread::sleep_for(500);
	pneum.set( false );
}
	if(false){
	Extension.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	}else if(false){
	Extension.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
} else{
	Extension.stop(vex::brakeType::brake);
}
	task::sleep(40);
	RFront.spin(vex::directionType::rev,34, vex::velocityUnits::pct);
	RBack.spin(vex::directionType::rev, 34, vex::velocityUnits::pct);
	LFront.spin(vex::directionType::rev, 224,  vex::velocityUnits::pct);
	LBack.spin(vex::directionType::rev, 224, vex::velocityUnits::pct);
	if(false){
	Intake.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if( false){
	Intake.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Intake.stop(vex::brakeType::brake);
}
	if( false){
	Rollers.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if(false){
	Rollers.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Rollers.stop(vex::brakeType::brake);
}
	  if(false){
	FlyWheel.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	FlyWheel.stop(vex::brakeType::coast);
}
	if(false) {
	pneum.set( true );
	this_thread::sleep_for(500);
	pneum.set( false );
}
	if(false){
	Extension.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	}else if(false){
	Extension.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
} else{
	Extension.stop(vex::brakeType::brake);
}
	task::sleep(60);
	RFront.spin(vex::directionType::rev,11, vex::velocityUnits::pct);
	RBack.spin(vex::directionType::rev, 11, vex::velocityUnits::pct);
	LFront.spin(vex::directionType::rev, 247,  vex::velocityUnits::pct);
	LBack.spin(vex::directionType::rev, 247, vex::velocityUnits::pct);
	if(false){
	Intake.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if( false){
	Intake.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Intake.stop(vex::brakeType::brake);
}
	if( false){
	Rollers.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if(false){
	Rollers.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Rollers.stop(vex::brakeType::brake);
}
	  if(false){
	FlyWheel.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	FlyWheel.stop(vex::brakeType::coast);
}
	if(false) {
	pneum.set( true );
	this_thread::sleep_for(500);
	pneum.set( false );
}
	if(false){
	Extension.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	}else if(false){
	Extension.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
} else{
	Extension.stop(vex::brakeType::brake);
}
	task::sleep(40);
	RFront.spin(vex::directionType::rev,2, vex::velocityUnits::pct);
	RBack.spin(vex::directionType::rev, 2, vex::velocityUnits::pct);
	LFront.spin(vex::directionType::rev, 0,  vex::velocityUnits::pct);
	LBack.spin(vex::directionType::rev, 0, vex::velocityUnits::pct);
	if(false){
	Intake.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if( false){
	Intake.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Intake.stop(vex::brakeType::brake);
}
	if( false){
	Rollers.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if(false){
	Rollers.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Rollers.stop(vex::brakeType::brake);
}
	  if(false){
	FlyWheel.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	FlyWheel.stop(vex::brakeType::coast);
}
	if(false) {
	pneum.set( true );
	this_thread::sleep_for(500);
	pneum.set( false );
}
	if(false){
	Extension.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	}else if(false){
	Extension.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
} else{
	Extension.stop(vex::brakeType::brake);
}
	task::sleep(200);
	RFront.spin(vex::directionType::rev,13, vex::velocityUnits::pct);
	RBack.spin(vex::directionType::rev, 13, vex::velocityUnits::pct);
	LFront.spin(vex::directionType::rev, 245,  vex::velocityUnits::pct);
	LBack.spin(vex::directionType::rev, 245, vex::velocityUnits::pct);
	if(false){
	Intake.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if( false){
	Intake.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Intake.stop(vex::brakeType::brake);
}
	if( false){
	Rollers.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if(false){
	Rollers.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Rollers.stop(vex::brakeType::brake);
}
	  if(false){
	FlyWheel.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	FlyWheel.stop(vex::brakeType::coast);
}
	if(false) {
	pneum.set( true );
	this_thread::sleep_for(500);
	pneum.set( false );
}
	if(false){
	Extension.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	}else if(false){
	Extension.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
} else{
	Extension.stop(vex::brakeType::brake);
}
	task::sleep(40);
	RFront.spin(vex::directionType::rev,129, vex::velocityUnits::pct);
	RBack.spin(vex::directionType::rev, 129, vex::velocityUnits::pct);
	LFront.spin(vex::directionType::rev, 129,  vex::velocityUnits::pct);
	LBack.spin(vex::directionType::rev, 129, vex::velocityUnits::pct);
	if(false){
	Intake.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if( false){
	Intake.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Intake.stop(vex::brakeType::brake);
}
	if( false){
	Rollers.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if(false){
	Rollers.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Rollers.stop(vex::brakeType::brake);
}
	  if(false){
	FlyWheel.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	FlyWheel.stop(vex::brakeType::coast);
}
	if(false) {
	pneum.set( true );
	this_thread::sleep_for(500);
	pneum.set( false );
}
	if(false){
	Extension.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	}else if(false){
	Extension.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
} else{
	Extension.stop(vex::brakeType::brake);
}
	task::sleep(770);
	RFront.spin(vex::directionType::rev,138, vex::velocityUnits::pct);
	RBack.spin(vex::directionType::rev, 138, vex::velocityUnits::pct);
	LFront.spin(vex::directionType::rev, 120,  vex::velocityUnits::pct);
	LBack.spin(vex::directionType::rev, 120, vex::velocityUnits::pct);
	if(false){
	Intake.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if( false){
	Intake.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Intake.stop(vex::brakeType::brake);
}
	if( false){
	Rollers.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if(false){
	Rollers.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Rollers.stop(vex::brakeType::brake);
}
	  if(false){
	FlyWheel.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	FlyWheel.stop(vex::brakeType::coast);
}
	if(false) {
	pneum.set( true );
	this_thread::sleep_for(500);
	pneum.set( false );
}
	if(false){
	Extension.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	}else if(false){
	Extension.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
} else{
	Extension.stop(vex::brakeType::brake);
}
	task::sleep(60);
	RFront.spin(vex::directionType::rev,165, vex::velocityUnits::pct);
	RBack.spin(vex::directionType::rev, 165, vex::velocityUnits::pct);
	LFront.spin(vex::directionType::rev, 93,  vex::velocityUnits::pct);
	LBack.spin(vex::directionType::rev, 93, vex::velocityUnits::pct);
	if(false){
	Intake.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if( false){
	Intake.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Intake.stop(vex::brakeType::brake);
}
	if( false){
	Rollers.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if(false){
	Rollers.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Rollers.stop(vex::brakeType::brake);
}
	  if(false){
	FlyWheel.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	FlyWheel.stop(vex::brakeType::coast);
}
	if(false) {
	pneum.set( true );
	this_thread::sleep_for(500);
	pneum.set( false );
}
	if(false){
	Extension.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	}else if(false){
	Extension.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
} else{
	Extension.stop(vex::brakeType::brake);
}
	task::sleep(100);
	RFront.spin(vex::directionType::rev,163, vex::velocityUnits::pct);
	RBack.spin(vex::directionType::rev, 163, vex::velocityUnits::pct);
	LFront.spin(vex::directionType::rev, 95,  vex::velocityUnits::pct);
	LBack.spin(vex::directionType::rev, 95, vex::velocityUnits::pct);
	if(false){
	Intake.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if( false){
	Intake.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Intake.stop(vex::brakeType::brake);
}
	if( false){
	Rollers.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if(false){
	Rollers.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Rollers.stop(vex::brakeType::brake);
}
	  if(false){
	FlyWheel.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	FlyWheel.stop(vex::brakeType::coast);
}
	if(false) {
	pneum.set( true );
	this_thread::sleep_for(500);
	pneum.set( false );
}
	if(false){
	Extension.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	}else if(false){
	Extension.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
} else{
	Extension.stop(vex::brakeType::brake);
}
	task::sleep(60);
	RFront.spin(vex::directionType::rev,145, vex::velocityUnits::pct);
	RBack.spin(vex::directionType::rev, 145, vex::velocityUnits::pct);
	LFront.spin(vex::directionType::rev, 113,  vex::velocityUnits::pct);
	LBack.spin(vex::directionType::rev, 113, vex::velocityUnits::pct);
	if(false){
	Intake.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if( false){
	Intake.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Intake.stop(vex::brakeType::brake);
}
	if( false){
	Rollers.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if(false){
	Rollers.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Rollers.stop(vex::brakeType::brake);
}
	  if(false){
	FlyWheel.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	FlyWheel.stop(vex::brakeType::coast);
}
	if(false) {
	pneum.set( true );
	this_thread::sleep_for(500);
	pneum.set( false );
}
	if(false){
	Extension.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	}else if(false){
	Extension.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
} else{
	Extension.stop(vex::brakeType::brake);
}
	task::sleep(30);
	RFront.spin(vex::directionType::rev,129, vex::velocityUnits::pct);
	RBack.spin(vex::directionType::rev, 129, vex::velocityUnits::pct);
	LFront.spin(vex::directionType::rev, 129,  vex::velocityUnits::pct);
	LBack.spin(vex::directionType::rev, 129, vex::velocityUnits::pct);
	if(false){
	Intake.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if( false){
	Intake.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Intake.stop(vex::brakeType::brake);
}
	if( false){
	Rollers.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if(false){
	Rollers.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Rollers.stop(vex::brakeType::brake);
}
	  if(false){
	FlyWheel.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	FlyWheel.stop(vex::brakeType::coast);
}
	if(false) {
	pneum.set( true );
	this_thread::sleep_for(500);
	pneum.set( false );
}
	if(false){
	Extension.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	}else if(false){
	Extension.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
} else{
	Extension.stop(vex::brakeType::brake);
}
	task::sleep(580);
	RFront.spin(vex::directionType::rev,147, vex::velocityUnits::pct);
	RBack.spin(vex::directionType::rev, 147, vex::velocityUnits::pct);
	LFront.spin(vex::directionType::rev, 111,  vex::velocityUnits::pct);
	LBack.spin(vex::directionType::rev, 111, vex::velocityUnits::pct);
	if(false){
	Intake.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if( false){
	Intake.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Intake.stop(vex::brakeType::brake);
}
	if( false){
	Rollers.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if(false){
	Rollers.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Rollers.stop(vex::brakeType::brake);
}
	  if(false){
	FlyWheel.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	FlyWheel.stop(vex::brakeType::coast);
}
	if(false) {
	pneum.set( true );
	this_thread::sleep_for(500);
	pneum.set( false );
}
	if(false){
	Extension.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	}else if(false){
	Extension.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
} else{
	Extension.stop(vex::brakeType::brake);
}
	task::sleep(40);
	RFront.spin(vex::directionType::rev,202, vex::velocityUnits::pct);
	RBack.spin(vex::directionType::rev, 202, vex::velocityUnits::pct);
	LFront.spin(vex::directionType::rev, 56,  vex::velocityUnits::pct);
	LBack.spin(vex::directionType::rev, 56, vex::velocityUnits::pct);
	if(false){
	Intake.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if( false){
	Intake.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Intake.stop(vex::brakeType::brake);
}
	if( false){
	Rollers.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if(false){
	Rollers.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Rollers.stop(vex::brakeType::brake);
}
	  if(false){
	FlyWheel.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	FlyWheel.stop(vex::brakeType::coast);
}
	if(false) {
	pneum.set( true );
	this_thread::sleep_for(500);
	pneum.set( false );
}
	if(false){
	Extension.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	}else if(false){
	Extension.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
} else{
	Extension.stop(vex::brakeType::brake);
}
	task::sleep(60);
	RFront.spin(vex::directionType::rev,0, vex::velocityUnits::pct);
	RBack.spin(vex::directionType::rev, 0, vex::velocityUnits::pct);
	LFront.spin(vex::directionType::rev, 2,  vex::velocityUnits::pct);
	LBack.spin(vex::directionType::rev, 2, vex::velocityUnits::pct);
	if(false){
	Intake.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if( false){
	Intake.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Intake.stop(vex::brakeType::brake);
}
	if( false){
	Rollers.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if(false){
	Rollers.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Rollers.stop(vex::brakeType::brake);
}
	  if(false){
	FlyWheel.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	FlyWheel.stop(vex::brakeType::coast);
}
	if(false) {
	pneum.set( true );
	this_thread::sleep_for(500);
	pneum.set( false );
}
	if(false){
	Extension.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	}else if(false){
	Extension.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
} else{
	Extension.stop(vex::brakeType::brake);
}
	task::sleep(270);
	RFront.spin(vex::directionType::rev,129, vex::velocityUnits::pct);
	RBack.spin(vex::directionType::rev, 129, vex::velocityUnits::pct);
	LFront.spin(vex::directionType::rev, 129,  vex::velocityUnits::pct);
	LBack.spin(vex::directionType::rev, 129, vex::velocityUnits::pct);
	if(false){
	Intake.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if( false){
	Intake.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Intake.stop(vex::brakeType::brake);
}
	if( false){
	Rollers.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if(false){
	Rollers.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Rollers.stop(vex::brakeType::brake);
}
	  if(false){
	FlyWheel.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	FlyWheel.stop(vex::brakeType::coast);
}
	if(false) {
	pneum.set( true );
	this_thread::sleep_for(500);
	pneum.set( false );
}
	if(false){
	Extension.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	}else if(false){
	Extension.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
} else{
	Extension.stop(vex::brakeType::brake);
}
	task::sleep(160);
	RFront.spin(vex::directionType::rev,129, vex::velocityUnits::pct);
	RBack.spin(vex::directionType::rev, 129, vex::velocityUnits::pct);
	LFront.spin(vex::directionType::rev, 129,  vex::velocityUnits::pct);
	LBack.spin(vex::directionType::rev, 129, vex::velocityUnits::pct);
	if(false){
	Intake.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if( false){
	Intake.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Intake.stop(vex::brakeType::brake);
}
	if( false){
	Rollers.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if(false){
	Rollers.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Rollers.stop(vex::brakeType::brake);
}
	  if(true){
	FlyWheel.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	FlyWheel.stop(vex::brakeType::coast);
}
	if(false) {
	pneum.set( true );
	this_thread::sleep_for(500);
	pneum.set( false );
}
	if(false){
	Extension.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	}else if(false){
	Extension.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
} else{
	Extension.stop(vex::brakeType::brake);
}
	task::sleep(130);
	RFront.spin(vex::directionType::rev,127, vex::velocityUnits::pct);
	RBack.spin(vex::directionType::rev, 131, vex::velocityUnits::pct);
	LFront.spin(vex::directionType::rev, 131,  vex::velocityUnits::pct);
	LBack.spin(vex::directionType::rev, 127, vex::velocityUnits::pct);
	if(false){
	Intake.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if( false){
	Intake.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Intake.stop(vex::brakeType::brake);
}
	if( false){
	Rollers.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if(false){
	Rollers.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Rollers.stop(vex::brakeType::brake);
}
	  if(true){
	FlyWheel.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	FlyWheel.stop(vex::brakeType::coast);
}
	if(false) {
	pneum.set( true );
	this_thread::sleep_for(500);
	pneum.set( false );
}
	if(false){
	Extension.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	}else if(false){
	Extension.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
} else{
	Extension.stop(vex::brakeType::brake);
}
	task::sleep(60);
	RFront.spin(vex::directionType::rev,119, vex::velocityUnits::pct);
	RBack.spin(vex::directionType::rev, 139, vex::velocityUnits::pct);
	LFront.spin(vex::directionType::rev, 139,  vex::velocityUnits::pct);
	LBack.spin(vex::directionType::rev, 119, vex::velocityUnits::pct);
	if(false){
	Intake.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if( false){
	Intake.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Intake.stop(vex::brakeType::brake);
}
	if( false){
	Rollers.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if(false){
	Rollers.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Rollers.stop(vex::brakeType::brake);
}
	  if(true){
	FlyWheel.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	FlyWheel.stop(vex::brakeType::coast);
}
	if(false) {
	pneum.set( true );
	this_thread::sleep_for(500);
	pneum.set( false );
}
	if(false){
	Extension.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	}else if(false){
	Extension.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
} else{
	Extension.stop(vex::brakeType::brake);
}
	task::sleep(40);
	RFront.spin(vex::directionType::rev,4, vex::velocityUnits::pct);
	RBack.spin(vex::directionType::rev, 4, vex::velocityUnits::pct);
	LFront.spin(vex::directionType::rev, 4,  vex::velocityUnits::pct);
	LBack.spin(vex::directionType::rev, 4, vex::velocityUnits::pct);
	if(false){
	Intake.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if( false){
	Intake.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Intake.stop(vex::brakeType::brake);
}
	if( false){
	Rollers.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if(false){
	Rollers.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Rollers.stop(vex::brakeType::brake);
}
	  if(true){
	FlyWheel.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	FlyWheel.stop(vex::brakeType::coast);
}
	if(false) {
	pneum.set( true );
	this_thread::sleep_for(500);
	pneum.set( false );
}
	if(false){
	Extension.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	}else if(false){
	Extension.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
} else{
	Extension.stop(vex::brakeType::brake);
}
	task::sleep(60);
	RFront.spin(vex::directionType::rev,0, vex::velocityUnits::pct);
	RBack.spin(vex::directionType::rev, 0, vex::velocityUnits::pct);
	LFront.spin(vex::directionType::rev, 0,  vex::velocityUnits::pct);
	LBack.spin(vex::directionType::rev, 0, vex::velocityUnits::pct);
	if(false){
	Intake.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if( false){
	Intake.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Intake.stop(vex::brakeType::brake);
}
	if( false){
	Rollers.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if(false){
	Rollers.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Rollers.stop(vex::brakeType::brake);
}
	  if(true){
	FlyWheel.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	FlyWheel.stop(vex::brakeType::coast);
}
	if(false) {
	pneum.set( true );
	this_thread::sleep_for(500);
	pneum.set( false );
}
	if(false){
	Extension.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	}else if(false){
	Extension.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
} else{
	Extension.stop(vex::brakeType::brake);
}
	task::sleep(180);
	RFront.spin(vex::directionType::rev,5, vex::velocityUnits::pct);
	RBack.spin(vex::directionType::rev, 5, vex::velocityUnits::pct);
	LFront.spin(vex::directionType::rev, 251,  vex::velocityUnits::pct);
	LBack.spin(vex::directionType::rev, 251, vex::velocityUnits::pct);
	if(false){
	Intake.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if( false){
	Intake.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Intake.stop(vex::brakeType::brake);
}
	if( false){
	Rollers.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if(false){
	Rollers.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Rollers.stop(vex::brakeType::brake);
}
	  if(true){
	FlyWheel.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	FlyWheel.stop(vex::brakeType::coast);
}
	if(false) {
	pneum.set( true );
	this_thread::sleep_for(500);
	pneum.set( false );
}
	if(false){
	Extension.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	}else if(false){
	Extension.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
} else{
	Extension.stop(vex::brakeType::brake);
}
	task::sleep(40);
	RFront.spin(vex::directionType::rev,127, vex::velocityUnits::pct);
	RBack.spin(vex::directionType::rev, 127, vex::velocityUnits::pct);
	LFront.spin(vex::directionType::rev, 129,  vex::velocityUnits::pct);
	LBack.spin(vex::directionType::rev, 129, vex::velocityUnits::pct);
	if(false){
	Intake.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if( false){
	Intake.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Intake.stop(vex::brakeType::brake);
}
	if( false){
	Rollers.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if(false){
	Rollers.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Rollers.stop(vex::brakeType::brake);
}
	  if(true){
	FlyWheel.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	FlyWheel.stop(vex::brakeType::coast);
}
	if(false) {
	pneum.set( true );
	this_thread::sleep_for(500);
	pneum.set( false );
}
	if(false){
	Extension.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	}else if(false){
	Extension.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
} else{
	Extension.stop(vex::brakeType::brake);
}
	task::sleep(690);
	RFront.spin(vex::directionType::rev,65, vex::velocityUnits::pct);
	RBack.spin(vex::directionType::rev, 65, vex::velocityUnits::pct);
	LFront.spin(vex::directionType::rev, 191,  vex::velocityUnits::pct);
	LBack.spin(vex::directionType::rev, 191, vex::velocityUnits::pct);
	if(false){
	Intake.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if( false){
	Intake.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Intake.stop(vex::brakeType::brake);
}
	if( false){
	Rollers.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if(false){
	Rollers.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Rollers.stop(vex::brakeType::brake);
}
	  if(true){
	FlyWheel.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	FlyWheel.stop(vex::brakeType::coast);
}
	if(false) {
	pneum.set( true );
	this_thread::sleep_for(500);
	pneum.set( false );
}
	if(false){
	Extension.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	}else if(false){
	Extension.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
} else{
	Extension.stop(vex::brakeType::brake);
}
	task::sleep(90);
	RFront.spin(vex::directionType::rev,0, vex::velocityUnits::pct);
	RBack.spin(vex::directionType::rev, 0, vex::velocityUnits::pct);
	LFront.spin(vex::directionType::rev, 0,  vex::velocityUnits::pct);
	LBack.spin(vex::directionType::rev, 0, vex::velocityUnits::pct);
	if(false){
	Intake.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if( false){
	Intake.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Intake.stop(vex::brakeType::brake);
}
	if( false){
	Rollers.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if(false){
	Rollers.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Rollers.stop(vex::brakeType::brake);
}
	  if(true){
	FlyWheel.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	FlyWheel.stop(vex::brakeType::coast);
}
	if(false) {
	pneum.set( true );
	this_thread::sleep_for(500);
	pneum.set( false );
}
	if(false){
	Extension.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	}else if(false){
	Extension.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
} else{
	Extension.stop(vex::brakeType::brake);
}
	task::sleep(480);
	RFront.spin(vex::directionType::rev,63, vex::velocityUnits::pct);
	RBack.spin(vex::directionType::rev, 63, vex::velocityUnits::pct);
	LFront.spin(vex::directionType::rev, 193,  vex::velocityUnits::pct);
	LBack.spin(vex::directionType::rev, 193, vex::velocityUnits::pct);
	if(false){
	Intake.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if( false){
	Intake.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Intake.stop(vex::brakeType::brake);
}
	if( false){
	Rollers.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if(false){
	Rollers.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Rollers.stop(vex::brakeType::brake);
}
	  if(true){
	FlyWheel.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	FlyWheel.stop(vex::brakeType::coast);
}
	if(false) {
	pneum.set( true );
	this_thread::sleep_for(500);
	pneum.set( false );
}
	if(false){
	Extension.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	}else if(false){
	Extension.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
} else{
	Extension.stop(vex::brakeType::brake);
}
	task::sleep(40);
	RFront.spin(vex::directionType::rev,112, vex::velocityUnits::pct);
	RBack.spin(vex::directionType::rev, 112, vex::velocityUnits::pct);
	LFront.spin(vex::directionType::rev, 144,  vex::velocityUnits::pct);
	LBack.spin(vex::directionType::rev, 144, vex::velocityUnits::pct);
	if(false){
	Intake.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if( false){
	Intake.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Intake.stop(vex::brakeType::brake);
}
	if( false){
	Rollers.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if(false){
	Rollers.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Rollers.stop(vex::brakeType::brake);
}
	  if(true){
	FlyWheel.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	FlyWheel.stop(vex::brakeType::coast);
}
	if(false) {
	pneum.set( true );
	this_thread::sleep_for(500);
	pneum.set( false );
}
	if(false){
	Extension.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	}else if(false){
	Extension.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
} else{
	Extension.stop(vex::brakeType::brake);
}
	task::sleep(60);
	RFront.spin(vex::directionType::rev,127, vex::velocityUnits::pct);
	RBack.spin(vex::directionType::rev, 127, vex::velocityUnits::pct);
	LFront.spin(vex::directionType::rev, 129,  vex::velocityUnits::pct);
	LBack.spin(vex::directionType::rev, 129, vex::velocityUnits::pct);
	if(false){
	Intake.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if( false){
	Intake.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Intake.stop(vex::brakeType::brake);
}
	if( false){
	Rollers.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if(false){
	Rollers.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Rollers.stop(vex::brakeType::brake);
}
	  if(true){
	FlyWheel.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	FlyWheel.stop(vex::brakeType::coast);
}
	if(false) {
	pneum.set( true );
	this_thread::sleep_for(500);
	pneum.set( false );
}
	if(false){
	Extension.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	}else if(false){
	Extension.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
} else{
	Extension.stop(vex::brakeType::brake);
}
	task::sleep(330);
	RFront.spin(vex::directionType::rev,117, vex::velocityUnits::pct);
	RBack.spin(vex::directionType::rev, 117, vex::velocityUnits::pct);
	LFront.spin(vex::directionType::rev, 139,  vex::velocityUnits::pct);
	LBack.spin(vex::directionType::rev, 139, vex::velocityUnits::pct);
	if(false){
	Intake.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if( false){
	Intake.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Intake.stop(vex::brakeType::brake);
}
	if( false){
	Rollers.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if(false){
	Rollers.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Rollers.stop(vex::brakeType::brake);
}
	  if(true){
	FlyWheel.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	FlyWheel.stop(vex::brakeType::coast);
}
	if(false) {
	pneum.set( true );
	this_thread::sleep_for(500);
	pneum.set( false );
}
	if(false){
	Extension.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	}else if(false){
	Extension.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
} else{
	Extension.stop(vex::brakeType::brake);
}
	task::sleep(60);
	RFront.spin(vex::directionType::rev,88, vex::velocityUnits::pct);
	RBack.spin(vex::directionType::rev, 88, vex::velocityUnits::pct);
	LFront.spin(vex::directionType::rev, 168,  vex::velocityUnits::pct);
	LBack.spin(vex::directionType::rev, 168, vex::velocityUnits::pct);
	if(false){
	Intake.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if( false){
	Intake.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Intake.stop(vex::brakeType::brake);
}
	if( false){
	Rollers.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if(false){
	Rollers.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Rollers.stop(vex::brakeType::brake);
}
	  if(true){
	FlyWheel.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	FlyWheel.stop(vex::brakeType::coast);
}
	if(false) {
	pneum.set( true );
	this_thread::sleep_for(500);
	pneum.set( false );
}
	if(false){
	Extension.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	}else if(false){
	Extension.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
} else{
	Extension.stop(vex::brakeType::brake);
}
	task::sleep(40);
	RFront.spin(vex::directionType::rev,0, vex::velocityUnits::pct);
	RBack.spin(vex::directionType::rev, 0, vex::velocityUnits::pct);
	LFront.spin(vex::directionType::rev, 0,  vex::velocityUnits::pct);
	LBack.spin(vex::directionType::rev, 0, vex::velocityUnits::pct);
	if(false){
	Intake.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if( false){
	Intake.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Intake.stop(vex::brakeType::brake);
}
	if( false){
	Rollers.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if(false){
	Rollers.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Rollers.stop(vex::brakeType::brake);
}
	  if(true){
	FlyWheel.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	FlyWheel.stop(vex::brakeType::coast);
}
	if(false) {
	pneum.set( true );
	this_thread::sleep_for(500);
	pneum.set( false );
}
	if(false){
	Extension.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	}else if(false){
	Extension.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
} else{
	Extension.stop(vex::brakeType::brake);
}
	task::sleep(490);
	RFront.spin(vex::directionType::rev,244, vex::velocityUnits::pct);
	RBack.spin(vex::directionType::rev, 244, vex::velocityUnits::pct);
	LFront.spin(vex::directionType::rev, 12,  vex::velocityUnits::pct);
	LBack.spin(vex::directionType::rev, 12, vex::velocityUnits::pct);
	if(false){
	Intake.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if( false){
	Intake.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Intake.stop(vex::brakeType::brake);
}
	if( false){
	Rollers.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if(false){
	Rollers.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Rollers.stop(vex::brakeType::brake);
}
	  if(true){
	FlyWheel.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	FlyWheel.stop(vex::brakeType::coast);
}
	if(false) {
	pneum.set( true );
	this_thread::sleep_for(500);
	pneum.set( false );
}
	if(false){
	Extension.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	}else if(false){
	Extension.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
} else{
	Extension.stop(vex::brakeType::brake);
}
	task::sleep(40);
	RFront.spin(vex::directionType::rev,179, vex::velocityUnits::pct);
	RBack.spin(vex::directionType::rev, 179, vex::velocityUnits::pct);
	LFront.spin(vex::directionType::rev, 77,  vex::velocityUnits::pct);
	LBack.spin(vex::directionType::rev, 77, vex::velocityUnits::pct);
	if(false){
	Intake.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if( false){
	Intake.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Intake.stop(vex::brakeType::brake);
}
	if( false){
	Rollers.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if(false){
	Rollers.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Rollers.stop(vex::brakeType::brake);
}
	  if(true){
	FlyWheel.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	FlyWheel.stop(vex::brakeType::coast);
}
	if(false) {
	pneum.set( true );
	this_thread::sleep_for(500);
	pneum.set( false );
}
	if(false){
	Extension.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	}else if(false){
	Extension.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
} else{
	Extension.stop(vex::brakeType::brake);
}
	task::sleep(60);
	RFront.spin(vex::directionType::rev,140, vex::velocityUnits::pct);
	RBack.spin(vex::directionType::rev, 140, vex::velocityUnits::pct);
	LFront.spin(vex::directionType::rev, 116,  vex::velocityUnits::pct);
	LBack.spin(vex::directionType::rev, 116, vex::velocityUnits::pct);
	if(false){
	Intake.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if( false){
	Intake.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Intake.stop(vex::brakeType::brake);
}
	if( false){
	Rollers.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if(false){
	Rollers.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Rollers.stop(vex::brakeType::brake);
}
	  if(true){
	FlyWheel.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	FlyWheel.stop(vex::brakeType::coast);
}
	if(false) {
	pneum.set( true );
	this_thread::sleep_for(500);
	pneum.set( false );
}
	if(false){
	Extension.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	}else if(false){
	Extension.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
} else{
	Extension.stop(vex::brakeType::brake);
}
	task::sleep(40);
	RFront.spin(vex::directionType::rev,129, vex::velocityUnits::pct);
	RBack.spin(vex::directionType::rev, 129, vex::velocityUnits::pct);
	LFront.spin(vex::directionType::rev, 127,  vex::velocityUnits::pct);
	LBack.spin(vex::directionType::rev, 127, vex::velocityUnits::pct);
	if(false){
	Intake.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if( false){
	Intake.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Intake.stop(vex::brakeType::brake);
}
	if( false){
	Rollers.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if(false){
	Rollers.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Rollers.stop(vex::brakeType::brake);
}
	  if(true){
	FlyWheel.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	FlyWheel.stop(vex::brakeType::coast);
}
	if(false) {
	pneum.set( true );
	this_thread::sleep_for(500);
	pneum.set( false );
}
	if(false){
	Extension.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	}else if(false){
	Extension.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
} else{
	Extension.stop(vex::brakeType::brake);
}
	task::sleep(280);
	RFront.spin(vex::directionType::rev,0, vex::velocityUnits::pct);
	RBack.spin(vex::directionType::rev, 0, vex::velocityUnits::pct);
	LFront.spin(vex::directionType::rev, 0,  vex::velocityUnits::pct);
	LBack.spin(vex::directionType::rev, 0, vex::velocityUnits::pct);
	if(false){
	Intake.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if( false){
	Intake.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Intake.stop(vex::brakeType::brake);
}
	if( false){
	Rollers.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if(false){
	Rollers.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Rollers.stop(vex::brakeType::brake);
}
	  if(true){
	FlyWheel.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	FlyWheel.stop(vex::brakeType::coast);
}
	if(false) {
	pneum.set( true );
	this_thread::sleep_for(500);
	pneum.set( false );
}
	if(false){
	Extension.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	}else if(false){
	Extension.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
} else{
	Extension.stop(vex::brakeType::brake);
}
	task::sleep(2220);
	RFront.spin(vex::directionType::rev,0, vex::velocityUnits::pct);
	RBack.spin(vex::directionType::rev, 0, vex::velocityUnits::pct);
	LFront.spin(vex::directionType::rev, 0,  vex::velocityUnits::pct);
	LBack.spin(vex::directionType::rev, 0, vex::velocityUnits::pct);
	if(false){
	Intake.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if( false){
	Intake.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Intake.stop(vex::brakeType::brake);
}
	if( false){
	Rollers.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if(false){
	Rollers.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Rollers.stop(vex::brakeType::brake);
}
	  if(true){
	FlyWheel.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	FlyWheel.stop(vex::brakeType::coast);
}
	if(true) {
	pneum.set( true );
	this_thread::sleep_for(500);
	pneum.set( false );
}
	if(false){
	Extension.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	}else if(false){
	Extension.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
} else{
	Extension.stop(vex::brakeType::brake);
}
	task::sleep(10);
	RFront.spin(vex::directionType::rev,0, vex::velocityUnits::pct);
	RBack.spin(vex::directionType::rev, 0, vex::velocityUnits::pct);
	LFront.spin(vex::directionType::rev, 0,  vex::velocityUnits::pct);
	LBack.spin(vex::directionType::rev, 0, vex::velocityUnits::pct);
	if(false){
	Intake.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if( false){
	Intake.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Intake.stop(vex::brakeType::brake);
}
	if( false){
	Rollers.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if(false){
	Rollers.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Rollers.stop(vex::brakeType::brake);
}
	  if(true){
	FlyWheel.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	FlyWheel.stop(vex::brakeType::coast);
}
	if(false) {
	pneum.set( true );
	this_thread::sleep_for(500);
	pneum.set( false );
}
	if(false){
	Extension.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	}else if(false){
	Extension.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
} else{
	Extension.stop(vex::brakeType::brake);
}
	task::sleep(1630);
	RFront.spin(vex::directionType::rev,237, vex::velocityUnits::pct);
	RBack.spin(vex::directionType::rev, 237, vex::velocityUnits::pct);
	LFront.spin(vex::directionType::rev, 19,  vex::velocityUnits::pct);
	LBack.spin(vex::directionType::rev, 19, vex::velocityUnits::pct);
	if(false){
	Intake.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if( false){
	Intake.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Intake.stop(vex::brakeType::brake);
}
	if( false){
	Rollers.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if(false){
	Rollers.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Rollers.stop(vex::brakeType::brake);
}
	  if(true){
	FlyWheel.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	FlyWheel.stop(vex::brakeType::coast);
}
	if(false) {
	pneum.set( true );
	this_thread::sleep_for(500);
	pneum.set( false );
}
	if(false){
	Extension.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	}else if(false){
	Extension.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
} else{
	Extension.stop(vex::brakeType::brake);
}
	task::sleep(60);
	RFront.spin(vex::directionType::rev,233, vex::velocityUnits::pct);
	RBack.spin(vex::directionType::rev, 233, vex::velocityUnits::pct);
	LFront.spin(vex::directionType::rev, 23,  vex::velocityUnits::pct);
	LBack.spin(vex::directionType::rev, 23, vex::velocityUnits::pct);
	if(false){
	Intake.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if( false){
	Intake.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Intake.stop(vex::brakeType::brake);
}
	if( false){
	Rollers.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if(false){
	Rollers.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Rollers.stop(vex::brakeType::brake);
}
	  if(true){
	FlyWheel.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	FlyWheel.stop(vex::brakeType::coast);
}
	if(false) {
	pneum.set( true );
	this_thread::sleep_for(500);
	pneum.set( false );
}
	if(false){
	Extension.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	}else if(false){
	Extension.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
} else{
	Extension.stop(vex::brakeType::brake);
}
	task::sleep(40);
	RFront.spin(vex::directionType::rev,238, vex::velocityUnits::pct);
	RBack.spin(vex::directionType::rev, 238, vex::velocityUnits::pct);
	LFront.spin(vex::directionType::rev, 18,  vex::velocityUnits::pct);
	LBack.spin(vex::directionType::rev, 18, vex::velocityUnits::pct);
	if(false){
	Intake.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if( false){
	Intake.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Intake.stop(vex::brakeType::brake);
}
	if( false){
	Rollers.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if(false){
	Rollers.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Rollers.stop(vex::brakeType::brake);
}
	  if(true){
	FlyWheel.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	FlyWheel.stop(vex::brakeType::coast);
}
	if(false) {
	pneum.set( true );
	this_thread::sleep_for(500);
	pneum.set( false );
}
	if(false){
	Extension.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	}else if(false){
	Extension.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
} else{
	Extension.stop(vex::brakeType::brake);
}
	task::sleep(20);
	RFront.spin(vex::directionType::rev,0, vex::velocityUnits::pct);
	RBack.spin(vex::directionType::rev, 0, vex::velocityUnits::pct);
	LFront.spin(vex::directionType::rev, 0,  vex::velocityUnits::pct);
	LBack.spin(vex::directionType::rev, 0, vex::velocityUnits::pct);
	if(false){
	Intake.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if( false){
	Intake.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Intake.stop(vex::brakeType::brake);
}
	if( false){
	Rollers.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if(false){
	Rollers.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Rollers.stop(vex::brakeType::brake);
}
	  if(true){
	FlyWheel.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	FlyWheel.stop(vex::brakeType::coast);
}
	if(false) {
	pneum.set( true );
	this_thread::sleep_for(500);
	pneum.set( false );
}
	if(false){
	Extension.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	}else if(false){
	Extension.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
} else{
	Extension.stop(vex::brakeType::brake);
}
	task::sleep(2140);
	RFront.spin(vex::directionType::rev,0, vex::velocityUnits::pct);
	RBack.spin(vex::directionType::rev, 0, vex::velocityUnits::pct);
	LFront.spin(vex::directionType::rev, 0,  vex::velocityUnits::pct);
	LBack.spin(vex::directionType::rev, 0, vex::velocityUnits::pct);
	if(false){
	Intake.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if( false){
	Intake.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Intake.stop(vex::brakeType::brake);
}
	if( false){
	Rollers.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if(false){
	Rollers.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Rollers.stop(vex::brakeType::brake);
}
	  if(true){
	FlyWheel.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	FlyWheel.stop(vex::brakeType::coast);
}
	if(true) {
	pneum.set( true );
	this_thread::sleep_for(500);
	pneum.set( false );
}
	if(false){
	Extension.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	}else if(false){
	Extension.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
} else{
	Extension.stop(vex::brakeType::brake);
}
	task::sleep(10);
	RFront.spin(vex::directionType::rev,0, vex::velocityUnits::pct);
	RBack.spin(vex::directionType::rev, 0, vex::velocityUnits::pct);
	LFront.spin(vex::directionType::rev, 0,  vex::velocityUnits::pct);
	LBack.spin(vex::directionType::rev, 0, vex::velocityUnits::pct);
	if(false){
	Intake.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if( false){
	Intake.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Intake.stop(vex::brakeType::brake);
}
	if( false){
	Rollers.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if(false){
	Rollers.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Rollers.stop(vex::brakeType::brake);
}
	  if(true){
	FlyWheel.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	FlyWheel.stop(vex::brakeType::coast);
}
	if(false) {
	pneum.set( true );
	this_thread::sleep_for(500);
	pneum.set( false );
}
	if(false){
	Extension.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	}else if(false){
	Extension.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
} else{
	Extension.stop(vex::brakeType::brake);
}
	task::sleep(800);
	RFront.spin(vex::directionType::rev,0, vex::velocityUnits::pct);
	RBack.spin(vex::directionType::rev, 0, vex::velocityUnits::pct);
	LFront.spin(vex::directionType::rev, 0,  vex::velocityUnits::pct);
	LBack.spin(vex::directionType::rev, 0, vex::velocityUnits::pct);
	if(false){
	Intake.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if( false){
	Intake.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Intake.stop(vex::brakeType::brake);
}
	if( false){
	Rollers.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if(false){
	Rollers.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Rollers.stop(vex::brakeType::brake);
}
	  if(false){
	FlyWheel.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	FlyWheel.stop(vex::brakeType::coast);
}
	if(false) {
	pneum.set( true );
	this_thread::sleep_for(500);
	pneum.set( false );
}
	if(false){
	Extension.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	}else if(false){
	Extension.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
} else{
	Extension.stop(vex::brakeType::brake);
}
	task::sleep(7230);
	RFront.spin(vex::directionType::rev,252, vex::velocityUnits::pct);
	RBack.spin(vex::directionType::rev, 252, vex::velocityUnits::pct);
	LFront.spin(vex::directionType::rev, 252,  vex::velocityUnits::pct);
	LBack.spin(vex::directionType::rev, 252, vex::velocityUnits::pct);
	if(false){
	Intake.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if( false){
	Intake.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Intake.stop(vex::brakeType::brake);
}
	if( false){
	Rollers.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if(false){
	Rollers.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Rollers.stop(vex::brakeType::brake);
}
	  if(false){
	FlyWheel.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	FlyWheel.stop(vex::brakeType::coast);
}
	if(false) {
	pneum.set( true );
	this_thread::sleep_for(500);
	pneum.set( false );
}
	if(false){
	Extension.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	}else if(false){
	Extension.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
} else{
	Extension.stop(vex::brakeType::brake);
}
	task::sleep(40);
	RFront.spin(vex::directionType::rev,230, vex::velocityUnits::pct);
	RBack.spin(vex::directionType::rev, 230, vex::velocityUnits::pct);
	LFront.spin(vex::directionType::rev, 230,  vex::velocityUnits::pct);
	LBack.spin(vex::directionType::rev, 230, vex::velocityUnits::pct);
	if(false){
	Intake.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if( false){
	Intake.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Intake.stop(vex::brakeType::brake);
}
	if( false){
	Rollers.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if(false){
	Rollers.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Rollers.stop(vex::brakeType::brake);
}
	  if(false){
	FlyWheel.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	FlyWheel.stop(vex::brakeType::coast);
}
	if(false) {
	pneum.set( true );
	this_thread::sleep_for(500);
	pneum.set( false );
}
	if(false){
	Extension.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	}else if(false){
	Extension.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
} else{
	Extension.stop(vex::brakeType::brake);
}
	task::sleep(60);
	RFront.spin(vex::directionType::rev,224, vex::velocityUnits::pct);
	RBack.spin(vex::directionType::rev, 224, vex::velocityUnits::pct);
	LFront.spin(vex::directionType::rev, 224,  vex::velocityUnits::pct);
	LBack.spin(vex::directionType::rev, 224, vex::velocityUnits::pct);
	if(false){
	Intake.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if( false){
	Intake.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Intake.stop(vex::brakeType::brake);
}
	if( false){
	Rollers.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if(false){
	Rollers.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Rollers.stop(vex::brakeType::brake);
}
	  if(false){
	FlyWheel.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	FlyWheel.stop(vex::brakeType::coast);
}
	if(false) {
	pneum.set( true );
	this_thread::sleep_for(500);
	pneum.set( false );
}
	if(false){
	Extension.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	}else if(false){
	Extension.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
} else{
	Extension.stop(vex::brakeType::brake);
}
	task::sleep(30);
	RFront.spin(vex::directionType::rev,0, vex::velocityUnits::pct);
	RBack.spin(vex::directionType::rev, 0, vex::velocityUnits::pct);
	LFront.spin(vex::directionType::rev, 0,  vex::velocityUnits::pct);
	LBack.spin(vex::directionType::rev, 0, vex::velocityUnits::pct);
	if(false){
	Intake.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if( false){
	Intake.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Intake.stop(vex::brakeType::brake);
}
	if( false){
	Rollers.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if(false){
	Rollers.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Rollers.stop(vex::brakeType::brake);
}
	  if(false){
	FlyWheel.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	FlyWheel.stop(vex::brakeType::coast);
}
	if(false) {
	pneum.set( true );
	this_thread::sleep_for(500);
	pneum.set( false );
}
	if(false){
	Extension.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	}else if(false){
	Extension.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
} else{
	Extension.stop(vex::brakeType::brake);
}
	task::sleep(17870);
	RFront.spin(vex::directionType::rev,0, vex::velocityUnits::pct);
	RBack.spin(vex::directionType::rev, 0, vex::velocityUnits::pct);
	LFront.spin(vex::directionType::rev, 0,  vex::velocityUnits::pct);
	LBack.spin(vex::directionType::rev, 0, vex::velocityUnits::pct);
	if(false){
	Intake.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if( false){
	Intake.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Intake.stop(vex::brakeType::brake);
}
	if( false){
	Rollers.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if(false){
	Rollers.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Rollers.stop(vex::brakeType::brake);
}
	  if(true){
	FlyWheel.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	FlyWheel.stop(vex::brakeType::coast);
}
	if(false) {
	pneum.set( true );
	this_thread::sleep_for(500);
	pneum.set( false );
}
	if(false){
	Extension.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	}else if(false){
	Extension.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
} else{
	Extension.stop(vex::brakeType::brake);
}
	task::sleep(1570);
	RFront.spin(vex::directionType::rev,0, vex::velocityUnits::pct);
	RBack.spin(vex::directionType::rev, 0, vex::velocityUnits::pct);
	LFront.spin(vex::directionType::rev, 0,  vex::velocityUnits::pct);
	LBack.spin(vex::directionType::rev, 0, vex::velocityUnits::pct);
	if(true){
	Intake.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if( false){
	Intake.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Intake.stop(vex::brakeType::brake);
}
	if( false){
	Rollers.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if(false){
	Rollers.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Rollers.stop(vex::brakeType::brake);
}
	  if(true){
	FlyWheel.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	FlyWheel.stop(vex::brakeType::coast);
}
	if(false) {
	pneum.set( true );
	this_thread::sleep_for(500);
	pneum.set( false );
}
	if(false){
	Extension.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	}else if(false){
	Extension.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
} else{
	Extension.stop(vex::brakeType::brake);
}
	task::sleep(7640);
	RFront.spin(vex::directionType::rev,0, vex::velocityUnits::pct);
	RBack.spin(vex::directionType::rev, 0, vex::velocityUnits::pct);
	LFront.spin(vex::directionType::rev, 0,  vex::velocityUnits::pct);
	LBack.spin(vex::directionType::rev, 0, vex::velocityUnits::pct);
	if(false){
	Intake.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if( false){
	Intake.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Intake.stop(vex::brakeType::brake);
}
	if( false){
	Rollers.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if(false){
	Rollers.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Rollers.stop(vex::brakeType::brake);
}
	  if(true){
	FlyWheel.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	FlyWheel.stop(vex::brakeType::coast);
}
	if(false) {
	pneum.set( true );
	this_thread::sleep_for(500);
	pneum.set( false );
}
	if(false){
	Extension.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	}else if(false){
	Extension.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
} else{
	Extension.stop(vex::brakeType::brake);
}
	task::sleep(3210);
	RFront.spin(vex::directionType::rev,0, vex::velocityUnits::pct);
	RBack.spin(vex::directionType::rev, 0, vex::velocityUnits::pct);
	LFront.spin(vex::directionType::rev, 0,  vex::velocityUnits::pct);
	LBack.spin(vex::directionType::rev, 0, vex::velocityUnits::pct);
	if(false){
	Intake.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if( false){
	Intake.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Intake.stop(vex::brakeType::brake);
}
	if( false){
	Rollers.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if(false){
	Rollers.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Rollers.stop(vex::brakeType::brake);
}
	  if(true){
	FlyWheel.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	FlyWheel.stop(vex::brakeType::coast);
}
	if(true) {
	pneum.set( true );
	this_thread::sleep_for(500);
	pneum.set( false );
}
	if(false){
	Extension.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	}else if(false){
	Extension.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
} else{
	Extension.stop(vex::brakeType::brake);
}
	task::sleep(10);
	RFront.spin(vex::directionType::rev,0, vex::velocityUnits::pct);
	RBack.spin(vex::directionType::rev, 0, vex::velocityUnits::pct);
	LFront.spin(vex::directionType::rev, 0,  vex::velocityUnits::pct);
	LBack.spin(vex::directionType::rev, 0, vex::velocityUnits::pct);
	if(false){
	Intake.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if( false){
	Intake.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Intake.stop(vex::brakeType::brake);
}
	if( false){
	Rollers.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if(false){
	Rollers.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Rollers.stop(vex::brakeType::brake);
}
	  if(true){
	FlyWheel.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	FlyWheel.stop(vex::brakeType::coast);
}
	if(false) {
	pneum.set( true );
	this_thread::sleep_for(500);
	pneum.set( false );
}
	if(false){
	Extension.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	}else if(false){
	Extension.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
} else{
	Extension.stop(vex::brakeType::brake);
}
	task::sleep(1130);
	RFront.spin(vex::directionType::rev,0, vex::velocityUnits::pct);
	RBack.spin(vex::directionType::rev, 0, vex::velocityUnits::pct);
	LFront.spin(vex::directionType::rev, 0,  vex::velocityUnits::pct);
	LBack.spin(vex::directionType::rev, 0, vex::velocityUnits::pct);
	if(false){
	Intake.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if( false){
	Intake.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Intake.stop(vex::brakeType::brake);
}
	if( false){
	Rollers.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if(false){
	Rollers.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Rollers.stop(vex::brakeType::brake);
}
	  if(false){
	FlyWheel.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	FlyWheel.stop(vex::brakeType::coast);
}
	if(false) {
	pneum.set( true );
	this_thread::sleep_for(500);
	pneum.set( false );
}
	if(false){
	Extension.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	}else if(false){
	Extension.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
} else{
	Extension.stop(vex::brakeType::brake);
}
	task::sleep(2320);
	RFront.spin(vex::directionType::rev,10, vex::velocityUnits::pct);
	RBack.spin(vex::directionType::rev, 10, vex::velocityUnits::pct);
	LFront.spin(vex::directionType::rev, 10,  vex::velocityUnits::pct);
	LBack.spin(vex::directionType::rev, 10, vex::velocityUnits::pct);
	if(false){
	Intake.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if( false){
	Intake.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Intake.stop(vex::brakeType::brake);
}
	if( false){
	Rollers.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if(false){
	Rollers.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Rollers.stop(vex::brakeType::brake);
}
	  if(false){
	FlyWheel.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	FlyWheel.stop(vex::brakeType::coast);
}
	if(false) {
	pneum.set( true );
	this_thread::sleep_for(500);
	pneum.set( false );
}
	if(false){
	Extension.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	}else if(false){
	Extension.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
} else{
	Extension.stop(vex::brakeType::brake);
}
	task::sleep(60);
	RFront.spin(vex::directionType::rev,40, vex::velocityUnits::pct);
	RBack.spin(vex::directionType::rev, 40, vex::velocityUnits::pct);
	LFront.spin(vex::directionType::rev, 40,  vex::velocityUnits::pct);
	LBack.spin(vex::directionType::rev, 40, vex::velocityUnits::pct);
	if(false){
	Intake.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if( false){
	Intake.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Intake.stop(vex::brakeType::brake);
}
	if( false){
	Rollers.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if(false){
	Rollers.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Rollers.stop(vex::brakeType::brake);
}
	  if(false){
	FlyWheel.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	FlyWheel.stop(vex::brakeType::coast);
}
	if(false) {
	pneum.set( true );
	this_thread::sleep_for(500);
	pneum.set( false );
}
	if(false){
	Extension.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	}else if(false){
	Extension.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
} else{
	Extension.stop(vex::brakeType::brake);
}
	task::sleep(40);
	RFront.spin(vex::directionType::rev,80, vex::velocityUnits::pct);
	RBack.spin(vex::directionType::rev, 80, vex::velocityUnits::pct);
	LFront.spin(vex::directionType::rev, 80,  vex::velocityUnits::pct);
	LBack.spin(vex::directionType::rev, 80, vex::velocityUnits::pct);
	if(false){
	Intake.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if( false){
	Intake.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Intake.stop(vex::brakeType::brake);
}
	if( false){
	Rollers.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if(false){
	Rollers.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Rollers.stop(vex::brakeType::brake);
}
	  if(false){
	FlyWheel.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	FlyWheel.stop(vex::brakeType::coast);
}
	if(false) {
	pneum.set( true );
	this_thread::sleep_for(500);
	pneum.set( false );
}
	if(false){
	Extension.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	}else if(false){
	Extension.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
} else{
	Extension.stop(vex::brakeType::brake);
}
	task::sleep(10);
	RFront.spin(vex::directionType::rev,0, vex::velocityUnits::pct);
	RBack.spin(vex::directionType::rev, 0, vex::velocityUnits::pct);
	LFront.spin(vex::directionType::rev, 0,  vex::velocityUnits::pct);
	LBack.spin(vex::directionType::rev, 0, vex::velocityUnits::pct);
	if(false){
	Intake.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if( false){
	Intake.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Intake.stop(vex::brakeType::brake);
}
	if( false){
	Rollers.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if(false){
	Rollers.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Rollers.stop(vex::brakeType::brake);
}
	  if(false){
	FlyWheel.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	FlyWheel.stop(vex::brakeType::coast);
}
	if(false) {
	pneum.set( true );
	this_thread::sleep_for(500);
	pneum.set( false );
}
	if(false){
	Extension.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	}else if(false){
	Extension.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
} else{
	Extension.stop(vex::brakeType::brake);
}
	task::sleep(30);
	RFront.spin(vex::directionType::rev,174, vex::velocityUnits::pct);
	RBack.spin(vex::directionType::rev, 174, vex::velocityUnits::pct);
	LFront.spin(vex::directionType::rev, 174,  vex::velocityUnits::pct);
	LBack.spin(vex::directionType::rev, 174, vex::velocityUnits::pct);
	if(false){
	Intake.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if( false){
	Intake.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Intake.stop(vex::brakeType::brake);
}
	if( false){
	Rollers.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if(false){
	Rollers.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Rollers.stop(vex::brakeType::brake);
}
	  if(false){
	FlyWheel.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	FlyWheel.stop(vex::brakeType::coast);
}
	if(false) {
	pneum.set( true );
	this_thread::sleep_for(500);
	pneum.set( false );
}
	if(false){
	Extension.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	}else if(false){
	Extension.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
} else{
	Extension.stop(vex::brakeType::brake);
}
	task::sleep(10);
	RFront.spin(vex::directionType::rev,184, vex::velocityUnits::pct);
	RBack.spin(vex::directionType::rev, 184, vex::velocityUnits::pct);
	LFront.spin(vex::directionType::rev, 184,  vex::velocityUnits::pct);
	LBack.spin(vex::directionType::rev, 184, vex::velocityUnits::pct);
	if(false){
	Intake.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if( false){
	Intake.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Intake.stop(vex::brakeType::brake);
}
	if( false){
	Rollers.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if(false){
	Rollers.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Rollers.stop(vex::brakeType::brake);
}
	  if(false){
	FlyWheel.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	FlyWheel.stop(vex::brakeType::coast);
}
	if(false) {
	pneum.set( true );
	this_thread::sleep_for(500);
	pneum.set( false );
}
	if(false){
	Extension.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	}else if(false){
	Extension.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
} else{
	Extension.stop(vex::brakeType::brake);
}
	task::sleep(10);
	RFront.spin(vex::directionType::rev,0, vex::velocityUnits::pct);
	RBack.spin(vex::directionType::rev, 0, vex::velocityUnits::pct);
	LFront.spin(vex::directionType::rev, 0,  vex::velocityUnits::pct);
	LBack.spin(vex::directionType::rev, 0, vex::velocityUnits::pct);
	if(false){
	Intake.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if( false){
	Intake.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Intake.stop(vex::brakeType::brake);
}
	if( false){
	Rollers.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if(false){
	Rollers.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Rollers.stop(vex::brakeType::brake);
}
	  if(false){
	FlyWheel.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	FlyWheel.stop(vex::brakeType::coast);
}
	if(false) {
	pneum.set( true );
	this_thread::sleep_for(500);
	pneum.set( false );
}
	if(false){
	Extension.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	}else if(false){
	Extension.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
} else{
	Extension.stop(vex::brakeType::brake);
}
	task::sleep(10);
	RFront.spin(vex::directionType::rev,2, vex::velocityUnits::pct);
	RBack.spin(vex::directionType::rev, 2, vex::velocityUnits::pct);
	LFront.spin(vex::directionType::rev, 2,  vex::velocityUnits::pct);
	LBack.spin(vex::directionType::rev, 2, vex::velocityUnits::pct);
	if(false){
	Intake.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if( false){
	Intake.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Intake.stop(vex::brakeType::brake);
}
	if( false){
	Rollers.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if(false){
	Rollers.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Rollers.stop(vex::brakeType::brake);
}
	  if(false){
	FlyWheel.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	FlyWheel.stop(vex::brakeType::coast);
}
	if(false) {
	pneum.set( true );
	this_thread::sleep_for(500);
	pneum.set( false );
}
	if(false){
	Extension.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	}else if(false){
	Extension.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
} else{
	Extension.stop(vex::brakeType::brake);
}
	task::sleep(10);
	RFront.spin(vex::directionType::rev,0, vex::velocityUnits::pct);
	RBack.spin(vex::directionType::rev, 0, vex::velocityUnits::pct);
	LFront.spin(vex::directionType::rev, 0,  vex::velocityUnits::pct);
	LBack.spin(vex::directionType::rev, 0, vex::velocityUnits::pct);
	if(false){
	Intake.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if( false){
	Intake.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Intake.stop(vex::brakeType::brake);
}
	if( false){
	Rollers.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if(false){
	Rollers.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Rollers.stop(vex::brakeType::brake);
}
	  if(false){
	FlyWheel.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	FlyWheel.stop(vex::brakeType::coast);
}
	if(false) {
	pneum.set( true );
	this_thread::sleep_for(500);
	pneum.set( false );
}
	if(false){
	Extension.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	}else if(false){
	Extension.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
} else{
	Extension.stop(vex::brakeType::brake);
}
	task::sleep(20);
	RFront.spin(vex::directionType::rev,224, vex::velocityUnits::pct);
	RBack.spin(vex::directionType::rev, 224, vex::velocityUnits::pct);
	LFront.spin(vex::directionType::rev, 32,  vex::velocityUnits::pct);
	LBack.spin(vex::directionType::rev, 32, vex::velocityUnits::pct);
	if(false){
	Intake.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if( false){
	Intake.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Intake.stop(vex::brakeType::brake);
}
	if( false){
	Rollers.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if(false){
	Rollers.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Rollers.stop(vex::brakeType::brake);
}
	  if(false){
	FlyWheel.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	FlyWheel.stop(vex::brakeType::coast);
}
	if(false) {
	pneum.set( true );
	this_thread::sleep_for(500);
	pneum.set( false );
}
	if(false){
	Extension.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	}else if(false){
	Extension.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
} else{
	Extension.stop(vex::brakeType::brake);
}
	task::sleep(10);
	RFront.spin(vex::directionType::rev,0, vex::velocityUnits::pct);
	RBack.spin(vex::directionType::rev, 0, vex::velocityUnits::pct);
	LFront.spin(vex::directionType::rev, 0,  vex::velocityUnits::pct);
	LBack.spin(vex::directionType::rev, 0, vex::velocityUnits::pct);
	if(false){
	Intake.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if( false){
	Intake.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Intake.stop(vex::brakeType::brake);
}
	if( false){
	Rollers.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if(false){
	Rollers.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Rollers.stop(vex::brakeType::brake);
}
	  if(false){
	FlyWheel.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	FlyWheel.stop(vex::brakeType::coast);
}
	if(false) {
	pneum.set( true );
	this_thread::sleep_for(500);
	pneum.set( false );
}
	if(false){
	Extension.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	}else if(false){
	Extension.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
} else{
	Extension.stop(vex::brakeType::brake);
}
	task::sleep(30);
	RFront.spin(vex::directionType::rev,166, vex::velocityUnits::pct);
	RBack.spin(vex::directionType::rev, 166, vex::velocityUnits::pct);
	LFront.spin(vex::directionType::rev, 166,  vex::velocityUnits::pct);
	LBack.spin(vex::directionType::rev, 166, vex::velocityUnits::pct);
	if(false){
	Intake.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if( false){
	Intake.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Intake.stop(vex::brakeType::brake);
}
	if( false){
	Rollers.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if(false){
	Rollers.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Rollers.stop(vex::brakeType::brake);
}
	  if(false){
	FlyWheel.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	FlyWheel.stop(vex::brakeType::coast);
}
	if(false) {
	pneum.set( true );
	this_thread::sleep_for(500);
	pneum.set( false );
}
	if(false){
	Extension.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	}else if(false){
	Extension.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
} else{
	Extension.stop(vex::brakeType::brake);
}
	task::sleep(10);
	RFront.spin(vex::directionType::rev,0, vex::velocityUnits::pct);
	RBack.spin(vex::directionType::rev, 0, vex::velocityUnits::pct);
	LFront.spin(vex::directionType::rev, 0,  vex::velocityUnits::pct);
	LBack.spin(vex::directionType::rev, 0, vex::velocityUnits::pct);
	if(false){
	Intake.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if( false){
	Intake.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Intake.stop(vex::brakeType::brake);
}
	if( false){
	Rollers.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if(false){
	Rollers.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Rollers.stop(vex::brakeType::brake);
}
	  if(false){
	FlyWheel.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	FlyWheel.stop(vex::brakeType::coast);
}
	if(false) {
	pneum.set( true );
	this_thread::sleep_for(500);
	pneum.set( false );
}
	if(false){
	Extension.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	}else if(false){
	Extension.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
} else{
	Extension.stop(vex::brakeType::brake);
}
	task::sleep(10);
	RFront.spin(vex::directionType::rev,2, vex::velocityUnits::pct);
	RBack.spin(vex::directionType::rev, 2, vex::velocityUnits::pct);
	LFront.spin(vex::directionType::rev, 2,  vex::velocityUnits::pct);
	LBack.spin(vex::directionType::rev, 2, vex::velocityUnits::pct);
	if(false){
	Intake.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if( false){
	Intake.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Intake.stop(vex::brakeType::brake);
}
	if( false){
	Rollers.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if(false){
	Rollers.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Rollers.stop(vex::brakeType::brake);
}
	  if(false){
	FlyWheel.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	FlyWheel.stop(vex::brakeType::coast);
}
	if(false) {
	pneum.set( true );
	this_thread::sleep_for(500);
	pneum.set( false );
}
	if(false){
	Extension.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	}else if(false){
	Extension.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
} else{
	Extension.stop(vex::brakeType::brake);
}
	task::sleep(10);
	RFront.spin(vex::directionType::rev,11, vex::velocityUnits::pct);
	RBack.spin(vex::directionType::rev, 11, vex::velocityUnits::pct);
	LFront.spin(vex::directionType::rev, 11,  vex::velocityUnits::pct);
	LBack.spin(vex::directionType::rev, 11, vex::velocityUnits::pct);
	if(false){
	Intake.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if( false){
	Intake.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Intake.stop(vex::brakeType::brake);
}
	if( false){
	Rollers.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if(false){
	Rollers.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Rollers.stop(vex::brakeType::brake);
}
	  if(false){
	FlyWheel.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	FlyWheel.stop(vex::brakeType::coast);
}
	if(false) {
	pneum.set( true );
	this_thread::sleep_for(500);
	pneum.set( false );
}
	if(false){
	Extension.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	}else if(false){
	Extension.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
} else{
	Extension.stop(vex::brakeType::brake);
}
	task::sleep(10);
	RFront.spin(vex::directionType::rev,10, vex::velocityUnits::pct);
	RBack.spin(vex::directionType::rev, 10, vex::velocityUnits::pct);
	LFront.spin(vex::directionType::rev, 10,  vex::velocityUnits::pct);
	LBack.spin(vex::directionType::rev, 10, vex::velocityUnits::pct);
	if(false){
	Intake.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if( false){
	Intake.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Intake.stop(vex::brakeType::brake);
}
	if( false){
	Rollers.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if(false){
	Rollers.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Rollers.stop(vex::brakeType::brake);
}
	  if(false){
	FlyWheel.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	FlyWheel.stop(vex::brakeType::coast);
}
	if(false) {
	pneum.set( true );
	this_thread::sleep_for(500);
	pneum.set( false );
}
	if(false){
	Extension.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	}else if(false){
	Extension.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
} else{
	Extension.stop(vex::brakeType::brake);
}
	task::sleep(160);
	RFront.spin(vex::directionType::rev,11, vex::velocityUnits::pct);
	RBack.spin(vex::directionType::rev, 11, vex::velocityUnits::pct);
	LFront.spin(vex::directionType::rev, 11,  vex::velocityUnits::pct);
	LBack.spin(vex::directionType::rev, 11, vex::velocityUnits::pct);
	if(false){
	Intake.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if( false){
	Intake.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Intake.stop(vex::brakeType::brake);
}
	if( false){
	Rollers.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if(false){
	Rollers.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Rollers.stop(vex::brakeType::brake);
}
	  if(false){
	FlyWheel.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	FlyWheel.stop(vex::brakeType::coast);
}
	if(false) {
	pneum.set( true );
	this_thread::sleep_for(500);
	pneum.set( false );
}
	if(false){
	Extension.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	}else if(false){
	Extension.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
} else{
	Extension.stop(vex::brakeType::brake);
}
	task::sleep(100);
	RFront.spin(vex::directionType::rev,10, vex::velocityUnits::pct);
	RBack.spin(vex::directionType::rev, 10, vex::velocityUnits::pct);
	LFront.spin(vex::directionType::rev, 10,  vex::velocityUnits::pct);
	LBack.spin(vex::directionType::rev, 10, vex::velocityUnits::pct);
	if(false){
	Intake.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if( false){
	Intake.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Intake.stop(vex::brakeType::brake);
}
	if( false){
	Rollers.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if(false){
	Rollers.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Rollers.stop(vex::brakeType::brake);
}
	  if(false){
	FlyWheel.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	FlyWheel.stop(vex::brakeType::coast);
}
	if(false) {
	pneum.set( true );
	this_thread::sleep_for(500);
	pneum.set( false );
}
	if(false){
	Extension.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	}else if(false){
	Extension.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
} else{
	Extension.stop(vex::brakeType::brake);
}
	task::sleep(200);
	RFront.spin(vex::directionType::rev,11, vex::velocityUnits::pct);
	RBack.spin(vex::directionType::rev, 11, vex::velocityUnits::pct);
	LFront.spin(vex::directionType::rev, 11,  vex::velocityUnits::pct);
	LBack.spin(vex::directionType::rev, 11, vex::velocityUnits::pct);
	if(false){
	Intake.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if( false){
	Intake.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Intake.stop(vex::brakeType::brake);
}
	if( false){
	Rollers.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if(false){
	Rollers.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Rollers.stop(vex::brakeType::brake);
}
	  if(false){
	FlyWheel.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	FlyWheel.stop(vex::brakeType::coast);
}
	if(false) {
	pneum.set( true );
	this_thread::sleep_for(500);
	pneum.set( false );
}
	if(false){
	Extension.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	}else if(false){
	Extension.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
} else{
	Extension.stop(vex::brakeType::brake);
}
	task::sleep(40);
	RFront.spin(vex::directionType::rev,10, vex::velocityUnits::pct);
	RBack.spin(vex::directionType::rev, 10, vex::velocityUnits::pct);
	LFront.spin(vex::directionType::rev, 10,  vex::velocityUnits::pct);
	LBack.spin(vex::directionType::rev, 10, vex::velocityUnits::pct);
	if(false){
	Intake.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if( false){
	Intake.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Intake.stop(vex::brakeType::brake);
}
	if( false){
	Rollers.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if(false){
	Rollers.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Rollers.stop(vex::brakeType::brake);
}
	  if(false){
	FlyWheel.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	FlyWheel.stop(vex::brakeType::coast);
}
	if(false) {
	pneum.set( true );
	this_thread::sleep_for(500);
	pneum.set( false );
}
	if(false){
	Extension.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	}else if(false){
	Extension.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
} else{
	Extension.stop(vex::brakeType::brake);
}
	task::sleep(130);
	RFront.spin(vex::directionType::rev,11, vex::velocityUnits::pct);
	RBack.spin(vex::directionType::rev, 11, vex::velocityUnits::pct);
	LFront.spin(vex::directionType::rev, 11,  vex::velocityUnits::pct);
	LBack.spin(vex::directionType::rev, 11, vex::velocityUnits::pct);
	if(false){
	Intake.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if( false){
	Intake.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Intake.stop(vex::brakeType::brake);
}
	if( false){
	Rollers.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if(false){
	Rollers.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Rollers.stop(vex::brakeType::brake);
}
	  if(false){
	FlyWheel.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	FlyWheel.stop(vex::brakeType::coast);
}
	if(false) {
	pneum.set( true );
	this_thread::sleep_for(500);
	pneum.set( false );
}
	if(false){
	Extension.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	}else if(false){
	Extension.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
} else{
	Extension.stop(vex::brakeType::brake);
}
	task::sleep(60);
	RFront.spin(vex::directionType::rev,10, vex::velocityUnits::pct);
	RBack.spin(vex::directionType::rev, 10, vex::velocityUnits::pct);
	LFront.spin(vex::directionType::rev, 10,  vex::velocityUnits::pct);
	LBack.spin(vex::directionType::rev, 10, vex::velocityUnits::pct);
	if(false){
	Intake.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if( false){
	Intake.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Intake.stop(vex::brakeType::brake);
}
	if( false){
	Rollers.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if(false){
	Rollers.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Rollers.stop(vex::brakeType::brake);
}
	  if(false){
	FlyWheel.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	FlyWheel.stop(vex::brakeType::coast);
}
	if(false) {
	pneum.set( true );
	this_thread::sleep_for(500);
	pneum.set( false );
}
	if(false){
	Extension.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	}else if(false){
	Extension.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
} else{
	Extension.stop(vex::brakeType::brake);
}
	task::sleep(60);
	RFront.spin(vex::directionType::rev,11, vex::velocityUnits::pct);
	RBack.spin(vex::directionType::rev, 11, vex::velocityUnits::pct);
	LFront.spin(vex::directionType::rev, 11,  vex::velocityUnits::pct);
	LBack.spin(vex::directionType::rev, 11, vex::velocityUnits::pct);
	if(false){
	Intake.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if( false){
	Intake.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Intake.stop(vex::brakeType::brake);
}
	if( false){
	Rollers.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if(false){
	Rollers.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Rollers.stop(vex::brakeType::brake);
}
	  if(false){
	FlyWheel.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	FlyWheel.stop(vex::brakeType::coast);
}
	if(false) {
	pneum.set( true );
	this_thread::sleep_for(500);
	pneum.set( false );
}
	if(false){
	Extension.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	}else if(false){
	Extension.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
} else{
	Extension.stop(vex::brakeType::brake);
}
	task::sleep(40);
	RFront.spin(vex::directionType::rev,10, vex::velocityUnits::pct);
	RBack.spin(vex::directionType::rev, 10, vex::velocityUnits::pct);
	LFront.spin(vex::directionType::rev, 10,  vex::velocityUnits::pct);
	LBack.spin(vex::directionType::rev, 10, vex::velocityUnits::pct);
	if(false){
	Intake.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if( false){
	Intake.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Intake.stop(vex::brakeType::brake);
}
	if( false){
	Rollers.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if(false){
	Rollers.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Rollers.stop(vex::brakeType::brake);
}
	  if(false){
	FlyWheel.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	FlyWheel.stop(vex::brakeType::coast);
}
	if(false) {
	pneum.set( true );
	this_thread::sleep_for(500);
	pneum.set( false );
}
	if(false){
	Extension.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	}else if(false){
	Extension.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
} else{
	Extension.stop(vex::brakeType::brake);
}
	task::sleep(160);
	RFront.spin(vex::directionType::rev,11, vex::velocityUnits::pct);
	RBack.spin(vex::directionType::rev, 11, vex::velocityUnits::pct);
	LFront.spin(vex::directionType::rev, 11,  vex::velocityUnits::pct);
	LBack.spin(vex::directionType::rev, 11, vex::velocityUnits::pct);
	if(false){
	Intake.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if( false){
	Intake.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Intake.stop(vex::brakeType::brake);
}
	if( false){
	Rollers.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if(false){
	Rollers.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Rollers.stop(vex::brakeType::brake);
}
	  if(false){
	FlyWheel.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	FlyWheel.stop(vex::brakeType::coast);
}
	if(false) {
	pneum.set( true );
	this_thread::sleep_for(500);
	pneum.set( false );
}
	if(false){
	Extension.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	}else if(false){
	Extension.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
} else{
	Extension.stop(vex::brakeType::brake);
}
	task::sleep(30);
	RFront.spin(vex::directionType::rev,10, vex::velocityUnits::pct);
	RBack.spin(vex::directionType::rev, 10, vex::velocityUnits::pct);
	LFront.spin(vex::directionType::rev, 10,  vex::velocityUnits::pct);
	LBack.spin(vex::directionType::rev, 10, vex::velocityUnits::pct);
	if(false){
	Intake.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if( false){
	Intake.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Intake.stop(vex::brakeType::brake);
}
	if( false){
	Rollers.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if(false){
	Rollers.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Rollers.stop(vex::brakeType::brake);
}
	  if(false){
	FlyWheel.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	FlyWheel.stop(vex::brakeType::coast);
}
	if(false) {
	pneum.set( true );
	this_thread::sleep_for(500);
	pneum.set( false );
}
	if(false){
	Extension.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	}else if(false){
	Extension.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
} else{
	Extension.stop(vex::brakeType::brake);
}
	task::sleep(60);
	RFront.spin(vex::directionType::rev,11, vex::velocityUnits::pct);
	RBack.spin(vex::directionType::rev, 11, vex::velocityUnits::pct);
	LFront.spin(vex::directionType::rev, 11,  vex::velocityUnits::pct);
	LBack.spin(vex::directionType::rev, 11, vex::velocityUnits::pct);
	if(false){
	Intake.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if( false){
	Intake.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Intake.stop(vex::brakeType::brake);
}
	if( false){
	Rollers.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if(false){
	Rollers.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Rollers.stop(vex::brakeType::brake);
}
	  if(false){
	FlyWheel.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	FlyWheel.stop(vex::brakeType::coast);
}
	if(false) {
	pneum.set( true );
	this_thread::sleep_for(500);
	pneum.set( false );
}
	if(false){
	Extension.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	}else if(false){
	Extension.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
} else{
	Extension.stop(vex::brakeType::brake);
}
	task::sleep(60);
	RFront.spin(vex::directionType::rev,10, vex::velocityUnits::pct);
	RBack.spin(vex::directionType::rev, 10, vex::velocityUnits::pct);
	LFront.spin(vex::directionType::rev, 10,  vex::velocityUnits::pct);
	LBack.spin(vex::directionType::rev, 10, vex::velocityUnits::pct);
	if(false){
	Intake.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if( false){
	Intake.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Intake.stop(vex::brakeType::brake);
}
	if( false){
	Rollers.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if(false){
	Rollers.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Rollers.stop(vex::brakeType::brake);
}
	  if(false){
	FlyWheel.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	FlyWheel.stop(vex::brakeType::coast);
}
	if(false) {
	pneum.set( true );
	this_thread::sleep_for(500);
	pneum.set( false );
}
	if(false){
	Extension.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	}else if(false){
	Extension.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
} else{
	Extension.stop(vex::brakeType::brake);
}
	task::sleep(180);
	RFront.spin(vex::directionType::rev,11, vex::velocityUnits::pct);
	RBack.spin(vex::directionType::rev, 11, vex::velocityUnits::pct);
	LFront.spin(vex::directionType::rev, 11,  vex::velocityUnits::pct);
	LBack.spin(vex::directionType::rev, 11, vex::velocityUnits::pct);
	if(false){
	Intake.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if( false){
	Intake.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Intake.stop(vex::brakeType::brake);
}
	if( false){
	Rollers.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if(false){
	Rollers.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Rollers.stop(vex::brakeType::brake);
}
	  if(false){
	FlyWheel.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	FlyWheel.stop(vex::brakeType::coast);
}
	if(false) {
	pneum.set( true );
	this_thread::sleep_for(500);
	pneum.set( false );
}
	if(false){
	Extension.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	}else if(false){
	Extension.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
} else{
	Extension.stop(vex::brakeType::brake);
}
	task::sleep(40);
	RFront.spin(vex::directionType::rev,10, vex::velocityUnits::pct);
	RBack.spin(vex::directionType::rev, 10, vex::velocityUnits::pct);
	LFront.spin(vex::directionType::rev, 10,  vex::velocityUnits::pct);
	LBack.spin(vex::directionType::rev, 10, vex::velocityUnits::pct);
	if(false){
	Intake.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if( false){
	Intake.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Intake.stop(vex::brakeType::brake);
}
	if( false){
	Rollers.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if(false){
	Rollers.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Rollers.stop(vex::brakeType::brake);
}
	  if(false){
	FlyWheel.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	FlyWheel.stop(vex::brakeType::coast);
}
	if(false) {
	pneum.set( true );
	this_thread::sleep_for(500);
	pneum.set( false );
}
	if(false){
	Extension.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	}else if(false){
	Extension.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
} else{
	Extension.stop(vex::brakeType::brake);
}
	task::sleep(400);
	RFront.spin(vex::directionType::rev,11, vex::velocityUnits::pct);
	RBack.spin(vex::directionType::rev, 11, vex::velocityUnits::pct);
	LFront.spin(vex::directionType::rev, 11,  vex::velocityUnits::pct);
	LBack.spin(vex::directionType::rev, 11, vex::velocityUnits::pct);
	if(false){
	Intake.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if( false){
	Intake.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Intake.stop(vex::brakeType::brake);
}
	if( false){
	Rollers.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if(false){
	Rollers.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Rollers.stop(vex::brakeType::brake);
}
	  if(false){
	FlyWheel.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	FlyWheel.stop(vex::brakeType::coast);
}
	if(false) {
	pneum.set( true );
	this_thread::sleep_for(500);
	pneum.set( false );
}
	if(false){
	Extension.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	}else if(false){
	Extension.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
} else{
	Extension.stop(vex::brakeType::brake);
}
	task::sleep(80);
	RFront.spin(vex::directionType::rev,10, vex::velocityUnits::pct);
	RBack.spin(vex::directionType::rev, 10, vex::velocityUnits::pct);
	LFront.spin(vex::directionType::rev, 10,  vex::velocityUnits::pct);
	LBack.spin(vex::directionType::rev, 10, vex::velocityUnits::pct);
	if(false){
	Intake.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if( false){
	Intake.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Intake.stop(vex::brakeType::brake);
}
	if( false){
	Rollers.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if(false){
	Rollers.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Rollers.stop(vex::brakeType::brake);
}
	  if(false){
	FlyWheel.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	FlyWheel.stop(vex::brakeType::coast);
}
	if(false) {
	pneum.set( true );
	this_thread::sleep_for(500);
	pneum.set( false );
}
	if(false){
	Extension.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	}else if(false){
	Extension.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
} else{
	Extension.stop(vex::brakeType::brake);
}
	task::sleep(350);
	RFront.spin(vex::directionType::rev,11, vex::velocityUnits::pct);
	RBack.spin(vex::directionType::rev, 11, vex::velocityUnits::pct);
	LFront.spin(vex::directionType::rev, 11,  vex::velocityUnits::pct);
	LBack.spin(vex::directionType::rev, 11, vex::velocityUnits::pct);
	if(false){
	Intake.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if( false){
	Intake.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Intake.stop(vex::brakeType::brake);
}
	if( false){
	Rollers.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if(false){
	Rollers.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Rollers.stop(vex::brakeType::brake);
}
	  if(false){
	FlyWheel.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	FlyWheel.stop(vex::brakeType::coast);
}
	if(false) {
	pneum.set( true );
	this_thread::sleep_for(500);
	pneum.set( false );
}
	if(false){
	Extension.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	}else if(false){
	Extension.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
} else{
	Extension.stop(vex::brakeType::brake);
}
	task::sleep(40);
	RFront.spin(vex::directionType::rev,10, vex::velocityUnits::pct);
	RBack.spin(vex::directionType::rev, 10, vex::velocityUnits::pct);
	LFront.spin(vex::directionType::rev, 10,  vex::velocityUnits::pct);
	LBack.spin(vex::directionType::rev, 10, vex::velocityUnits::pct);
	if(false){
	Intake.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if( false){
	Intake.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Intake.stop(vex::brakeType::brake);
}
	if( false){
	Rollers.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if(false){
	Rollers.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Rollers.stop(vex::brakeType::brake);
}
	  if(false){
	FlyWheel.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	FlyWheel.stop(vex::brakeType::coast);
}
	if(false) {
	pneum.set( true );
	this_thread::sleep_for(500);
	pneum.set( false );
}
	if(false){
	Extension.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	}else if(false){
	Extension.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
} else{
	Extension.stop(vex::brakeType::brake);
}
	task::sleep(100);
	RFront.spin(vex::directionType::rev,11, vex::velocityUnits::pct);
	RBack.spin(vex::directionType::rev, 11, vex::velocityUnits::pct);
	LFront.spin(vex::directionType::rev, 11,  vex::velocityUnits::pct);
	LBack.spin(vex::directionType::rev, 11, vex::velocityUnits::pct);
	if(false){
	Intake.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if( false){
	Intake.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Intake.stop(vex::brakeType::brake);
}
	if( false){
	Rollers.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if(false){
	Rollers.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Rollers.stop(vex::brakeType::brake);
}
	  if(false){
	FlyWheel.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	FlyWheel.stop(vex::brakeType::coast);
}
	if(false) {
	pneum.set( true );
	this_thread::sleep_for(500);
	pneum.set( false );
}
	if(false){
	Extension.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	}else if(false){
	Extension.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
} else{
	Extension.stop(vex::brakeType::brake);
}
	task::sleep(130);
	RFront.spin(vex::directionType::rev,10, vex::velocityUnits::pct);
	RBack.spin(vex::directionType::rev, 10, vex::velocityUnits::pct);
	LFront.spin(vex::directionType::rev, 10,  vex::velocityUnits::pct);
	LBack.spin(vex::directionType::rev, 10, vex::velocityUnits::pct);
	if(false){
	Intake.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if( false){
	Intake.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Intake.stop(vex::brakeType::brake);
}
	if( false){
	Rollers.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if(false){
	Rollers.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Rollers.stop(vex::brakeType::brake);
}
	  if(false){
	FlyWheel.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	FlyWheel.stop(vex::brakeType::coast);
}
	if(false) {
	pneum.set( true );
	this_thread::sleep_for(500);
	pneum.set( false );
}
	if(false){
	Extension.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	}else if(false){
	Extension.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
} else{
	Extension.stop(vex::brakeType::brake);
}
	task::sleep(60);
	RFront.spin(vex::directionType::rev,11, vex::velocityUnits::pct);
	RBack.spin(vex::directionType::rev, 11, vex::velocityUnits::pct);
	LFront.spin(vex::directionType::rev, 11,  vex::velocityUnits::pct);
	LBack.spin(vex::directionType::rev, 11, vex::velocityUnits::pct);
	if(false){
	Intake.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if( false){
	Intake.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Intake.stop(vex::brakeType::brake);
}
	if( false){
	Rollers.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if(false){
	Rollers.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Rollers.stop(vex::brakeType::brake);
}
	  if(false){
	FlyWheel.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	FlyWheel.stop(vex::brakeType::coast);
}
	if(false) {
	pneum.set( true );
	this_thread::sleep_for(500);
	pneum.set( false );
}
	if(false){
	Extension.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	}else if(false){
	Extension.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
} else{
	Extension.stop(vex::brakeType::brake);
}
	task::sleep(40);
	RFront.spin(vex::directionType::rev,10, vex::velocityUnits::pct);
	RBack.spin(vex::directionType::rev, 10, vex::velocityUnits::pct);
	LFront.spin(vex::directionType::rev, 10,  vex::velocityUnits::pct);
	LBack.spin(vex::directionType::rev, 10, vex::velocityUnits::pct);
	if(false){
	Intake.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if( false){
	Intake.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Intake.stop(vex::brakeType::brake);
}
	if( false){
	Rollers.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if(false){
	Rollers.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Rollers.stop(vex::brakeType::brake);
}
	  if(false){
	FlyWheel.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	FlyWheel.stop(vex::brakeType::coast);
}
	if(false) {
	pneum.set( true );
	this_thread::sleep_for(500);
	pneum.set( false );
}
	if(false){
	Extension.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	}else if(false){
	Extension.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
} else{
	Extension.stop(vex::brakeType::brake);
}
	task::sleep(60);
	RFront.spin(vex::directionType::rev,11, vex::velocityUnits::pct);
	RBack.spin(vex::directionType::rev, 11, vex::velocityUnits::pct);
	LFront.spin(vex::directionType::rev, 11,  vex::velocityUnits::pct);
	LBack.spin(vex::directionType::rev, 11, vex::velocityUnits::pct);
	if(false){
	Intake.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if( false){
	Intake.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Intake.stop(vex::brakeType::brake);
}
	if( false){
	Rollers.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if(false){
	Rollers.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Rollers.stop(vex::brakeType::brake);
}
	  if(false){
	FlyWheel.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	FlyWheel.stop(vex::brakeType::coast);
}
	if(false) {
	pneum.set( true );
	this_thread::sleep_for(500);
	pneum.set( false );
}
	if(false){
	Extension.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	}else if(false){
	Extension.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
} else{
	Extension.stop(vex::brakeType::brake);
}
	task::sleep(120);
	RFront.spin(vex::directionType::rev,10, vex::velocityUnits::pct);
	RBack.spin(vex::directionType::rev, 10, vex::velocityUnits::pct);
	LFront.spin(vex::directionType::rev, 10,  vex::velocityUnits::pct);
	LBack.spin(vex::directionType::rev, 10, vex::velocityUnits::pct);
	if(false){
	Intake.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if( false){
	Intake.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Intake.stop(vex::brakeType::brake);
}
	if( false){
	Rollers.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if(false){
	Rollers.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Rollers.stop(vex::brakeType::brake);
}
	  if(false){
	FlyWheel.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	FlyWheel.stop(vex::brakeType::coast);
}
	if(false) {
	pneum.set( true );
	this_thread::sleep_for(500);
	pneum.set( false );
}
	if(false){
	Extension.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	}else if(false){
	Extension.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
} else{
	Extension.stop(vex::brakeType::brake);
}
	task::sleep(60);
	RFront.spin(vex::directionType::rev,11, vex::velocityUnits::pct);
	RBack.spin(vex::directionType::rev, 11, vex::velocityUnits::pct);
	LFront.spin(vex::directionType::rev, 11,  vex::velocityUnits::pct);
	LBack.spin(vex::directionType::rev, 11, vex::velocityUnits::pct);
	if(false){
	Intake.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if( false){
	Intake.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Intake.stop(vex::brakeType::brake);
}
	if( false){
	Rollers.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if(false){
	Rollers.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Rollers.stop(vex::brakeType::brake);
}
	  if(false){
	FlyWheel.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	FlyWheel.stop(vex::brakeType::coast);
}
	if(false) {
	pneum.set( true );
	this_thread::sleep_for(500);
	pneum.set( false );
}
	if(false){
	Extension.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	}else if(false){
	Extension.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
} else{
	Extension.stop(vex::brakeType::brake);
}
	task::sleep(40);
	RFront.spin(vex::directionType::rev,10, vex::velocityUnits::pct);
	RBack.spin(vex::directionType::rev, 10, vex::velocityUnits::pct);
	LFront.spin(vex::directionType::rev, 10,  vex::velocityUnits::pct);
	LBack.spin(vex::directionType::rev, 10, vex::velocityUnits::pct);
	if(false){
	Intake.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if( false){
	Intake.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Intake.stop(vex::brakeType::brake);
}
	if( false){
	Rollers.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if(false){
	Rollers.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Rollers.stop(vex::brakeType::brake);
}
	  if(false){
	FlyWheel.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	FlyWheel.stop(vex::brakeType::coast);
}
	if(false) {
	pneum.set( true );
	this_thread::sleep_for(500);
	pneum.set( false );
}
	if(false){
	Extension.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	}else if(false){
	Extension.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
} else{
	Extension.stop(vex::brakeType::brake);
}
	task::sleep(60);
	RFront.spin(vex::directionType::rev,11, vex::velocityUnits::pct);
	RBack.spin(vex::directionType::rev, 11, vex::velocityUnits::pct);
	LFront.spin(vex::directionType::rev, 11,  vex::velocityUnits::pct);
	LBack.spin(vex::directionType::rev, 11, vex::velocityUnits::pct);
	if(false){
	Intake.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if( false){
	Intake.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Intake.stop(vex::brakeType::brake);
}
	if( false){
	Rollers.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if(false){
	Rollers.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Rollers.stop(vex::brakeType::brake);
}
	  if(false){
	FlyWheel.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	FlyWheel.stop(vex::brakeType::coast);
}
	if(false) {
	pneum.set( true );
	this_thread::sleep_for(500);
	pneum.set( false );
}
	if(false){
	Extension.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	}else if(false){
	Extension.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
} else{
	Extension.stop(vex::brakeType::brake);
}
	task::sleep(160);
	RFront.spin(vex::directionType::rev,10, vex::velocityUnits::pct);
	RBack.spin(vex::directionType::rev, 10, vex::velocityUnits::pct);
	LFront.spin(vex::directionType::rev, 10,  vex::velocityUnits::pct);
	LBack.spin(vex::directionType::rev, 10, vex::velocityUnits::pct);
	if(false){
	Intake.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if( false){
	Intake.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Intake.stop(vex::brakeType::brake);
}
	if( false){
	Rollers.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if(false){
	Rollers.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Rollers.stop(vex::brakeType::brake);
}
	  if(false){
	FlyWheel.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	FlyWheel.stop(vex::brakeType::coast);
}
	if(false) {
	pneum.set( true );
	this_thread::sleep_for(500);
	pneum.set( false );
}
	if(false){
	Extension.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	}else if(false){
	Extension.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
} else{
	Extension.stop(vex::brakeType::brake);
}
	task::sleep(270);
	RFront.spin(vex::directionType::rev,11, vex::velocityUnits::pct);
	RBack.spin(vex::directionType::rev, 11, vex::velocityUnits::pct);
	LFront.spin(vex::directionType::rev, 11,  vex::velocityUnits::pct);
	LBack.spin(vex::directionType::rev, 11, vex::velocityUnits::pct);
	if(false){
	Intake.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if( false){
	Intake.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Intake.stop(vex::brakeType::brake);
}
	if( false){
	Rollers.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if(false){
	Rollers.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Rollers.stop(vex::brakeType::brake);
}
	  if(false){
	FlyWheel.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	FlyWheel.stop(vex::brakeType::coast);
}
	if(false) {
	pneum.set( true );
	this_thread::sleep_for(500);
	pneum.set( false );
}
	if(false){
	Extension.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	}else if(false){
	Extension.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
} else{
	Extension.stop(vex::brakeType::brake);
}
	task::sleep(140);
	RFront.spin(vex::directionType::rev,10, vex::velocityUnits::pct);
	RBack.spin(vex::directionType::rev, 10, vex::velocityUnits::pct);
	LFront.spin(vex::directionType::rev, 10,  vex::velocityUnits::pct);
	LBack.spin(vex::directionType::rev, 10, vex::velocityUnits::pct);
	if(false){
	Intake.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if( false){
	Intake.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Intake.stop(vex::brakeType::brake);
}
	if( false){
	Rollers.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if(false){
	Rollers.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Rollers.stop(vex::brakeType::brake);
}
	  if(false){
	FlyWheel.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	FlyWheel.stop(vex::brakeType::coast);
}
	if(false) {
	pneum.set( true );
	this_thread::sleep_for(500);
	pneum.set( false );
}
	if(false){
	Extension.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	}else if(false){
	Extension.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
} else{
	Extension.stop(vex::brakeType::brake);
}
	task::sleep(90);
	RFront.spin(vex::directionType::rev,11, vex::velocityUnits::pct);
	RBack.spin(vex::directionType::rev, 11, vex::velocityUnits::pct);
	LFront.spin(vex::directionType::rev, 11,  vex::velocityUnits::pct);
	LBack.spin(vex::directionType::rev, 11, vex::velocityUnits::pct);
	if(false){
	Intake.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if( false){
	Intake.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Intake.stop(vex::brakeType::brake);
}
	if( false){
	Rollers.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if(false){
	Rollers.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Rollers.stop(vex::brakeType::brake);
}
	  if(false){
	FlyWheel.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	FlyWheel.stop(vex::brakeType::coast);
}
	if(false) {
	pneum.set( true );
	this_thread::sleep_for(500);
	pneum.set( false );
}
	if(false){
	Extension.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	}else if(false){
	Extension.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
} else{
	Extension.stop(vex::brakeType::brake);
}
	task::sleep(100);
	RFront.spin(vex::directionType::rev,10, vex::velocityUnits::pct);
	RBack.spin(vex::directionType::rev, 10, vex::velocityUnits::pct);
	LFront.spin(vex::directionType::rev, 10,  vex::velocityUnits::pct);
	LBack.spin(vex::directionType::rev, 10, vex::velocityUnits::pct);
	if(false){
	Intake.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if( false){
	Intake.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Intake.stop(vex::brakeType::brake);
}
	if( false){
	Rollers.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if(false){
	Rollers.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Rollers.stop(vex::brakeType::brake);
}
	  if(false){
	FlyWheel.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	FlyWheel.stop(vex::brakeType::coast);
}
	if(false) {
	pneum.set( true );
	this_thread::sleep_for(500);
	pneum.set( false );
}
	if(false){
	Extension.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	}else if(false){
	Extension.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
} else{
	Extension.stop(vex::brakeType::brake);
}
	task::sleep(40);
	RFront.spin(vex::directionType::rev,11, vex::velocityUnits::pct);
	RBack.spin(vex::directionType::rev, 11, vex::velocityUnits::pct);
	LFront.spin(vex::directionType::rev, 11,  vex::velocityUnits::pct);
	LBack.spin(vex::directionType::rev, 11, vex::velocityUnits::pct);
	if(false){
	Intake.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if( false){
	Intake.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Intake.stop(vex::brakeType::brake);
}
	if( false){
	Rollers.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if(false){
	Rollers.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Rollers.stop(vex::brakeType::brake);
}
	  if(false){
	FlyWheel.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	FlyWheel.stop(vex::brakeType::coast);
}
	if(false) {
	pneum.set( true );
	this_thread::sleep_for(500);
	pneum.set( false );
}
	if(false){
	Extension.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	}else if(false){
	Extension.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
} else{
	Extension.stop(vex::brakeType::brake);
}
	task::sleep(120);
	RFront.spin(vex::directionType::rev,10, vex::velocityUnits::pct);
	RBack.spin(vex::directionType::rev, 10, vex::velocityUnits::pct);
	LFront.spin(vex::directionType::rev, 10,  vex::velocityUnits::pct);
	LBack.spin(vex::directionType::rev, 10, vex::velocityUnits::pct);
	if(false){
	Intake.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if( false){
	Intake.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Intake.stop(vex::brakeType::brake);
}
	if( false){
	Rollers.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if(false){
	Rollers.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Rollers.stop(vex::brakeType::brake);
}
	  if(false){
	FlyWheel.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	FlyWheel.stop(vex::brakeType::coast);
}
	if(false) {
	pneum.set( true );
	this_thread::sleep_for(500);
	pneum.set( false );
}
	if(false){
	Extension.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	}else if(false){
	Extension.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
} else{
	Extension.stop(vex::brakeType::brake);
}
	task::sleep(40);
	RFront.spin(vex::directionType::rev,11, vex::velocityUnits::pct);
	RBack.spin(vex::directionType::rev, 11, vex::velocityUnits::pct);
	LFront.spin(vex::directionType::rev, 11,  vex::velocityUnits::pct);
	LBack.spin(vex::directionType::rev, 11, vex::velocityUnits::pct);
	if(false){
	Intake.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if( false){
	Intake.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Intake.stop(vex::brakeType::brake);
}
	if( false){
	Rollers.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if(false){
	Rollers.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Rollers.stop(vex::brakeType::brake);
}
	  if(false){
	FlyWheel.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	FlyWheel.stop(vex::brakeType::coast);
}
	if(false) {
	pneum.set( true );
	this_thread::sleep_for(500);
	pneum.set( false );
}
	if(false){
	Extension.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	}else if(false){
	Extension.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
} else{
	Extension.stop(vex::brakeType::brake);
}
	task::sleep(180);
	RFront.spin(vex::directionType::rev,10, vex::velocityUnits::pct);
	RBack.spin(vex::directionType::rev, 10, vex::velocityUnits::pct);
	LFront.spin(vex::directionType::rev, 10,  vex::velocityUnits::pct);
	LBack.spin(vex::directionType::rev, 10, vex::velocityUnits::pct);
	if(false){
	Intake.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if( false){
	Intake.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Intake.stop(vex::brakeType::brake);
}
	if( false){
	Rollers.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if(false){
	Rollers.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Rollers.stop(vex::brakeType::brake);
}
	  if(false){
	FlyWheel.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	FlyWheel.stop(vex::brakeType::coast);
}
	if(false) {
	pneum.set( true );
	this_thread::sleep_for(500);
	pneum.set( false );
}
	if(false){
	Extension.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	}else if(false){
	Extension.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
} else{
	Extension.stop(vex::brakeType::brake);
}
	task::sleep(40);
	RFront.spin(vex::directionType::rev,11, vex::velocityUnits::pct);
	RBack.spin(vex::directionType::rev, 11, vex::velocityUnits::pct);
	LFront.spin(vex::directionType::rev, 11,  vex::velocityUnits::pct);
	LBack.spin(vex::directionType::rev, 11, vex::velocityUnits::pct);
	if(false){
	Intake.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if( false){
	Intake.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Intake.stop(vex::brakeType::brake);
}
	if( false){
	Rollers.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if(false){
	Rollers.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Rollers.stop(vex::brakeType::brake);
}
	  if(false){
	FlyWheel.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	FlyWheel.stop(vex::brakeType::coast);
}
	if(false) {
	pneum.set( true );
	this_thread::sleep_for(500);
	pneum.set( false );
}
	if(false){
	Extension.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	}else if(false){
	Extension.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
} else{
	Extension.stop(vex::brakeType::brake);
}
	task::sleep(60);
	RFront.spin(vex::directionType::rev,10, vex::velocityUnits::pct);
	RBack.spin(vex::directionType::rev, 10, vex::velocityUnits::pct);
	LFront.spin(vex::directionType::rev, 10,  vex::velocityUnits::pct);
	LBack.spin(vex::directionType::rev, 10, vex::velocityUnits::pct);
	if(false){
	Intake.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if( false){
	Intake.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Intake.stop(vex::brakeType::brake);
}
	if( false){
	Rollers.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if(false){
	Rollers.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Rollers.stop(vex::brakeType::brake);
}
	  if(false){
	FlyWheel.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	FlyWheel.stop(vex::brakeType::coast);
}
	if(false) {
	pneum.set( true );
	this_thread::sleep_for(500);
	pneum.set( false );
}
	if(false){
	Extension.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	}else if(false){
	Extension.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
} else{
	Extension.stop(vex::brakeType::brake);
}
	task::sleep(60);
	RFront.spin(vex::directionType::rev,11, vex::velocityUnits::pct);
	RBack.spin(vex::directionType::rev, 11, vex::velocityUnits::pct);
	LFront.spin(vex::directionType::rev, 11,  vex::velocityUnits::pct);
	LBack.spin(vex::directionType::rev, 11, vex::velocityUnits::pct);
	if(false){
	Intake.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if( false){
	Intake.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Intake.stop(vex::brakeType::brake);
}
	if( false){
	Rollers.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if(false){
	Rollers.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Rollers.stop(vex::brakeType::brake);
}
	  if(false){
	FlyWheel.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	FlyWheel.stop(vex::brakeType::coast);
}
	if(false) {
	pneum.set( true );
	this_thread::sleep_for(500);
	pneum.set( false );
}
	if(false){
	Extension.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	}else if(false){
	Extension.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
} else{
	Extension.stop(vex::brakeType::brake);
}
	task::sleep(20);
	RFront.spin(vex::directionType::rev,5, vex::velocityUnits::pct);
	RBack.spin(vex::directionType::rev, 5, vex::velocityUnits::pct);
	LFront.spin(vex::directionType::rev, 15,  vex::velocityUnits::pct);
	LBack.spin(vex::directionType::rev, 15, vex::velocityUnits::pct);
	if(false){
	Intake.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if( false){
	Intake.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Intake.stop(vex::brakeType::brake);
}
	if( false){
	Rollers.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if(false){
	Rollers.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Rollers.stop(vex::brakeType::brake);
}
	  if(false){
	FlyWheel.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	FlyWheel.stop(vex::brakeType::coast);
}
	if(false) {
	pneum.set( true );
	this_thread::sleep_for(500);
	pneum.set( false );
}
	if(false){
	Extension.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	}else if(false){
	Extension.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
} else{
	Extension.stop(vex::brakeType::brake);
}
	task::sleep(60);
	RFront.spin(vex::directionType::rev,0, vex::velocityUnits::pct);
	RBack.spin(vex::directionType::rev, 0, vex::velocityUnits::pct);
	LFront.spin(vex::directionType::rev, 20,  vex::velocityUnits::pct);
	LBack.spin(vex::directionType::rev, 20, vex::velocityUnits::pct);
	if(false){
	Intake.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if( false){
	Intake.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Intake.stop(vex::brakeType::brake);
}
	if( false){
	Rollers.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if(false){
	Rollers.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Rollers.stop(vex::brakeType::brake);
}
	  if(false){
	FlyWheel.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	FlyWheel.stop(vex::brakeType::coast);
}
	if(false) {
	pneum.set( true );
	this_thread::sleep_for(500);
	pneum.set( false );
}
	if(false){
	Extension.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	}else if(false){
	Extension.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
} else{
	Extension.stop(vex::brakeType::brake);
}
	task::sleep(40);
	RFront.spin(vex::directionType::rev,2, vex::velocityUnits::pct);
	RBack.spin(vex::directionType::rev, 2, vex::velocityUnits::pct);
	LFront.spin(vex::directionType::rev, 20,  vex::velocityUnits::pct);
	LBack.spin(vex::directionType::rev, 20, vex::velocityUnits::pct);
	if(false){
	Intake.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if( false){
	Intake.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Intake.stop(vex::brakeType::brake);
}
	if( false){
	Rollers.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if(false){
	Rollers.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Rollers.stop(vex::brakeType::brake);
}
	  if(false){
	FlyWheel.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	FlyWheel.stop(vex::brakeType::coast);
}
	if(false) {
	pneum.set( true );
	this_thread::sleep_for(500);
	pneum.set( false );
}
	if(false){
	Extension.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	}else if(false){
	Extension.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
} else{
	Extension.stop(vex::brakeType::brake);
}
	task::sleep(60);
	RFront.spin(vex::directionType::rev,4, vex::velocityUnits::pct);
	RBack.spin(vex::directionType::rev, 4, vex::velocityUnits::pct);
	LFront.spin(vex::directionType::rev, 18,  vex::velocityUnits::pct);
	LBack.spin(vex::directionType::rev, 18, vex::velocityUnits::pct);
	if(false){
	Intake.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if( false){
	Intake.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Intake.stop(vex::brakeType::brake);
}
	if( false){
	Rollers.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if(false){
	Rollers.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Rollers.stop(vex::brakeType::brake);
}
	  if(false){
	FlyWheel.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	FlyWheel.stop(vex::brakeType::coast);
}
	if(false) {
	pneum.set( true );
	this_thread::sleep_for(500);
	pneum.set( false );
}
	if(false){
	Extension.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	}else if(false){
	Extension.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
} else{
	Extension.stop(vex::brakeType::brake);
}
	task::sleep(30);
	RFront.spin(vex::directionType::rev,10, vex::velocityUnits::pct);
	RBack.spin(vex::directionType::rev, 10, vex::velocityUnits::pct);
	LFront.spin(vex::directionType::rev, 10,  vex::velocityUnits::pct);
	LBack.spin(vex::directionType::rev, 10, vex::velocityUnits::pct);
	if(false){
	Intake.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if( false){
	Intake.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Intake.stop(vex::brakeType::brake);
}
	if( false){
	Rollers.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if(false){
	Rollers.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Rollers.stop(vex::brakeType::brake);
}
	  if(false){
	FlyWheel.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	FlyWheel.stop(vex::brakeType::coast);
}
	if(false) {
	pneum.set( true );
	this_thread::sleep_for(500);
	pneum.set( false );
}
	if(false){
	Extension.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	}else if(false){
	Extension.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
} else{
	Extension.stop(vex::brakeType::brake);
}
	task::sleep(100);
	RFront.spin(vex::directionType::rev,11, vex::velocityUnits::pct);
	RBack.spin(vex::directionType::rev, 11, vex::velocityUnits::pct);
	LFront.spin(vex::directionType::rev, 11,  vex::velocityUnits::pct);
	LBack.spin(vex::directionType::rev, 11, vex::velocityUnits::pct);
	if(false){
	Intake.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if( false){
	Intake.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Intake.stop(vex::brakeType::brake);
}
	if( false){
	Rollers.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if(false){
	Rollers.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Rollers.stop(vex::brakeType::brake);
}
	  if(false){
	FlyWheel.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	FlyWheel.stop(vex::brakeType::coast);
}
	if(false) {
	pneum.set( true );
	this_thread::sleep_for(500);
	pneum.set( false );
}
	if(false){
	Extension.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	}else if(false){
	Extension.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
} else{
	Extension.stop(vex::brakeType::brake);
}
	task::sleep(60);
	RFront.spin(vex::directionType::rev,10, vex::velocityUnits::pct);
	RBack.spin(vex::directionType::rev, 10, vex::velocityUnits::pct);
	LFront.spin(vex::directionType::rev, 10,  vex::velocityUnits::pct);
	LBack.spin(vex::directionType::rev, 10, vex::velocityUnits::pct);
	if(false){
	Intake.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if( false){
	Intake.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Intake.stop(vex::brakeType::brake);
}
	if( false){
	Rollers.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if(false){
	Rollers.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Rollers.stop(vex::brakeType::brake);
}
	  if(false){
	FlyWheel.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	FlyWheel.stop(vex::brakeType::coast);
}
	if(false) {
	pneum.set( true );
	this_thread::sleep_for(500);
	pneum.set( false );
}
	if(false){
	Extension.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	}else if(false){
	Extension.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
} else{
	Extension.stop(vex::brakeType::brake);
}
	task::sleep(270);
	RFront.spin(vex::directionType::rev,11, vex::velocityUnits::pct);
	RBack.spin(vex::directionType::rev, 11, vex::velocityUnits::pct);
	LFront.spin(vex::directionType::rev, 11,  vex::velocityUnits::pct);
	LBack.spin(vex::directionType::rev, 11, vex::velocityUnits::pct);
	if(false){
	Intake.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if( false){
	Intake.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Intake.stop(vex::brakeType::brake);
}
	if( false){
	Rollers.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if(false){
	Rollers.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Rollers.stop(vex::brakeType::brake);
}
	  if(false){
	FlyWheel.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	FlyWheel.stop(vex::brakeType::coast);
}
	if(false) {
	pneum.set( true );
	this_thread::sleep_for(500);
	pneum.set( false );
}
	if(false){
	Extension.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	}else if(false){
	Extension.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
} else{
	Extension.stop(vex::brakeType::brake);
}
	task::sleep(200);
	RFront.spin(vex::directionType::rev,10, vex::velocityUnits::pct);
	RBack.spin(vex::directionType::rev, 10, vex::velocityUnits::pct);
	LFront.spin(vex::directionType::rev, 10,  vex::velocityUnits::pct);
	LBack.spin(vex::directionType::rev, 10, vex::velocityUnits::pct);
	if(false){
	Intake.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if( false){
	Intake.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Intake.stop(vex::brakeType::brake);
}
	if( false){
	Rollers.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if(false){
	Rollers.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Rollers.stop(vex::brakeType::brake);
}
	  if(false){
	FlyWheel.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	FlyWheel.stop(vex::brakeType::coast);
}
	if(false) {
	pneum.set( true );
	this_thread::sleep_for(500);
	pneum.set( false );
}
	if(false){
	Extension.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	}else if(false){
	Extension.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
} else{
	Extension.stop(vex::brakeType::brake);
}
	task::sleep(60);
	RFront.spin(vex::directionType::rev,11, vex::velocityUnits::pct);
	RBack.spin(vex::directionType::rev, 11, vex::velocityUnits::pct);
	LFront.spin(vex::directionType::rev, 11,  vex::velocityUnits::pct);
	LBack.spin(vex::directionType::rev, 11, vex::velocityUnits::pct);
	if(false){
	Intake.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if( false){
	Intake.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Intake.stop(vex::brakeType::brake);
}
	if( false){
	Rollers.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if(false){
	Rollers.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Rollers.stop(vex::brakeType::brake);
}
	  if(false){
	FlyWheel.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	FlyWheel.stop(vex::brakeType::coast);
}
	if(false) {
	pneum.set( true );
	this_thread::sleep_for(500);
	pneum.set( false );
}
	if(false){
	Extension.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	}else if(false){
	Extension.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
} else{
	Extension.stop(vex::brakeType::brake);
}
	task::sleep(80);
	RFront.spin(vex::directionType::rev,10, vex::velocityUnits::pct);
	RBack.spin(vex::directionType::rev, 10, vex::velocityUnits::pct);
	LFront.spin(vex::directionType::rev, 10,  vex::velocityUnits::pct);
	LBack.spin(vex::directionType::rev, 10, vex::velocityUnits::pct);
	if(false){
	Intake.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if( false){
	Intake.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Intake.stop(vex::brakeType::brake);
}
	if( false){
	Rollers.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if(false){
	Rollers.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Rollers.stop(vex::brakeType::brake);
}
	  if(false){
	FlyWheel.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	FlyWheel.stop(vex::brakeType::coast);
}
	if(false) {
	pneum.set( true );
	this_thread::sleep_for(500);
	pneum.set( false );
}
	if(false){
	Extension.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	}else if(false){
	Extension.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
} else{
	Extension.stop(vex::brakeType::brake);
}
	task::sleep(100);
	RFront.spin(vex::directionType::rev,11, vex::velocityUnits::pct);
	RBack.spin(vex::directionType::rev, 11, vex::velocityUnits::pct);
	LFront.spin(vex::directionType::rev, 11,  vex::velocityUnits::pct);
	LBack.spin(vex::directionType::rev, 11, vex::velocityUnits::pct);
	if(false){
	Intake.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if( false){
	Intake.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Intake.stop(vex::brakeType::brake);
}
	if( false){
	Rollers.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if(false){
	Rollers.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Rollers.stop(vex::brakeType::brake);
}
	  if(false){
	FlyWheel.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	FlyWheel.stop(vex::brakeType::coast);
}
	if(false) {
	pneum.set( true );
	this_thread::sleep_for(500);
	pneum.set( false );
}
	if(false){
	Extension.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	}else if(false){
	Extension.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
} else{
	Extension.stop(vex::brakeType::brake);
}
	task::sleep(140);
	RFront.spin(vex::directionType::rev,10, vex::velocityUnits::pct);
	RBack.spin(vex::directionType::rev, 10, vex::velocityUnits::pct);
	LFront.spin(vex::directionType::rev, 10,  vex::velocityUnits::pct);
	LBack.spin(vex::directionType::rev, 10, vex::velocityUnits::pct);
	if(false){
	Intake.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if( false){
	Intake.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Intake.stop(vex::brakeType::brake);
}
	if( false){
	Rollers.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if(false){
	Rollers.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Rollers.stop(vex::brakeType::brake);
}
	  if(false){
	FlyWheel.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	FlyWheel.stop(vex::brakeType::coast);
}
	if(false) {
	pneum.set( true );
	this_thread::sleep_for(500);
	pneum.set( false );
}
	if(false){
	Extension.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	}else if(false){
	Extension.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
} else{
	Extension.stop(vex::brakeType::brake);
}
	task::sleep(390);
	RFront.spin(vex::directionType::rev,11, vex::velocityUnits::pct);
	RBack.spin(vex::directionType::rev, 11, vex::velocityUnits::pct);
	LFront.spin(vex::directionType::rev, 11,  vex::velocityUnits::pct);
	LBack.spin(vex::directionType::rev, 11, vex::velocityUnits::pct);
	if(false){
	Intake.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if( false){
	Intake.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Intake.stop(vex::brakeType::brake);
}
	if( false){
	Rollers.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if(false){
	Rollers.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Rollers.stop(vex::brakeType::brake);
}
	  if(false){
	FlyWheel.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	FlyWheel.stop(vex::brakeType::coast);
}
	if(false) {
	pneum.set( true );
	this_thread::sleep_for(500);
	pneum.set( false );
}
	if(false){
	Extension.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	}else if(false){
	Extension.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
} else{
	Extension.stop(vex::brakeType::brake);
}
	task::sleep(40);
	RFront.spin(vex::directionType::rev,10, vex::velocityUnits::pct);
	RBack.spin(vex::directionType::rev, 10, vex::velocityUnits::pct);
	LFront.spin(vex::directionType::rev, 10,  vex::velocityUnits::pct);
	LBack.spin(vex::directionType::rev, 10, vex::velocityUnits::pct);
	if(false){
	Intake.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if( false){
	Intake.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Intake.stop(vex::brakeType::brake);
}
	if( false){
	Rollers.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if(false){
	Rollers.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Rollers.stop(vex::brakeType::brake);
}
	  if(false){
	FlyWheel.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	FlyWheel.stop(vex::brakeType::coast);
}
	if(false) {
	pneum.set( true );
	this_thread::sleep_for(500);
	pneum.set( false );
}
	if(false){
	Extension.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	}else if(false){
	Extension.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
} else{
	Extension.stop(vex::brakeType::brake);
}
	task::sleep(140);
	RFront.spin(vex::directionType::rev,11, vex::velocityUnits::pct);
	RBack.spin(vex::directionType::rev, 11, vex::velocityUnits::pct);
	LFront.spin(vex::directionType::rev, 11,  vex::velocityUnits::pct);
	LBack.spin(vex::directionType::rev, 11, vex::velocityUnits::pct);
	if(false){
	Intake.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if( false){
	Intake.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Intake.stop(vex::brakeType::brake);
}
	if( false){
	Rollers.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if(false){
	Rollers.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Rollers.stop(vex::brakeType::brake);
}
	  if(false){
	FlyWheel.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	FlyWheel.stop(vex::brakeType::coast);
}
	if(false) {
	pneum.set( true );
	this_thread::sleep_for(500);
	pneum.set( false );
}
	if(false){
	Extension.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	}else if(false){
	Extension.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
} else{
	Extension.stop(vex::brakeType::brake);
}
	task::sleep(60);
	RFront.spin(vex::directionType::rev,4, vex::velocityUnits::pct);
	RBack.spin(vex::directionType::rev, 4, vex::velocityUnits::pct);
	LFront.spin(vex::directionType::rev, 4,  vex::velocityUnits::pct);
	LBack.spin(vex::directionType::rev, 4, vex::velocityUnits::pct);
	if(false){
	Intake.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if( false){
	Intake.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Intake.stop(vex::brakeType::brake);
}
	if( false){
	Rollers.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if(false){
	Rollers.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Rollers.stop(vex::brakeType::brake);
}
	  if(false){
	FlyWheel.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	FlyWheel.stop(vex::brakeType::coast);
}
	if(false) {
	pneum.set( true );
	this_thread::sleep_for(500);
	pneum.set( false );
}
	if(false){
	Extension.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	}else if(false){
	Extension.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
} else{
	Extension.stop(vex::brakeType::brake);
}
	task::sleep(60);
	RFront.spin(vex::directionType::rev,0, vex::velocityUnits::pct);
	RBack.spin(vex::directionType::rev, 0, vex::velocityUnits::pct);
	LFront.spin(vex::directionType::rev, 0,  vex::velocityUnits::pct);
	LBack.spin(vex::directionType::rev, 0, vex::velocityUnits::pct);
	if(false){
	Intake.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if( false){
	Intake.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Intake.stop(vex::brakeType::brake);
}
	if( false){
	Rollers.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if(false){
	Rollers.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Rollers.stop(vex::brakeType::brake);
}
	  if(false){
	FlyWheel.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	FlyWheel.stop(vex::brakeType::coast);
}
	if(false) {
	pneum.set( true );
	this_thread::sleep_for(500);
	pneum.set( false );
}
	if(false){
	Extension.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	}else if(false){
	Extension.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
} else{
	Extension.stop(vex::brakeType::brake);
}
	task::sleep(650);
	RFront.spin(vex::directionType::rev,234, vex::velocityUnits::pct);
	RBack.spin(vex::directionType::rev, 234, vex::velocityUnits::pct);
	LFront.spin(vex::directionType::rev, 234,  vex::velocityUnits::pct);
	LBack.spin(vex::directionType::rev, 234, vex::velocityUnits::pct);
	if(false){
	Intake.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if( false){
	Intake.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Intake.stop(vex::brakeType::brake);
}
	if( false){
	Rollers.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if(false){
	Rollers.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Rollers.stop(vex::brakeType::brake);
}
	  if(false){
	FlyWheel.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	FlyWheel.stop(vex::brakeType::coast);
}
	if(false) {
	pneum.set( true );
	this_thread::sleep_for(500);
	pneum.set( false );
}
	if(false){
	Extension.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	}else if(false){
	Extension.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
} else{
	Extension.stop(vex::brakeType::brake);
}
	task::sleep(60);
	RFront.spin(vex::directionType::rev,189, vex::velocityUnits::pct);
	RBack.spin(vex::directionType::rev, 189, vex::velocityUnits::pct);
	LFront.spin(vex::directionType::rev, 189,  vex::velocityUnits::pct);
	LBack.spin(vex::directionType::rev, 189, vex::velocityUnits::pct);
	if(false){
	Intake.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if( false){
	Intake.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Intake.stop(vex::brakeType::brake);
}
	if( false){
	Rollers.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if(false){
	Rollers.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Rollers.stop(vex::brakeType::brake);
}
	  if(false){
	FlyWheel.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	FlyWheel.stop(vex::brakeType::coast);
}
	if(false) {
	pneum.set( true );
	this_thread::sleep_for(500);
	pneum.set( false );
}
	if(false){
	Extension.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	}else if(false){
	Extension.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
} else{
	Extension.stop(vex::brakeType::brake);
}
	task::sleep(60);
	RFront.spin(vex::directionType::rev,173, vex::velocityUnits::pct);
	RBack.spin(vex::directionType::rev, 173, vex::velocityUnits::pct);
	LFront.spin(vex::directionType::rev, 173,  vex::velocityUnits::pct);
	LBack.spin(vex::directionType::rev, 173, vex::velocityUnits::pct);
	if(false){
	Intake.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if( false){
	Intake.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Intake.stop(vex::brakeType::brake);
}
	if( false){
	Rollers.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if(false){
	Rollers.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Rollers.stop(vex::brakeType::brake);
}
	  if(false){
	FlyWheel.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	FlyWheel.stop(vex::brakeType::coast);
}
	if(false) {
	pneum.set( true );
	this_thread::sleep_for(500);
	pneum.set( false );
}
	if(false){
	Extension.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	}else if(false){
	Extension.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
} else{
	Extension.stop(vex::brakeType::brake);
}
	task::sleep(30);
	RFront.spin(vex::directionType::rev,174, vex::velocityUnits::pct);
	RBack.spin(vex::directionType::rev, 174, vex::velocityUnits::pct);
	LFront.spin(vex::directionType::rev, 174,  vex::velocityUnits::pct);
	LBack.spin(vex::directionType::rev, 174, vex::velocityUnits::pct);
	if(false){
	Intake.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if( false){
	Intake.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Intake.stop(vex::brakeType::brake);
}
	if( false){
	Rollers.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if(false){
	Rollers.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Rollers.stop(vex::brakeType::brake);
}
	  if(false){
	FlyWheel.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	FlyWheel.stop(vex::brakeType::coast);
}
	if(false) {
	pneum.set( true );
	this_thread::sleep_for(500);
	pneum.set( false );
}
	if(false){
	Extension.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	}else if(false){
	Extension.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
} else{
	Extension.stop(vex::brakeType::brake);
}
	task::sleep(40);
	RFront.spin(vex::directionType::rev,3, vex::velocityUnits::pct);
	RBack.spin(vex::directionType::rev, 3, vex::velocityUnits::pct);
	LFront.spin(vex::directionType::rev, 3,  vex::velocityUnits::pct);
	LBack.spin(vex::directionType::rev, 3, vex::velocityUnits::pct);
	if(false){
	Intake.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if( false){
	Intake.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Intake.stop(vex::brakeType::brake);
}
	if( false){
	Rollers.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if(false){
	Rollers.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Rollers.stop(vex::brakeType::brake);
}
	  if(false){
	FlyWheel.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	FlyWheel.stop(vex::brakeType::coast);
}
	if(false) {
	pneum.set( true );
	this_thread::sleep_for(500);
	pneum.set( false );
}
	if(false){
	Extension.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	}else if(false){
	Extension.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
} else{
	Extension.stop(vex::brakeType::brake);
}
	task::sleep(40);
	RFront.spin(vex::directionType::rev,0, vex::velocityUnits::pct);
	RBack.spin(vex::directionType::rev, 0, vex::velocityUnits::pct);
	LFront.spin(vex::directionType::rev, 0,  vex::velocityUnits::pct);
	LBack.spin(vex::directionType::rev, 0, vex::velocityUnits::pct);
	if(false){
	Intake.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if( false){
	Intake.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Intake.stop(vex::brakeType::brake);
}
	if( false){
	Rollers.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if(false){
	Rollers.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Rollers.stop(vex::brakeType::brake);
}
	  if(false){
	FlyWheel.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	FlyWheel.stop(vex::brakeType::coast);
}
	if(false) {
	pneum.set( true );
	this_thread::sleep_for(500);
	pneum.set( false );
}
	if(false){
	Extension.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	}else if(false){
	Extension.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
} else{
	Extension.stop(vex::brakeType::brake);
}
	task::sleep(1280);
	RFront.spin(vex::directionType::rev,0, vex::velocityUnits::pct);
	RBack.spin(vex::directionType::rev, 0, vex::velocityUnits::pct);
	LFront.spin(vex::directionType::rev, 0,  vex::velocityUnits::pct);
	LBack.spin(vex::directionType::rev, 0, vex::velocityUnits::pct);
	if(false){
	Intake.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if( false){
	Intake.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Intake.stop(vex::brakeType::brake);
}
	if( false){
	Rollers.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if(false){
	Rollers.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Rollers.stop(vex::brakeType::brake);
}
	  if(true){
	FlyWheel.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	FlyWheel.stop(vex::brakeType::coast);
}
	if(false) {
	pneum.set( true );
	this_thread::sleep_for(500);
	pneum.set( false );
}
	if(false){
	Extension.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	}else if(false){
	Extension.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
} else{
	Extension.stop(vex::brakeType::brake);
}
	task::sleep(1130);
	RFront.spin(vex::directionType::rev,22, vex::velocityUnits::pct);
	RBack.spin(vex::directionType::rev, 22, vex::velocityUnits::pct);
	LFront.spin(vex::directionType::rev, 234,  vex::velocityUnits::pct);
	LBack.spin(vex::directionType::rev, 234, vex::velocityUnits::pct);
	if(false){
	Intake.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if( false){
	Intake.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Intake.stop(vex::brakeType::brake);
}
	if( false){
	Rollers.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if(false){
	Rollers.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Rollers.stop(vex::brakeType::brake);
}
	  if(true){
	FlyWheel.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	FlyWheel.stop(vex::brakeType::coast);
}
	if(false) {
	pneum.set( true );
	this_thread::sleep_for(500);
	pneum.set( false );
}
	if(false){
	Extension.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	}else if(false){
	Extension.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
} else{
	Extension.stop(vex::brakeType::brake);
}
	task::sleep(40);
	RFront.spin(vex::directionType::rev,46, vex::velocityUnits::pct);
	RBack.spin(vex::directionType::rev, 46, vex::velocityUnits::pct);
	LFront.spin(vex::directionType::rev, 210,  vex::velocityUnits::pct);
	LBack.spin(vex::directionType::rev, 210, vex::velocityUnits::pct);
	if(false){
	Intake.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if( false){
	Intake.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Intake.stop(vex::brakeType::brake);
}
	if( false){
	Rollers.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if(false){
	Rollers.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Rollers.stop(vex::brakeType::brake);
}
	  if(true){
	FlyWheel.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	FlyWheel.stop(vex::brakeType::coast);
}
	if(false) {
	pneum.set( true );
	this_thread::sleep_for(500);
	pneum.set( false );
}
	if(false){
	Extension.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	}else if(false){
	Extension.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
} else{
	Extension.stop(vex::brakeType::brake);
}
	task::sleep(60);
	RFront.spin(vex::directionType::rev,47, vex::velocityUnits::pct);
	RBack.spin(vex::directionType::rev, 47, vex::velocityUnits::pct);
	LFront.spin(vex::directionType::rev, 209,  vex::velocityUnits::pct);
	LBack.spin(vex::directionType::rev, 209, vex::velocityUnits::pct);
	if(false){
	Intake.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if( false){
	Intake.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Intake.stop(vex::brakeType::brake);
}
	if( false){
	Rollers.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if(false){
	Rollers.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Rollers.stop(vex::brakeType::brake);
}
	  if(true){
	FlyWheel.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	FlyWheel.stop(vex::brakeType::coast);
}
	if(false) {
	pneum.set( true );
	this_thread::sleep_for(500);
	pneum.set( false );
}
	if(false){
	Extension.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	}else if(false){
	Extension.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
} else{
	Extension.stop(vex::brakeType::brake);
}
	task::sleep(70);
	RFront.spin(vex::directionType::rev,34, vex::velocityUnits::pct);
	RBack.spin(vex::directionType::rev, 34, vex::velocityUnits::pct);
	LFront.spin(vex::directionType::rev, 222,  vex::velocityUnits::pct);
	LBack.spin(vex::directionType::rev, 222, vex::velocityUnits::pct);
	if(false){
	Intake.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if( false){
	Intake.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Intake.stop(vex::brakeType::brake);
}
	if( false){
	Rollers.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if(false){
	Rollers.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Rollers.stop(vex::brakeType::brake);
}
	  if(true){
	FlyWheel.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	FlyWheel.stop(vex::brakeType::coast);
}
	if(false) {
	pneum.set( true );
	this_thread::sleep_for(500);
	pneum.set( false );
}
	if(false){
	Extension.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	}else if(false){
	Extension.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
} else{
	Extension.stop(vex::brakeType::brake);
}
	task::sleep(60);
	RFront.spin(vex::directionType::rev,1, vex::velocityUnits::pct);
	RBack.spin(vex::directionType::rev, 1, vex::velocityUnits::pct);
	LFront.spin(vex::directionType::rev, 255,  vex::velocityUnits::pct);
	LBack.spin(vex::directionType::rev, 255, vex::velocityUnits::pct);
	if(false){
	Intake.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if( false){
	Intake.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Intake.stop(vex::brakeType::brake);
}
	if( false){
	Rollers.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if(false){
	Rollers.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Rollers.stop(vex::brakeType::brake);
}
	  if(true){
	FlyWheel.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	FlyWheel.stop(vex::brakeType::coast);
}
	if(false) {
	pneum.set( true );
	this_thread::sleep_for(500);
	pneum.set( false );
}
	if(false){
	Extension.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	}else if(false){
	Extension.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
} else{
	Extension.stop(vex::brakeType::brake);
}
	task::sleep(40);
	RFront.spin(vex::directionType::rev,0, vex::velocityUnits::pct);
	RBack.spin(vex::directionType::rev, 0, vex::velocityUnits::pct);
	LFront.spin(vex::directionType::rev, 0,  vex::velocityUnits::pct);
	LBack.spin(vex::directionType::rev, 0, vex::velocityUnits::pct);
	if(false){
	Intake.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if( false){
	Intake.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Intake.stop(vex::brakeType::brake);
}
	if( false){
	Rollers.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if(false){
	Rollers.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Rollers.stop(vex::brakeType::brake);
}
	  if(true){
	FlyWheel.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	FlyWheel.stop(vex::brakeType::coast);
}
	if(false) {
	pneum.set( true );
	this_thread::sleep_for(500);
	pneum.set( false );
}
	if(false){
	Extension.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	}else if(false){
	Extension.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
} else{
	Extension.stop(vex::brakeType::brake);
}
	task::sleep(4290);
	RFront.spin(vex::directionType::rev,0, vex::velocityUnits::pct);
	RBack.spin(vex::directionType::rev, 0, vex::velocityUnits::pct);
	LFront.spin(vex::directionType::rev, 0,  vex::velocityUnits::pct);
	LBack.spin(vex::directionType::rev, 0, vex::velocityUnits::pct);
	if(false){
	Intake.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if( false){
	Intake.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Intake.stop(vex::brakeType::brake);
}
	if( false){
	Rollers.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if(false){
	Rollers.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Rollers.stop(vex::brakeType::brake);
}
	  if(true){
	FlyWheel.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	FlyWheel.stop(vex::brakeType::coast);
}
	if(true) {
	pneum.set( true );
	this_thread::sleep_for(500);
	pneum.set( false );
}
	if(false){
	Extension.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	}else if(false){
	Extension.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
} else{
	Extension.stop(vex::brakeType::brake);
}
	task::sleep(10);
	RFront.spin(vex::directionType::rev,0, vex::velocityUnits::pct);
	RBack.spin(vex::directionType::rev, 0, vex::velocityUnits::pct);
	LFront.spin(vex::directionType::rev, 0,  vex::velocityUnits::pct);
	LBack.spin(vex::directionType::rev, 0, vex::velocityUnits::pct);
	if(false){
	Intake.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if( false){
	Intake.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Intake.stop(vex::brakeType::brake);
}
	if( false){
	Rollers.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if(false){
	Rollers.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Rollers.stop(vex::brakeType::brake);
}
	  if(true){
	FlyWheel.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	FlyWheel.stop(vex::brakeType::coast);
}
	if(false) {
	pneum.set( true );
	this_thread::sleep_for(500);
	pneum.set( false );
}
	if(false){
	Extension.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	}else if(false){
	Extension.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
} else{
	Extension.stop(vex::brakeType::brake);
}
	task::sleep(1210);
	RFront.spin(vex::directionType::rev,2, vex::velocityUnits::pct);
	RBack.spin(vex::directionType::rev, 2, vex::velocityUnits::pct);
	LFront.spin(vex::directionType::rev, 254,  vex::velocityUnits::pct);
	LBack.spin(vex::directionType::rev, 254, vex::velocityUnits::pct);
	if(false){
	Intake.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if( false){
	Intake.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Intake.stop(vex::brakeType::brake);
}
	if( false){
	Rollers.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if(false){
	Rollers.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Rollers.stop(vex::brakeType::brake);
}
	  if(true){
	FlyWheel.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	FlyWheel.stop(vex::brakeType::coast);
}
	if(false) {
	pneum.set( true );
	this_thread::sleep_for(500);
	pneum.set( false );
}
	if(false){
	Extension.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	}else if(false){
	Extension.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
} else{
	Extension.stop(vex::brakeType::brake);
}
	task::sleep(60);
	RFront.spin(vex::directionType::rev,37, vex::velocityUnits::pct);
	RBack.spin(vex::directionType::rev, 37, vex::velocityUnits::pct);
	LFront.spin(vex::directionType::rev, 219,  vex::velocityUnits::pct);
	LBack.spin(vex::directionType::rev, 219, vex::velocityUnits::pct);
	if(false){
	Intake.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if( false){
	Intake.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Intake.stop(vex::brakeType::brake);
}
	if( false){
	Rollers.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if(false){
	Rollers.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Rollers.stop(vex::brakeType::brake);
}
	  if(true){
	FlyWheel.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	FlyWheel.stop(vex::brakeType::coast);
}
	if(false) {
	pneum.set( true );
	this_thread::sleep_for(500);
	pneum.set( false );
}
	if(false){
	Extension.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	}else if(false){
	Extension.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
} else{
	Extension.stop(vex::brakeType::brake);
}
	task::sleep(40);
	RFront.spin(vex::directionType::rev,68, vex::velocityUnits::pct);
	RBack.spin(vex::directionType::rev, 68, vex::velocityUnits::pct);
	LFront.spin(vex::directionType::rev, 188,  vex::velocityUnits::pct);
	LBack.spin(vex::directionType::rev, 188, vex::velocityUnits::pct);
	if(false){
	Intake.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if( false){
	Intake.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Intake.stop(vex::brakeType::brake);
}
	if( false){
	Rollers.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if(false){
	Rollers.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Rollers.stop(vex::brakeType::brake);
}
	  if(true){
	FlyWheel.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	FlyWheel.stop(vex::brakeType::coast);
}
	if(false) {
	pneum.set( true );
	this_thread::sleep_for(500);
	pneum.set( false );
}
	if(false){
	Extension.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	}else if(false){
	Extension.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
} else{
	Extension.stop(vex::brakeType::brake);
}
	task::sleep(60);
	RFront.spin(vex::directionType::rev,111, vex::velocityUnits::pct);
	RBack.spin(vex::directionType::rev, 111, vex::velocityUnits::pct);
	LFront.spin(vex::directionType::rev, 145,  vex::velocityUnits::pct);
	LBack.spin(vex::directionType::rev, 145, vex::velocityUnits::pct);
	if(false){
	Intake.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if( false){
	Intake.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Intake.stop(vex::brakeType::brake);
}
	if( false){
	Rollers.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if(false){
	Rollers.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Rollers.stop(vex::brakeType::brake);
}
	  if(true){
	FlyWheel.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	FlyWheel.stop(vex::brakeType::coast);
}
	if(false) {
	pneum.set( true );
	this_thread::sleep_for(500);
	pneum.set( false );
}
	if(false){
	Extension.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	}else if(false){
	Extension.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
} else{
	Extension.stop(vex::brakeType::brake);
}
	task::sleep(60);
	RFront.spin(vex::directionType::rev,117, vex::velocityUnits::pct);
	RBack.spin(vex::directionType::rev, 117, vex::velocityUnits::pct);
	LFront.spin(vex::directionType::rev, 139,  vex::velocityUnits::pct);
	LBack.spin(vex::directionType::rev, 139, vex::velocityUnits::pct);
	if(false){
	Intake.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if( false){
	Intake.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Intake.stop(vex::brakeType::brake);
}
	if( false){
	Rollers.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if(false){
	Rollers.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Rollers.stop(vex::brakeType::brake);
}
	  if(true){
	FlyWheel.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	FlyWheel.stop(vex::brakeType::coast);
}
	if(false) {
	pneum.set( true );
	this_thread::sleep_for(500);
	pneum.set( false );
}
	if(false){
	Extension.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	}else if(false){
	Extension.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
} else{
	Extension.stop(vex::brakeType::brake);
}
	task::sleep(40);
	RFront.spin(vex::directionType::rev,96, vex::velocityUnits::pct);
	RBack.spin(vex::directionType::rev, 96, vex::velocityUnits::pct);
	LFront.spin(vex::directionType::rev, 160,  vex::velocityUnits::pct);
	LBack.spin(vex::directionType::rev, 160, vex::velocityUnits::pct);
	if(false){
	Intake.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if( false){
	Intake.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Intake.stop(vex::brakeType::brake);
}
	if( false){
	Rollers.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if(false){
	Rollers.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Rollers.stop(vex::brakeType::brake);
}
	  if(true){
	FlyWheel.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	FlyWheel.stop(vex::brakeType::coast);
}
	if(false) {
	pneum.set( true );
	this_thread::sleep_for(500);
	pneum.set( false );
}
	if(false){
	Extension.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	}else if(false){
	Extension.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
} else{
	Extension.stop(vex::brakeType::brake);
}
	task::sleep(40);
	RFront.spin(vex::directionType::rev,31, vex::velocityUnits::pct);
	RBack.spin(vex::directionType::rev, 31, vex::velocityUnits::pct);
	LFront.spin(vex::directionType::rev, 225,  vex::velocityUnits::pct);
	LBack.spin(vex::directionType::rev, 225, vex::velocityUnits::pct);
	if(false){
	Intake.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if( false){
	Intake.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Intake.stop(vex::brakeType::brake);
}
	if( false){
	Rollers.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if(false){
	Rollers.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Rollers.stop(vex::brakeType::brake);
}
	  if(true){
	FlyWheel.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	FlyWheel.stop(vex::brakeType::coast);
}
	if(false) {
	pneum.set( true );
	this_thread::sleep_for(500);
	pneum.set( false );
}
	if(false){
	Extension.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	}else if(false){
	Extension.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
} else{
	Extension.stop(vex::brakeType::brake);
}
	task::sleep(40);
	RFront.spin(vex::directionType::rev,0, vex::velocityUnits::pct);
	RBack.spin(vex::directionType::rev, 0, vex::velocityUnits::pct);
	LFront.spin(vex::directionType::rev, 0,  vex::velocityUnits::pct);
	LBack.spin(vex::directionType::rev, 0, vex::velocityUnits::pct);
	if(false){
	Intake.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if( false){
	Intake.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Intake.stop(vex::brakeType::brake);
}
	if( false){
	Rollers.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if(false){
	Rollers.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Rollers.stop(vex::brakeType::brake);
}
	  if(true){
	FlyWheel.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	FlyWheel.stop(vex::brakeType::coast);
}
	if(false) {
	pneum.set( true );
	this_thread::sleep_for(500);
	pneum.set( false );
}
	if(false){
	Extension.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	}else if(false){
	Extension.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
} else{
	Extension.stop(vex::brakeType::brake);
}
	task::sleep(590);
	RFront.spin(vex::directionType::rev,249, vex::velocityUnits::pct);
	RBack.spin(vex::directionType::rev, 249, vex::velocityUnits::pct);
	LFront.spin(vex::directionType::rev, 7,  vex::velocityUnits::pct);
	LBack.spin(vex::directionType::rev, 7, vex::velocityUnits::pct);
	if(false){
	Intake.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if( false){
	Intake.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Intake.stop(vex::brakeType::brake);
}
	if( false){
	Rollers.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if(false){
	Rollers.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Rollers.stop(vex::brakeType::brake);
}
	  if(true){
	FlyWheel.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	FlyWheel.stop(vex::brakeType::coast);
}
	if(false) {
	pneum.set( true );
	this_thread::sleep_for(500);
	pneum.set( false );
}
	if(false){
	Extension.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	}else if(false){
	Extension.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
} else{
	Extension.stop(vex::brakeType::brake);
}
	task::sleep(60);
	RFront.spin(vex::directionType::rev,230, vex::velocityUnits::pct);
	RBack.spin(vex::directionType::rev, 230, vex::velocityUnits::pct);
	LFront.spin(vex::directionType::rev, 26,  vex::velocityUnits::pct);
	LBack.spin(vex::directionType::rev, 26, vex::velocityUnits::pct);
	if(false){
	Intake.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if( false){
	Intake.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Intake.stop(vex::brakeType::brake);
}
	if( false){
	Rollers.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if(false){
	Rollers.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Rollers.stop(vex::brakeType::brake);
}
	  if(true){
	FlyWheel.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	FlyWheel.stop(vex::brakeType::coast);
}
	if(false) {
	pneum.set( true );
	this_thread::sleep_for(500);
	pneum.set( false );
}
	if(false){
	Extension.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	}else if(false){
	Extension.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
} else{
	Extension.stop(vex::brakeType::brake);
}
	task::sleep(40);
	RFront.spin(vex::directionType::rev,177, vex::velocityUnits::pct);
	RBack.spin(vex::directionType::rev, 177, vex::velocityUnits::pct);
	LFront.spin(vex::directionType::rev, 79,  vex::velocityUnits::pct);
	LBack.spin(vex::directionType::rev, 79, vex::velocityUnits::pct);
	if(false){
	Intake.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if( false){
	Intake.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Intake.stop(vex::brakeType::brake);
}
	if( false){
	Rollers.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if(false){
	Rollers.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Rollers.stop(vex::brakeType::brake);
}
	  if(true){
	FlyWheel.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	FlyWheel.stop(vex::brakeType::coast);
}
	if(false) {
	pneum.set( true );
	this_thread::sleep_for(500);
	pneum.set( false );
}
	if(false){
	Extension.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	}else if(false){
	Extension.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
} else{
	Extension.stop(vex::brakeType::brake);
}
	task::sleep(40);
	RFront.spin(vex::directionType::rev,165, vex::velocityUnits::pct);
	RBack.spin(vex::directionType::rev, 165, vex::velocityUnits::pct);
	LFront.spin(vex::directionType::rev, 91,  vex::velocityUnits::pct);
	LBack.spin(vex::directionType::rev, 91, vex::velocityUnits::pct);
	if(false){
	Intake.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if( false){
	Intake.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Intake.stop(vex::brakeType::brake);
}
	if( false){
	Rollers.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if(false){
	Rollers.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Rollers.stop(vex::brakeType::brake);
}
	  if(true){
	FlyWheel.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	FlyWheel.stop(vex::brakeType::coast);
}
	if(false) {
	pneum.set( true );
	this_thread::sleep_for(500);
	pneum.set( false );
}
	if(false){
	Extension.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	}else if(false){
	Extension.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
} else{
	Extension.stop(vex::brakeType::brake);
}
	task::sleep(60);
	RFront.spin(vex::directionType::rev,160, vex::velocityUnits::pct);
	RBack.spin(vex::directionType::rev, 160, vex::velocityUnits::pct);
	LFront.spin(vex::directionType::rev, 96,  vex::velocityUnits::pct);
	LBack.spin(vex::directionType::rev, 96, vex::velocityUnits::pct);
	if(false){
	Intake.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if( false){
	Intake.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Intake.stop(vex::brakeType::brake);
}
	if( false){
	Rollers.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if(false){
	Rollers.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Rollers.stop(vex::brakeType::brake);
}
	  if(true){
	FlyWheel.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	FlyWheel.stop(vex::brakeType::coast);
}
	if(false) {
	pneum.set( true );
	this_thread::sleep_for(500);
	pneum.set( false );
}
	if(false){
	Extension.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	}else if(false){
	Extension.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
} else{
	Extension.stop(vex::brakeType::brake);
}
	task::sleep(90);
	RFront.spin(vex::directionType::rev,175, vex::velocityUnits::pct);
	RBack.spin(vex::directionType::rev, 175, vex::velocityUnits::pct);
	LFront.spin(vex::directionType::rev, 81,  vex::velocityUnits::pct);
	LBack.spin(vex::directionType::rev, 81, vex::velocityUnits::pct);
	if(false){
	Intake.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if( false){
	Intake.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Intake.stop(vex::brakeType::brake);
}
	if( false){
	Rollers.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if(false){
	Rollers.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Rollers.stop(vex::brakeType::brake);
}
	  if(true){
	FlyWheel.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	FlyWheel.stop(vex::brakeType::coast);
}
	if(false) {
	pneum.set( true );
	this_thread::sleep_for(500);
	pneum.set( false );
}
	if(false){
	Extension.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	}else if(false){
	Extension.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
} else{
	Extension.stop(vex::brakeType::brake);
}
	task::sleep(40);
	RFront.spin(vex::directionType::rev,0, vex::velocityUnits::pct);
	RBack.spin(vex::directionType::rev, 0, vex::velocityUnits::pct);
	LFront.spin(vex::directionType::rev, 0,  vex::velocityUnits::pct);
	LBack.spin(vex::directionType::rev, 0, vex::velocityUnits::pct);
	if(false){
	Intake.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if( false){
	Intake.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Intake.stop(vex::brakeType::brake);
}
	if( false){
	Rollers.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if(false){
	Rollers.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Rollers.stop(vex::brakeType::brake);
}
	  if(true){
	FlyWheel.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	FlyWheel.stop(vex::brakeType::coast);
}
	if(false) {
	pneum.set( true );
	this_thread::sleep_for(500);
	pneum.set( false );
}
	if(false){
	Extension.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	}else if(false){
	Extension.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
} else{
	Extension.stop(vex::brakeType::brake);
}
	task::sleep(520);
	RFront.spin(vex::directionType::rev,245, vex::velocityUnits::pct);
	RBack.spin(vex::directionType::rev, 245, vex::velocityUnits::pct);
	LFront.spin(vex::directionType::rev, 11,  vex::velocityUnits::pct);
	LBack.spin(vex::directionType::rev, 11, vex::velocityUnits::pct);
	if(false){
	Intake.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if( false){
	Intake.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Intake.stop(vex::brakeType::brake);
}
	if( false){
	Rollers.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if(false){
	Rollers.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Rollers.stop(vex::brakeType::brake);
}
	  if(true){
	FlyWheel.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	FlyWheel.stop(vex::brakeType::coast);
}
	if(false) {
	pneum.set( true );
	this_thread::sleep_for(500);
	pneum.set( false );
}
	if(false){
	Extension.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	}else if(false){
	Extension.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
} else{
	Extension.stop(vex::brakeType::brake);
}
	task::sleep(60);
	RFront.spin(vex::directionType::rev,243, vex::velocityUnits::pct);
	RBack.spin(vex::directionType::rev, 243, vex::velocityUnits::pct);
	LFront.spin(vex::directionType::rev, 13,  vex::velocityUnits::pct);
	LBack.spin(vex::directionType::rev, 13, vex::velocityUnits::pct);
	if(false){
	Intake.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if( false){
	Intake.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Intake.stop(vex::brakeType::brake);
}
	if( false){
	Rollers.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if(false){
	Rollers.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Rollers.stop(vex::brakeType::brake);
}
	  if(true){
	FlyWheel.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	FlyWheel.stop(vex::brakeType::coast);
}
	if(false) {
	pneum.set( true );
	this_thread::sleep_for(500);
	pneum.set( false );
}
	if(false){
	Extension.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	}else if(false){
	Extension.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
} else{
	Extension.stop(vex::brakeType::brake);
}
	task::sleep(40);
	RFront.spin(vex::directionType::rev,0, vex::velocityUnits::pct);
	RBack.spin(vex::directionType::rev, 0, vex::velocityUnits::pct);
	LFront.spin(vex::directionType::rev, 0,  vex::velocityUnits::pct);
	LBack.spin(vex::directionType::rev, 0, vex::velocityUnits::pct);
	if(false){
	Intake.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if( false){
	Intake.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Intake.stop(vex::brakeType::brake);
}
	if( false){
	Rollers.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if(false){
	Rollers.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Rollers.stop(vex::brakeType::brake);
}
	  if(true){
	FlyWheel.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	FlyWheel.stop(vex::brakeType::coast);
}
	if(false) {
	pneum.set( true );
	this_thread::sleep_for(500);
	pneum.set( false );
}
	if(false){
	Extension.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	}else if(false){
	Extension.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
} else{
	Extension.stop(vex::brakeType::brake);
}
	task::sleep(1610);
	RFront.spin(vex::directionType::rev,0, vex::velocityUnits::pct);
	RBack.spin(vex::directionType::rev, 0, vex::velocityUnits::pct);
	LFront.spin(vex::directionType::rev, 0,  vex::velocityUnits::pct);
	LBack.spin(vex::directionType::rev, 0, vex::velocityUnits::pct);
	if(false){
	Intake.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if( false){
	Intake.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Intake.stop(vex::brakeType::brake);
}
	if( false){
	Rollers.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if(false){
	Rollers.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Rollers.stop(vex::brakeType::brake);
}
	  if(true){
	FlyWheel.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	FlyWheel.stop(vex::brakeType::coast);
}
	if(true) {
	pneum.set( true );
	this_thread::sleep_for(500);
	pneum.set( false );
}
	if(false){
	Extension.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	}else if(false){
	Extension.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
} else{
	Extension.stop(vex::brakeType::brake);
}
	task::sleep(10);
	RFront.spin(vex::directionType::rev,0, vex::velocityUnits::pct);
	RBack.spin(vex::directionType::rev, 0, vex::velocityUnits::pct);
	LFront.spin(vex::directionType::rev, 0,  vex::velocityUnits::pct);
	LBack.spin(vex::directionType::rev, 0, vex::velocityUnits::pct);
	if(false){
	Intake.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if( false){
	Intake.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Intake.stop(vex::brakeType::brake);
}
	if( false){
	Rollers.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if(false){
	Rollers.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Rollers.stop(vex::brakeType::brake);
}
	  if(true){
	FlyWheel.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	FlyWheel.stop(vex::brakeType::coast);
}
	if(false) {
	pneum.set( true );
	this_thread::sleep_for(500);
	pneum.set( false );
}
	if(false){
	Extension.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	}else if(false){
	Extension.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
} else{
	Extension.stop(vex::brakeType::brake);
}
	task::sleep(2470);
	RFront.spin(vex::directionType::rev,0, vex::velocityUnits::pct);
	RBack.spin(vex::directionType::rev, 0, vex::velocityUnits::pct);
	LFront.spin(vex::directionType::rev, 0,  vex::velocityUnits::pct);
	LBack.spin(vex::directionType::rev, 0, vex::velocityUnits::pct);
	if(false){
	Intake.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if( false){
	Intake.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Intake.stop(vex::brakeType::brake);
}
	if( false){
	Rollers.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if(false){
	Rollers.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Rollers.stop(vex::brakeType::brake);
}
	  if(false){
	FlyWheel.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	FlyWheel.stop(vex::brakeType::coast);
}
	if(false) {
	pneum.set( true );
	this_thread::sleep_for(500);
	pneum.set( false );
}
	if(false){
	Extension.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	}else if(false){
	Extension.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
} else{
	Extension.stop(vex::brakeType::brake);
}
	task::sleep(6830);
	RFront.spin(vex::directionType::rev,0, vex::velocityUnits::pct);
	RBack.spin(vex::directionType::rev, 0, vex::velocityUnits::pct);
	LFront.spin(vex::directionType::rev, 0,  vex::velocityUnits::pct);
	LBack.spin(vex::directionType::rev, 0, vex::velocityUnits::pct);
	if(false){
	Intake.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if( false){
	Intake.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Intake.stop(vex::brakeType::brake);
}
	if( false){
	Rollers.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if(false){
	Rollers.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Rollers.stop(vex::brakeType::brake);
}
	  if(true){
	FlyWheel.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	FlyWheel.stop(vex::brakeType::coast);
}
	if(false) {
	pneum.set( true );
	this_thread::sleep_for(500);
	pneum.set( false );
}
	if(false){
	Extension.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	}else if(false){
	Extension.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
} else{
	Extension.stop(vex::brakeType::brake);
}
	task::sleep(6640);
	RFront.spin(vex::directionType::rev,0, vex::velocityUnits::pct);
	RBack.spin(vex::directionType::rev, 0, vex::velocityUnits::pct);
	LFront.spin(vex::directionType::rev, 0,  vex::velocityUnits::pct);
	LBack.spin(vex::directionType::rev, 0, vex::velocityUnits::pct);
	if(false){
	Intake.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if( false){
	Intake.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Intake.stop(vex::brakeType::brake);
}
	if( false){
	Rollers.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if(false){
	Rollers.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Rollers.stop(vex::brakeType::brake);
}
	  if(true){
	FlyWheel.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	FlyWheel.stop(vex::brakeType::coast);
}
	if(true) {
	pneum.set( true );
	this_thread::sleep_for(500);
	pneum.set( false );
}
	if(false){
	Extension.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	}else if(false){
	Extension.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
} else{
	Extension.stop(vex::brakeType::brake);
}
	task::sleep(10);
	RFront.spin(vex::directionType::rev,0, vex::velocityUnits::pct);
	RBack.spin(vex::directionType::rev, 0, vex::velocityUnits::pct);
	LFront.spin(vex::directionType::rev, 0,  vex::velocityUnits::pct);
	LBack.spin(vex::directionType::rev, 0, vex::velocityUnits::pct);
	if(false){
	Intake.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if( false){
	Intake.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Intake.stop(vex::brakeType::brake);
}
	if( false){
	Rollers.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if(false){
	Rollers.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Rollers.stop(vex::brakeType::brake);
}
	  if(true){
	FlyWheel.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	FlyWheel.stop(vex::brakeType::coast);
}
	if(false) {
	pneum.set( true );
	this_thread::sleep_for(500);
	pneum.set( false );
}
	if(false){
	Extension.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	}else if(false){
	Extension.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
} else{
	Extension.stop(vex::brakeType::brake);
}
	task::sleep(580);
	RFront.spin(vex::directionType::rev,0, vex::velocityUnits::pct);
	RBack.spin(vex::directionType::rev, 0, vex::velocityUnits::pct);
	LFront.spin(vex::directionType::rev, 0,  vex::velocityUnits::pct);
	LBack.spin(vex::directionType::rev, 0, vex::velocityUnits::pct);
	if(false){
	Intake.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if( false){
	Intake.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Intake.stop(vex::brakeType::brake);
}
	if( false){
	Rollers.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if(false){
	Rollers.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Rollers.stop(vex::brakeType::brake);
}
	  if(false){
	FlyWheel.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	FlyWheel.stop(vex::brakeType::coast);
}
	if(false) {
	pneum.set( true );
	this_thread::sleep_for(500);
	pneum.set( false );
}
	if(false){
	Extension.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	}else if(false){
	Extension.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
} else{
	Extension.stop(vex::brakeType::brake);
}
	task::sleep(4190);
	RFront.spin(vex::directionType::rev,31, vex::velocityUnits::pct);
	RBack.spin(vex::directionType::rev, 31, vex::velocityUnits::pct);
	LFront.spin(vex::directionType::rev, 225,  vex::velocityUnits::pct);
	LBack.spin(vex::directionType::rev, 225, vex::velocityUnits::pct);
	if(false){
	Intake.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if( false){
	Intake.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Intake.stop(vex::brakeType::brake);
}
	if( false){
	Rollers.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if(false){
	Rollers.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Rollers.stop(vex::brakeType::brake);
}
	  if(false){
	FlyWheel.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	FlyWheel.stop(vex::brakeType::coast);
}
	if(false) {
	pneum.set( true );
	this_thread::sleep_for(500);
	pneum.set( false );
}
	if(false){
	Extension.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	}else if(false){
	Extension.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
} else{
	Extension.stop(vex::brakeType::brake);
}
	task::sleep(40);
	RFront.spin(vex::directionType::rev,89, vex::velocityUnits::pct);
	RBack.spin(vex::directionType::rev, 89, vex::velocityUnits::pct);
	LFront.spin(vex::directionType::rev, 167,  vex::velocityUnits::pct);
	LBack.spin(vex::directionType::rev, 167, vex::velocityUnits::pct);
	if(false){
	Intake.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if( false){
	Intake.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Intake.stop(vex::brakeType::brake);
}
	if( false){
	Rollers.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if(false){
	Rollers.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Rollers.stop(vex::brakeType::brake);
}
	  if(false){
	FlyWheel.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	FlyWheel.stop(vex::brakeType::coast);
}
	if(false) {
	pneum.set( true );
	this_thread::sleep_for(500);
	pneum.set( false );
}
	if(false){
	Extension.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	}else if(false){
	Extension.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
} else{
	Extension.stop(vex::brakeType::brake);
}
	task::sleep(40);
	RFront.spin(vex::directionType::rev,127, vex::velocityUnits::pct);
	RBack.spin(vex::directionType::rev, 127, vex::velocityUnits::pct);
	LFront.spin(vex::directionType::rev, 129,  vex::velocityUnits::pct);
	LBack.spin(vex::directionType::rev, 129, vex::velocityUnits::pct);
	if(false){
	Intake.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if( false){
	Intake.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Intake.stop(vex::brakeType::brake);
}
	if( false){
	Rollers.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if(false){
	Rollers.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Rollers.stop(vex::brakeType::brake);
}
	  if(false){
	FlyWheel.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	FlyWheel.stop(vex::brakeType::coast);
}
	if(false) {
	pneum.set( true );
	this_thread::sleep_for(500);
	pneum.set( false );
}
	if(false){
	Extension.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	}else if(false){
	Extension.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
} else{
	Extension.stop(vex::brakeType::brake);
}
	task::sleep(810);
	RFront.spin(vex::directionType::rev,0, vex::velocityUnits::pct);
	RBack.spin(vex::directionType::rev, 0, vex::velocityUnits::pct);
	LFront.spin(vex::directionType::rev, 0,  vex::velocityUnits::pct);
	LBack.spin(vex::directionType::rev, 0, vex::velocityUnits::pct);
	if(false){
	Intake.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if( false){
	Intake.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Intake.stop(vex::brakeType::brake);
}
	if( false){
	Rollers.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if(false){
	Rollers.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Rollers.stop(vex::brakeType::brake);
}
	  if(false){
	FlyWheel.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	FlyWheel.stop(vex::brakeType::coast);
}
	if(false) {
	pneum.set( true );
	this_thread::sleep_for(500);
	pneum.set( false );
}
	if(false){
	Extension.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	}else if(false){
	Extension.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
} else{
	Extension.stop(vex::brakeType::brake);
}
	task::sleep(40);
	RFront.spin(vex::directionType::rev,239, vex::velocityUnits::pct);
	RBack.spin(vex::directionType::rev, 239, vex::velocityUnits::pct);
	LFront.spin(vex::directionType::rev, 239,  vex::velocityUnits::pct);
	LBack.spin(vex::directionType::rev, 239, vex::velocityUnits::pct);
	if(false){
	Intake.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if( false){
	Intake.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Intake.stop(vex::brakeType::brake);
}
	if( false){
	Rollers.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if(false){
	Rollers.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Rollers.stop(vex::brakeType::brake);
}
	  if(false){
	FlyWheel.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	FlyWheel.stop(vex::brakeType::coast);
}
	if(false) {
	pneum.set( true );
	this_thread::sleep_for(500);
	pneum.set( false );
}
	if(false){
	Extension.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	}else if(false){
	Extension.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
} else{
	Extension.stop(vex::brakeType::brake);
}
	task::sleep(40);
	RFront.spin(vex::directionType::rev,198, vex::velocityUnits::pct);
	RBack.spin(vex::directionType::rev, 198, vex::velocityUnits::pct);
	LFront.spin(vex::directionType::rev, 198,  vex::velocityUnits::pct);
	LBack.spin(vex::directionType::rev, 198, vex::velocityUnits::pct);
	if(false){
	Intake.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if( false){
	Intake.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Intake.stop(vex::brakeType::brake);
}
	if( false){
	Rollers.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if(false){
	Rollers.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Rollers.stop(vex::brakeType::brake);
}
	  if(false){
	FlyWheel.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	FlyWheel.stop(vex::brakeType::coast);
}
	if(false) {
	pneum.set( true );
	this_thread::sleep_for(500);
	pneum.set( false );
}
	if(false){
	Extension.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	}else if(false){
	Extension.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
} else{
	Extension.stop(vex::brakeType::brake);
}
	task::sleep(40);
	RFront.spin(vex::directionType::rev,169, vex::velocityUnits::pct);
	RBack.spin(vex::directionType::rev, 169, vex::velocityUnits::pct);
	LFront.spin(vex::directionType::rev, 169,  vex::velocityUnits::pct);
	LBack.spin(vex::directionType::rev, 169, vex::velocityUnits::pct);
	if(false){
	Intake.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if( false){
	Intake.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Intake.stop(vex::brakeType::brake);
}
	if( false){
	Rollers.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if(false){
	Rollers.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Rollers.stop(vex::brakeType::brake);
}
	  if(false){
	FlyWheel.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	FlyWheel.stop(vex::brakeType::coast);
}
	if(false) {
	pneum.set( true );
	this_thread::sleep_for(500);
	pneum.set( false );
}
	if(false){
	Extension.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	}else if(false){
	Extension.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
} else{
	Extension.stop(vex::brakeType::brake);
}
	task::sleep(40);
	RFront.spin(vex::directionType::rev,132, vex::velocityUnits::pct);
	RBack.spin(vex::directionType::rev, 132, vex::velocityUnits::pct);
	LFront.spin(vex::directionType::rev, 132,  vex::velocityUnits::pct);
	LBack.spin(vex::directionType::rev, 132, vex::velocityUnits::pct);
	if(false){
	Intake.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if( false){
	Intake.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Intake.stop(vex::brakeType::brake);
}
	if( false){
	Rollers.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if(false){
	Rollers.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Rollers.stop(vex::brakeType::brake);
}
	  if(false){
	FlyWheel.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	FlyWheel.stop(vex::brakeType::coast);
}
	if(false) {
	pneum.set( true );
	this_thread::sleep_for(500);
	pneum.set( false );
}
	if(false){
	Extension.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	}else if(false){
	Extension.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
} else{
	Extension.stop(vex::brakeType::brake);
}
	task::sleep(60);
	RFront.spin(vex::directionType::rev,129, vex::velocityUnits::pct);
	RBack.spin(vex::directionType::rev, 129, vex::velocityUnits::pct);
	LFront.spin(vex::directionType::rev, 129,  vex::velocityUnits::pct);
	LBack.spin(vex::directionType::rev, 129, vex::velocityUnits::pct);
	if(false){
	Intake.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if( false){
	Intake.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Intake.stop(vex::brakeType::brake);
}
	if( false){
	Rollers.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if(false){
	Rollers.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Rollers.stop(vex::brakeType::brake);
}
	  if(false){
	FlyWheel.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	FlyWheel.stop(vex::brakeType::coast);
}
	if(false) {
	pneum.set( true );
	this_thread::sleep_for(500);
	pneum.set( false );
}
	if(false){
	Extension.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	}else if(false){
	Extension.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
} else{
	Extension.stop(vex::brakeType::brake);
}
	task::sleep(1330);
	RFront.spin(vex::directionType::rev,156, vex::velocityUnits::pct);
	RBack.spin(vex::directionType::rev, 156, vex::velocityUnits::pct);
	LFront.spin(vex::directionType::rev, 156,  vex::velocityUnits::pct);
	LBack.spin(vex::directionType::rev, 156, vex::velocityUnits::pct);
	if(false){
	Intake.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if( false){
	Intake.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Intake.stop(vex::brakeType::brake);
}
	if( false){
	Rollers.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if(false){
	Rollers.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Rollers.stop(vex::brakeType::brake);
}
	  if(false){
	FlyWheel.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	FlyWheel.stop(vex::brakeType::coast);
}
	if(false) {
	pneum.set( true );
	this_thread::sleep_for(500);
	pneum.set( false );
}
	if(false){
	Extension.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	}else if(false){
	Extension.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
} else{
	Extension.stop(vex::brakeType::brake);
}
	task::sleep(40);
	RFront.spin(vex::directionType::rev,0, vex::velocityUnits::pct);
	RBack.spin(vex::directionType::rev, 0, vex::velocityUnits::pct);
	LFront.spin(vex::directionType::rev, 0,  vex::velocityUnits::pct);
	LBack.spin(vex::directionType::rev, 0, vex::velocityUnits::pct);
	if(false){
	Intake.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if( false){
	Intake.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Intake.stop(vex::brakeType::brake);
}
	if( false){
	Rollers.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if(false){
	Rollers.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Rollers.stop(vex::brakeType::brake);
}
	  if(false){
	FlyWheel.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	FlyWheel.stop(vex::brakeType::coast);
}
	if(false) {
	pneum.set( true );
	this_thread::sleep_for(500);
	pneum.set( false );
}
	if(false){
	Extension.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	}else if(false){
	Extension.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
} else{
	Extension.stop(vex::brakeType::brake);
}
	task::sleep(6310);
	RFront.spin(vex::directionType::rev,0, vex::velocityUnits::pct);
	RBack.spin(vex::directionType::rev, 0, vex::velocityUnits::pct);
	LFront.spin(vex::directionType::rev, 0,  vex::velocityUnits::pct);
	LBack.spin(vex::directionType::rev, 0, vex::velocityUnits::pct);
	if(false){
	Intake.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if( false){
	Intake.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Intake.stop(vex::brakeType::brake);
}
	if( false){
	Rollers.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if(false){
	Rollers.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Rollers.stop(vex::brakeType::brake);
}
	  if(true){
	FlyWheel.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	FlyWheel.stop(vex::brakeType::coast);
}
	if(false) {
	pneum.set( true );
	this_thread::sleep_for(500);
	pneum.set( false );
}
	if(false){
	Extension.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	}else if(false){
	Extension.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
} else{
	Extension.stop(vex::brakeType::brake);
}
	task::sleep(9040);
	RFront.spin(vex::directionType::rev,0, vex::velocityUnits::pct);
	RBack.spin(vex::directionType::rev, 0, vex::velocityUnits::pct);
	LFront.spin(vex::directionType::rev, 0,  vex::velocityUnits::pct);
	LBack.spin(vex::directionType::rev, 0, vex::velocityUnits::pct);
	if(false){
	Intake.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if( false){
	Intake.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Intake.stop(vex::brakeType::brake);
}
	if( false){
	Rollers.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
	} else if(false){
	Rollers.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	Rollers.stop(vex::brakeType::brake);
}
	  if(false){
	FlyWheel.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	} else{
	FlyWheel.stop(vex::brakeType::coast);
}
	if(false) {
	pneum.set( true );
	this_thread::sleep_for(500);
	pneum.set( false );
}
	if(false){
	Extension.spin(vex::directionType::rev, 100, vex::velocityUnits::pct);
	}else if(false){
	Extension.spin(vex::directionType::fwd, 100, vex::velocityUnits::pct);
} else{
	Extension.stop(vex::brakeType::brake);
}
	task::sleep(56490);
	}