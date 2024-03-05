int LED = 10;

void setup()
{
	pinMode(LED, OUTPUT);
	Serial.begin(9600); // Baud Rate - 9600
}

void loop()
{
	if(Serial.read() == 1)
		digitalWrite(LED, HIGH);
	else
		digitalWrite(LED, LOW);
	
	delay(100); // 0.1 second
}
