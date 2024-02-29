int pinLED = 13, pinBTN = 9;
void setup()
{
  pinMode(pinLED, OUTPUT);  //Definindo o pino 13 como saída para o LED
  pinMode(pinBTN, INPUT_PULLUP);
  Serial.begin(9600);
}

void loop()
{
  int estadoBTN = digitalRead(pinBTN);
  delay(100);
  Serial.println(estadoBTN);
  if(estadoBTN == 0){
  	digitalWrite(pinLED, HIGH); //Ligar o LED
  }
  else{
 	digitalWrite(pinLED, LOW);
  }
  //digitalWrite(pinLED, HIGH); // Ligar o LED
}