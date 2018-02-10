#include "OI.h"
#include <WPILib.h>

OI::OI()
:
{
	ArmButton = new JoystickButton(rightJoystick, 1);// Process operator interface input here.
}

OI::~OI()
{
	delete ArmButton;
}


Button * OI::getArmButton()
{
	return ArmButton;
}
