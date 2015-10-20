#ifndef __SMARTGYRO__
#define __SMARTGYRO__

#include "WPIlib.h"

class SmartGyro : private Gyro
{
	public:
		SmartGyro(int gyroPort, Encoder *leftEncoder, Encoder *rightEncoder); 
		float getAngle(void);
		void tick(void);
		void setSensitivity(float sensitivity);
	
	private:
		//private functions
		SmartGyro() : Gyro() {};
		
		//private variables
		Encoder 	*m_leftEncoder;
		Encoder 	*m_rightEncoder;
		
		float 		m_angle;
		float 		m_calibrationFactor;
		
		int	 	m_lastLeftEnc;
		int 		m_lastRightEnc;
};

#endif
