
void setup()
{
    Serial.begin(9600);
}
void loop()
{
    // lcd.clear();
    float volts = analogRead(A3) * 5.0 / 1024.0;
    float amps = volts / 10000.0; // across 10,000 Ohms
    float microamps = amps * 1000000;
    float lux = microamps * 2.0;
    Serial.print("Light :");
    Serial.print(lux);
    Serial.println("Lx");
}