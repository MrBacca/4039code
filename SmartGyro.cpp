#include <SmartGyro.h>

SmartGyro::SmartGyro(int gyroPort, Encoder *leftEncoder, Encoder *rightEncoder)
{
	m_gyro = new Gyro(gyroPort);
	m_leftE = leftEncoder;
	m_rightE = rightEncoder;
}

float SmartGyro::getAngle(void)
{
	return m_angle;
}
