void setup()
{

  Serial.begin(9600); //????????? ???? ??? ????? ? ??
  Serial.println("Open and ready...");

}

void loop()
{

  float Value = analogRead(1);
  float Velocity = map(Value, 435, 250, 0, 33);
  //float Velocity = map(Value, 1, 350, 0, 33);
  Serial.print("Value : ");
  Serial.print(Value);
  Serial.print(" | Velocity : ");
  Serial.println(Velocity);

}
