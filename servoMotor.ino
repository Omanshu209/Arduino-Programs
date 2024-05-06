/*
Circuit

              |---> 5v
              |
Servo Motor --|---> 9
              |
              |---> GND
*/

#include <Servo.h>

Servo servoMotor;
bool open = false;
const int SERVO_PIN = 9;

void setup()
{
	servoMotor.attach(SERVO_PIN);
	Serial.begin(9600);
}

void loop()
{
	/*
	if(!open)
		servo.write(90);
	else
		servo.write(0);
	
	open = !open;
	delay(2000);
	*/
	
	if(!open)
	{
		for(int i = 0 ; i <= 90 ; i++)
		{
			servoMotor.write(i);
			delay(10);
		}
	}
	
	else
	{
		for(int i = 90 ; i >= 0 ; i--)
		{
			servoMotor.write(i);
			delay(10);
		}
	}
	
	open = !open;
	delay(2000);
}
