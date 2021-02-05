int LED2=2; //PIN 8 is set as LED (name)
int LED3=3;
int LED4=4;
int LED5=5;
int LED6=6;
int LED7=7;
int LED8=8;
int LED9=9;

void setup() {
  // put your setup code here, to run once:
pinMode (LED2,OUTPUT); //this selects LED as OUTPUT
pinMode (LED3,OUTPUT);
pinMode (LED4,OUTPUT);
pinMode (LED5,OUTPUT);
pinMode (LED6,OUTPUT);
pinMode (LED7,OUTPUT);
pinMode (LED8,OUTPUT);
pinMode (LED9,OUTPUT);
              // Serial.begin(9600);
}

void loop() {
  // Looping R, 
digitalWrite(LED9,LOW);
digitalWrite(LED2,HIGH); //this selects LED as HIGh what is ON
delay(100);  //1000=1sec, 
digitalWrite(LED2,LOW);
digitalWrite(LED3,HIGH);
delay(100);  //1000=1sec, 
digitalWrite(LED3,LOW);
digitalWrite(LED4,HIGH);
delay(100);  //1000=1sec, 
digitalWrite(LED4,LOW);
digitalWrite(LED5,HIGH);
delay(100);  //1000=1sec, 
digitalWrite(LED5,LOW);
digitalWrite(LED6,HIGH);
delay(100);  //1000=1sec, 
digitalWrite(LED6,LOW);
digitalWrite(LED7,HIGH);
delay(100);  //1000=1sec, 
digitalWrite(LED7,LOW);
digitalWrite(LED8,HIGH);
delay(100);  //1000=1sec, 
digitalWrite(LED8,LOW);
digitalWrite(LED9,HIGH);
delay(100);  //1000=1sec, 

} 
