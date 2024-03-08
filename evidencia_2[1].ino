bool A, B, C, D, W, X, Y, Z ;
void setup() {
 pinMode(D1, INPUT);//ENTRADA LED INTERNO //
pinMode(D2, INPUT);//ENTRADA LED AZUL //
 pinMode(D3, INPUT);//ENTRADA LED ROJO //
 pinMode(D5, INPUT);//ENTRADA BUZZER //
 pinMode(D6, OUTPUT);// SALIDA //
 pinMode(D7, OUTPUT);// SALIDA//
 pinMode(D8, OUTPUT);// SALIDA//
pinMode(D4, OUTPUT);// SALIDA//
}

void loop() {
  A=digitalRead(D6);
  B=digitalRead(D7);
  C=digitalRead(D8);
  D=digitalRead(D4);

 W=C&&(A||B)||D&&(B||!A&&!B);
 digitalWrite(D6,W);

 X=!D&&(A||C)||!A&&!C&&D||A&&B&&C;
 digitalWrite(D7,X);

 Y=C&&!(B^D)||!A&&D&&(B||C)||A&&!C&&!D&&(B^D);
 digitalWrite(D8,Y);

 Z=B&&(A^C)||A&&!B&&!D||C&&D;
 digitalWrite(D4,!Z);
}
