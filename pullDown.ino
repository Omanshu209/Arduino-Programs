// Pull Down Resistor - 
// 1 / ON - HIGH
// 0 / OFF - LOW

/*
CIRCUIT - 

5V -> Push Button (path 0)
PIN 11 -> Push Button (path 1)
GND -> Resistor -> Push Button (path 1)

PIN 10 -> LED (+ve terminal)
GND -> LED(-ve terminal)
*/

// Not connecting the GND to the circuit through a Resistor will
// cause the "Floating Pin Effect"

int LED = 10, RECEIVER = 11, input;

void setup()
{
	pinMode(LED, OUTPUT);
	pinMode(RECEIVER, INPUT);
	
	Serial.begin(9600);
}

void loop()
{
	input = digitalRead(RECEIVER);
	Serial.println(input);
	digitalWrite(LED, input);
}
