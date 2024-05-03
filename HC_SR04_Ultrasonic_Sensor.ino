/* Circuit

VCC (Sensor) -> 5v (Arduino)
GND (Sensor) -> GND (Arduino)
ECHO (Sensor) -> 6 (Arduino)
TRIG (Sensor) -> 7 (Arduino)

*/

int time;

const int ECHO_PIN = 6;
const int TRIGGER_PIN = 7;

void setup()
{
	pinMode(ECHO_PIN, INPUT);
	pinMode(TRIGGER_PIN, OUTPUT);
	
	Serial.begin(9600);
}

void loop()
{
	digitalWrite(TRIGGER_PIN, LOW);
	delayMicroseconds(2);
	
	digitalWrite(TRIGGER_PIN, HIGH);
	digitalMicroseconds(10);
	digitalWrite(TRIGGER_PIN, LOW);
	
	time = pulseIn(ECHO_PIN, HIGH);
	distance = time * 0.0343 / 2; // Unit -> centimeters
	
	Serial.println(distance);
}
