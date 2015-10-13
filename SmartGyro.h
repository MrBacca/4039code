#ifndef __SMARTGYRO__
#define __SMARTGYRO__

#include <WPILib.h>

class SmartGyro : Gyro
{
	public:
	SmartGyro(int gyroPort, Encoder *leftEncoder, Encoder *rightEncoder); 
	float getAngle(void);
	
	private:
	SmartGyro();

	Gyro *m_gyro;
	Encoder *m_leftE;
	Encoder *m_rightE;
	float m_angle;
};

#endif
