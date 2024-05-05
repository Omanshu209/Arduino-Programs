/*
Circuit

                |---> 5v
                |
Potentiometer --|---> A1
                |
                |---> GND
*/

const int POTENTIOMETER_pin = A1;
int value;

void setup()
{
	pinMode(POTENTIOMETER_pin, INPUT);
	Serial.begin(9600);
}

void loop()
{
	value = analogRead(POTENTIOMETER_pin);
	Serial.println(value);
	delay(5);
}
