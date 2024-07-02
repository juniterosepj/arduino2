// C++ code
//
int led1=11;
int led2=10;
int led3=7;
int led4=3;
void setup()
{
  pinMode(led1, OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(led4,OUTPUT);
  
}

void loop()
{
  digitalWrite(led1, HIGH);
  delay(3000); 
  digitalWrite(led1, LOW);
  delay(1000);
  digitalWrite(led4, HIGH);
  delay(18000); 
  digitalWrite(led4, LOW);
  delay(1000);
  digitalWrite(led2, HIGH);
  delay(3000); 
  digitalWrite(led3, HIGH);
  delay(1000); 
  digitalWrite(led3, LOW);
  delay(1000);
  
}