#ifndef ARM_H
#define ARM_H

#include "ctrlib/CANTalon.h"
#include <Commands/Subsystem.h>
#include <WPILib.h>

class ARM : public Subsystem {
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
	CANTalon* talonARM;
public:
	ARM();
	~ARM();
	void InitDefaultCommand();
	void moveARM(double speed);
};

#endif  // ARM_H
