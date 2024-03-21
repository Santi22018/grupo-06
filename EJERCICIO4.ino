const int pinRojo = D3;
const int pinAmarillo = D1;
const int pinVerde = D2;
const int pinParo = D7;
const int pinMantenimiento = D6;
int A,B;
bool mantenimientoActivo= false;
bool amarilloEncendido = false;
bool emergenciaActiva=false;



void setup() {
pinMode(pinRojo,OUTPUT);
pinMode(pinAmarillo,OUTPUT);
pinMode(pinVerde,OUTPUT);
pinMode(pinParo, INPUT);
pinMode(pinMantenimiento, INPUT);

} 

void loop() {
 A=digitalRead(pinParo);
 B=digitalRead(pinMantenimiento);
  
  if (A == LOW) {
  while(true){
  digitalWrite(pinRojo, LOW);
  digitalWrite(pinAmarillo, LOW);
  digitalWrite(pinVerde, LOW);
  delay(500);

}

  }
  else {
  if (B == LOW){
  while(true) {
   digitalWrite(pinRojo, LOW);
   digitalWrite(pinVerde, LOW);
   digitalWrite(pinAmarillo, HIGH);
   delay(500);
   digitalWrite(pinAmarillo, LOW);
   delay(500);

  }}
  
else{
  digitalWrite(pinRojo, HIGH);
  digitalWrite(pinAmarillo, LOW);
  digitalWrite(pinVerde, LOW);
  delay(5000);

  digitalWrite(pinRojo, HIGH);
  digitalWrite(pinVerde, LOW);
  digitalWrite(pinAmarillo, HIGH);
  delay(1000);

  digitalWrite(pinRojo, LOW);
  digitalWrite(pinAmarillo, LOW);
  digitalWrite(pinVerde, HIGH);
  delay(3000);

  digitalWrite(pinRojo, LOW);
  digitalWrite(pinAmarillo, HIGH);
  digitalWrite(pinVerde, LOW);
  delay(1000);
}
  
}
}
