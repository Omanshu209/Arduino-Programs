// LED's
// Positive Terminal -> pin 11 (PWM pin - used to write analog values, i.e., from 0 to 255)
// Negative Terminal -> GND (Ground)

int LED = 11;
int val = 0;

void setup()
{
	pinMode(LED, OUTPUT);
}

void loop()
{
	if(val < 255)
		val += 5;
	else
		val = 0;
	
	analogWrite(LED, val);
	delay(50);
	analogWrite(LED, val);
	delay(50);
}
