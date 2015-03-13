
#define pump_pin  8
void setup()
{
  Serial.begin(9600);
  pinMode(pump_pin,OUTPUT);
}
void loop()
{
  Serial.println("HIGH");
  digitalWrite(pump_pin,HIGH);
  delay(5000);
  Serial.println("LOW");
  digitalWrite(pump_pin,LOW);
  delay(5000);
}
