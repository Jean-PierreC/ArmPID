#include "ARM.h"
#include "../Commands/MoveArm"
#include "../RobotMap.h"

#include "Robot.cpp"
#include <WPILib.h>


ARM::ARM():

		frc::Subsystem("ARM"),
		talonARM(new CANTalon(1))
{

}
ARM::~ARM()
{
	delete talonARM;

}
void ARM::InitDefaultCommand()
{
	SetDefaultCommand(new MoveArm());
}
void Shooter::ShootBall(double ARMSpeed)
{
	talonShooter -> Set(ArmSpeed);

}
//void Shooter::ShootStop()
//{
	//talonShooter -> Set(0);

///}

}
