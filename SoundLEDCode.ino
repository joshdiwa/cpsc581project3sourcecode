// CPSC 581 PROJECT 3 NOISE DETECTOR LED CODE
// Created by Josh Diwa, Ishan Vyas, Carl Lyss, Noah Bensler
// SOURCE CODE ADAPTED FROM: https://62e1a3e9-c5ed-4f1a-8182-14ebd7c76947.filesusr.com/ugd/22a975_8c6883be82844b05a6b4e4db55373c73.pdf

// RESISTORS = We used the one from our Arduino Kits.
// M/F Wires = We used the one from our Arduino Kits.
// LEDs are from Neil's Arudino Kit.

int digitalOutput = 2; // Digital Output Pin
int analogOutput = A0; // Analog Output Pin (Noise Sensor)
int soundLevelLow = 82;
int soundLevelMid = 85;
int soundLevelMidHigh = 87;
int soundLevelHigh = 89;
int soundLevelXtreme = 91;
int noiseLevelValue = 0; // Used to track noise level.

void setup() {
  Serial.begin(9600);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);

}

void loop() {
  noiseLevelValue = analogRead(analogOutput); // Read Analog Value.
 

  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
  digitalWrite(12, LOW);
  Serial.println(noiseLevelValue);

  if (noiseLevelValue >= soundLevelLow) {
    digitalWrite(8, HIGH);
    digitalWrite(9, LOW);
    digitalWrite(10, LOW);
    digitalWrite(11, LOW);
    digitalWrite(12, LOW);
    delay(25);
    if (noiseLevelValue >= soundLevelMid) {
      digitalWrite(8, HIGH);
      digitalWrite(9, HIGH);
      digitalWrite(10, LOW);
      digitalWrite(11, LOW);
      digitalWrite(12, LOW);
      delay(25);
      }
    if (noiseLevelValue >= soundLevelMidHigh) {
      digitalWrite(8, HIGH);
      digitalWrite(9, HIGH);
      digitalWrite(10, HIGH);
      digitalWrite(11, LOW);
      digitalWrite(12, LOW);
      delay(25);
     }

    if (noiseLevelValue >= soundLevelHigh) {
      digitalWrite(8, HIGH);
      digitalWrite(9, HIGH);
      digitalWrite(10, HIGH);
      digitalWrite(11, HIGH);
      digitalWrite(12, LOW);
      delay(25);
      }

    if (noiseLevelValue >= soundLevelXtreme) {
      digitalWrite(8, HIGH);
      digitalWrite(9, HIGH);
      digitalWrite(10, HIGH);
      digitalWrite(11, HIGH);
      digitalWrite(12, HIGH);
      delay(25);
      }
    }

    
  }
