// Pull Up Resistor - 
// 1 / ON - LOW
// 0 / OFF - HIGH

/*
CIRCUIT - 

GND -> Push Button (path 0)
PIN 11 -> Push Button (path 1)

PIN 10 -> LED (+ve terminal)
GND -> LED(-ve terminal)
*/

// "Floating Pin Effect" will not occur
// for PIN 11 is connected to a PULL UP resistor internally

int LED = 10, RECEIVER = 11;

void setup()
{
	pinMode(LED, OUTPUT);
	pinMode(RECEIVER, INPUT_PULLUP);
}

void loop()
{
	if(digitalRead(RECEIVER) == LOW)
		digitalWrite(LED, HIGH);
	else
		digitalWrite(LED, LOW);
}
