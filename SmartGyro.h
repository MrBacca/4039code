#ifndef __SMARTGYRO__
#define __SMARTGYRO__

#include <WPILib.h>

class SmartGyro : private Gyro
{
	public:
		SmartGyro(int gyroPort, Encoder *leftEncoder, Encoder *rightEncoder); 
		float getAngle(void);
		void tick(void);
	
	private:
		//private functions
		SmartGyro(){};
		
		//private variables
		Encoder 	*m_leftEncoder;
		Encoder 	*m_rightEncoder;
		
		float 		m_angle;
		float 		m_calibrationFactor;
		
		int	 	m_lastLeftEnc;
		int 		m_lastRightEnc;
};

#endif
