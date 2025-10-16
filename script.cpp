void setup()
{
  pinMode(13, OUTPUT); // configurando o pino 13 como saída
}

void loop()
{
  digitalWrite(13, HIGH);
  delay(1000); // espera por 1 segundo
  digitalWrite(13, LOW);
  delay(1000); // espera por 1 segundo
}
