// RobotBuilder Version: 0.0.2
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in th future.
#include "RobotMap.h"
#include "LiveWindow/LiveWindow.h"
// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=ALLOCATION
Gyro* RobotMap::drivetrainGyro1 = NULL;
SpeedController* RobotMap::drivetrainLeft = NULL;
SpeedController* RobotMap::drivetrainRight = NULL;
RobotDrive* RobotMap::drivetrainDrive = NULL;
Relay* RobotMap::pinchRelay = NULL;
Relay* RobotMap::tiltRelay = NULL;
Compressor* RobotMap::batterykillerCompressor1 = NULL;
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=ALLOCATION
void RobotMap::init() {
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
	LiveWindow* lw = LiveWindow::GetInstance();
	drivetrainGyro1 = new Gyro(1, 1);
	lw->AddSensor("Drivetrain", "Gyro 1", drivetrainGyro1);
	drivetrainGyro1->SetSensitivity(0.007);
	drivetrainLeft = new Talon(1, 2);
	lw->AddActuator("Drivetrain", "Left", (Talon*) drivetrainLeft);
	
	drivetrainRight = new Talon(1, 1);
	lw->AddActuator("Drivetrain", "Right", (Talon*) drivetrainRight);
	
	drivetrainDrive = new RobotDrive(drivetrainLeft, drivetrainRight);
	
	drivetrainDrive->SetSafetyEnabled(true);
        drivetrainDrive->SetExpiration(0.1);
        drivetrainDrive->SetSensitivity(0.5);
        drivetrainDrive->SetMaxOutput(1.0);
        
	pinchRelay = new Relay(1, 2);
	lw->AddActuator("Pinch", "Relay", pinchRelay);
	
	tiltRelay = new Relay(1, 3);
	lw->AddActuator("Tilt", "Relay", tiltRelay);
	
	batterykillerCompressor1 = new Compressor(1, 1, 1, 4);
	
	
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
}
