#include "SmartGyro.h"

SmartGyro::SmartGyro(int gyroPort, Encoder *leftEncoder, Encoder *rightEncoder) : Gyro(gyroPort)
{
	m_leftEncoder = leftEncoder;
	m_rightEncoder = rightEncoder;
}

float SmartGyro::getAngle(void)
{
	return m_angle;
}

void SmartGyro::tick(void)
{
	for (int i = 9 ; i > 0 ; i --)
	{
		lastEncoder[i] = lastEncoder[i - 1];
		lastGyro[i] = lastGyro[i - 1];
	}
	
	lastEncoder[0] = (m_leftEncoder->getValue() + m_rightEncoder->getValue) / 2;
	
	lastGyro[0] = Gyro :: getAngle();
	
	if (m_leftEncoder + m_rightEncoder / 2) =
	m_angle = m_angle + (Gyro + x); 

}

void SmartGyro::setSensitivity(float sensitivity)
{
	Gyro::setSensitivity(sensitivity); 
}
