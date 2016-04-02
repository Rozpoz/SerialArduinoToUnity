
void setup()
{
 Serial.begin(38400);
}

void loop()
{
 float values[] = {1,2};
 Serial.flush();
 Serial.print(",");
 Serial.print(1);
 Serial.print(",");
 Serial.print(5);


 Serial.println();
 delay(30);
}
