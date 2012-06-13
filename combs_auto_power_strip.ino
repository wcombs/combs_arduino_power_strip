// Will Combs
// 6-12-12
// http://www.williamcombs.com

// This is some very simple code that lets you turn a pin on and off via serial.
// Used in tandem with a relay circuit it lets you programmatically control power to anything.

#define PIN_RELAY 3

void setup() {
	pinMode(PIN_RELAY, OUTPUT);
	Serial.begin(9600);
}

void loop() {
	int x;
	static int relay = 0;

	while (Serial.available() > 0) {
		x = Serial.read();
		switch (x) {
			case '1': {
				relay ^= 1;
			}
		}
		if (relay)
			digitalWrite(PIN_RELAY, HIGH);
		else
			digitalWrite(PIN_RELAY, LOW);
	}
}
