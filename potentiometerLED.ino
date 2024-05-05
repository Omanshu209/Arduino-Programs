/*
Circuit

                |---> 5v
                |
Potentiometer --|---> A1
                |
                |---> GND


      |---- + ---> 10
LED --|
      |-- - -----> GND
*/

const int LED_pin = 10;
const int POTENTIOMETER_pin = A1;

int value, mapped_value;

void setup()
{
	pinMode(LED_pin, OUTPUT);
	pinMode(POTENTIOMETER_pin, INPUT);
	
	Serial.begin(9600);
}

void loop()
{
	value = analogRead(POTENTIOMETER_pin);
	mapped_value = map(value, 0, 1023, 0, 255); // or value / 4;
	Serial.println(mapped_value);
	analogWrite(LED_pin, mapped_value);
	delay(10);
}
