// RobotBuilder Version: 1.5
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


#ifndef OI_H
#define OI_H

#include "WPILib.h"

class OI {
private:
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
	Joystick* m_gamepad;
	Joystick* m_rightJoystick;
	Joystick* m_leftJoystick;
	Joystick* m_launchPad;

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS

	static const double PotRange;
	JoystickButton* m_rightButton10;
	JoystickButton* m_gamePadButtonA;
	JoystickButton* m_gamePadButtonY;
	JoystickButton* m_leftButton10;
	JoystickButton* m_gamePadButtonB;

public:
	JoystickButton* m_gamePadButtonX;
	OI();
 
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=PROTOTYPES

	Joystick* getm_leftJoystick();
	Joystick* getm_rightJoystick();
	Joystick* getm_gamepad();


	void SetLEDState(bool value);
	int GetElevatorPower();
	float GetElevatorPowerGamepad();
	void PrintElevatorPowerValue();
	std::string NumberToStringElevatorPower();
	int GetAutonomousState();
	void PrintAutoMode();
	std::string NumberToStringAutoMode();

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=PROTOTYPES
};

#endif
