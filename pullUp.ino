// Pull Up Resistor - 
// 1 / ON - LOW
// 0 / OFF - HIGH

/*
CIRCUIT - 

GND -> Push Button (path 0)
PIN 11 -> Push Button (path 1)
5V -> Resistor -> Push Button (path 1)

PIN 10 -> LED (+ve terminal)
GND -> LED(-ve terminal)
*/

// Not connecting the 5V PIN to the circuit through a Resistor will
// cause the "Floating Pin Effect"

int LED = 10, RECEIVER = 11;

void setup()
{
	pinMode(LED, OUTPUT);
	pinMode(RECEIVER, INPUT);
}

void loop()
{
	if(digitalRead(RECEIVER) == LOW)
		digitalWrite(LED, HIGH);
	else
		digitalWrite(LED, LOW);
}
