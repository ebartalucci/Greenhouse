int relay = 13;
int sensorPin = A0;
boolean flag = false; // flag per l'azione

void setup() {
  Serial.begin(9600);
  pinMode(relay, OUTPUT);  
}

void loop() 
{
int sensorValue = analogRead(sensorPin);
Serial.print("Valore: ");
Serial.println(sensorValue);

if (sensorValue > 900) // terreno secco
{
//if (flag==false)
//{
//  digitalWrite(relay, HIGH);
//  delay (5000); // apre l'elettrovalvola per 5000 ms
//  digitalWrite(relay, LOW);
//  flag=true;
//}  
}
else if (sensorValue >= 500 && sensorValue < 800) // terreno molto asciutto
 { 
if (flag==false)
{
  digitalWrite(relay, HIGH);
  delay (3000); // apre l'elettrovalvola per 3000 ms
  digitalWrite(relay, LOW);
  flag=true;
}
 }
else if (sensorValue >= 400  && sensorValue < 500) // terreno asciutto
 { 
//if (flag==false)
//{
//  digitalWrite(relay, HIGH);
//  delay (1500); // apre l'elettrovalvola per 1500 ms
//  digitalWrite(relay, LOW);
//  flag=true;
//}  
 }  
else if (sensorValue >= 200 && sensorValue < 400) // terreno umido
 {
//if (flag==false)
//{
//  digitalWrite(relay, HIGH);
//  delay (500); // apre l'elettrovalvola per 500 ms 
//  digitalWrite(relay, LOW);
//  flag=true;
//}
 }    
delay(1000);       
}

