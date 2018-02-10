#ifndef OI_H
#define OI_H
#include "WPILib.h"
#include "ctrlib/CANTalon.h"

class OI {
public:
	OI();
	~OI();
	Joystick* getArmButton();



private:
	JoystickButton * ArmButton;

};

#endif  // OI_H
