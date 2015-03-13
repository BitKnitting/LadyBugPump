void setup()
{
  Serial.begin(9600);
Serial.println("****************************************");
  Serial.print("Float: ");
  float fVar = 7.06;
  Serial.println(fVar);
  printItOut(fVar);
  Serial.print("Float: ");
  fVar = 7.04;
  Serial.println(fVar);
  printItOut(fVar);
  Serial.print("Float: ");
  fVar = 6.96;
  Serial.println(fVar);
  printItOut(fVar);
  Serial.print("Float: ");
  fVar = 6.95;
    Serial.println(fVar);
    printItOut(fVar);
 Serial.print("Float: ");
  fVar = 6.94;
    Serial.println(fVar);
    printItOut(fVar);
}
void loop()
{
}
void printItOut(float floatVal) {
  uint8_t major = uint8_t(floatVal);
  uint8_t minor = 0;
  float temp = floatVal-major+.051;
  Serial.println(temp);
  if (temp >=1.) {
    Serial.println("---> temp >= 1.");
    major += 1.;
    temp = 0.;
    minor = 0;
  }
  else {
    minor = (temp*10.) ;
  }
  Serial.print("Temp: ");
  Serial.println(temp);
//  //  Serial.println(temp);
//  uint8_t minor = (temp*10.) ;
  //  Serial.println(foo);
  //  uint8_t minor = uint8_t((floatVal - major)*10.);
  Serial.print("major: ");
  Serial.print(major);
  Serial.print(" | minor: ");
  Serial.println(minor);
}

