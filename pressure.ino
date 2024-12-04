int LED1=4;
int LED2=5;
int LED3=6;
int LED4=7;
int BUZZER=11;
//int bluetooth;
int x;
int y;
int z;
int a;
int q;
int w;
int e;
int r;


void setup() {

 Serial.begin(9600);
 pinMode(BUZZER,OUTPUT);
 pinMode(LED1,OUTPUT);
 pinMode(LED2,OUTPUT);
 pinMode(LED3,OUTPUT);
 pinMode(LED4,OUTPUT);
 Serial.println("CLEARDATA");//clear excel sheet
 Serial.println("LABEL,current time,sen1,sen2,sen3,sen4");//label for ms-excel
}

void loop() {
  x=analogRead(A0);
   y=analogRead(A1);
   z=analogRead(A2);
   a=analogRead(A3);


  q=1023-x;
Serial.println(""); 
Serial.println(q);
delay(500);


  w=1023-y;
Serial.println(""); 
Serial.println(w);
delay(500);


  e=1023-z;
 Serial.println(""); 
Serial.println(e);
delay(500);


  r=1023-a;
 Serial.println(""); 
Serial.println(r);
delay(500);

if (r>=700)
  {
    digitalWrite(BUZZER,HIGH);
    digitalWrite(LED1,HIGH);
  }
delay(300);
  if (r<700)
  {
    digitalWrite(BUZZER,LOW);
    digitalWrite(LED1,LOW);
  }
delay(100);
if (e>=600)
  {
    digitalWrite(BUZZER,HIGH);
    digitalWrite(LED2,HIGH);
  }
delay(300);
  if (e<600)
  {
    digitalWrite(BUZZER,LOW);
    digitalWrite(LED2,LOW);
  }
delay(100);
if (w>=500)
  {
    digitalWrite(BUZZER,HIGH);
    digitalWrite(LED3,HIGH);
  }
delay(300);
  if (w<500)
  {
    digitalWrite(BUZZER,LOW);
    digitalWrite(LED3,LOW);
  }
delay(100);
if (q>=600)
  {
    digitalWrite(BUZZER,HIGH);
    digitalWrite(LED4,HIGH);
  }
delay(300);
  if (q<600)
  {
    digitalWrite(BUZZER,LOW);
    digitalWrite(LED4,LOW);
  }
delay(100);

Serial.print("DATA,TIME,");
//Serial.print(",");
Serial.print(q); Serial.print(",");
Serial.print(w);Serial.print(",");Serial.print(e);Serial.print(",");Serial.println(r);
  delay(100);

}
