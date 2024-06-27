#define LEDVERDE 14
#define LEDAMARELO 12
#define LEDVERMELHO 13
#define LEDVERDE2 5
#define LEDAMARELO2 4
#define LEDVERMELHO2 15
#define TRIG 25
#define ECHO 26
void setup() {

Serial.begin(9600);
pinMode(TRIG, OUTPUT);
pinMode(ECHO, INPUT);
pinMode(LEDVERMELHO,OUTPUT);
pinMode(LEDAMARELO,OUTPUT);
pinMode(LEDVERDE,OUTPUT);
pinMode(LEDVERMELHO2,OUTPUT);
pinMode(LEDAMARELO2,OUTPUT);
pinMode(LEDVERDE2,OUTPUT);

}
void loop() {
  digitalWrite(LEDVERMELHO2,HIGH);
digitalWrite(LEDVERDE, HIGH);
digitalWrite(TRIG, HIGH);
delay(1);
digitalWrite(TRIG, LOW);
int distancia = pulseIn(ECHO, HIGH) * 0.0345 / 2;
if (distancia < 20){
  delay(5000);
  digitalWrite(LEDVERDE,LOW);
  digitalWrite(LEDVERMELHO2,LOW);
  digitalWrite(LEDAMARELO,HIGH);
delay(2000);
digitalWrite(LEDAMARELO, LOW);
  digitalWrite(LEDVERMELHO,HIGH);
  digitalWrite(LEDVERDE2,HIGH);
delay(15000);
digitalWrite(LEDVERDE2,LOW);
 digitalWrite(LEDVERMELHO,LOW);
  digitalWrite(LEDAMARELO2,HIGH);
delay(2000);
digitalWrite(LEDAMARELO2, LOW);
}
Serial.println(distancia);
}