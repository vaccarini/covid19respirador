int Trig=12;
int Echo=13;

int Trig_2=7;
int Echo_2=8;

float sound_velocity=29.2;
int delay_for_writer=50;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(Trig,OUTPUT);
  pinMode(Echo,INPUT);
  pinMode(Trig_2,OUTPUT);
  pinMode(Echo_2,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  float  duracion;
  float  duracion_2;
  float  distancia;
  float  distancia_2;

  digitalWrite(Trig,LOW);
  delayMicroseconds(4);
  digitalWrite(Trig,HIGH);
  delayMicroseconds(10);
  digitalWrite(Trig,LOW);
  
  duracion=pulseIn(Echo_2,HIGH);
  distancia= duracion/sound_velocity;

  Serial.print("From TRIGGER 1 to ECHO 2");
  Serial.print(distancia);
  delay(delay_for_writer);
  Serial.print('\n');

  digitalWrite(Trig_2,LOW);
  delayMicroseconds(4);
  digitalWrite(Trig_2,HIGH);
  delayMicroseconds(10);
  digitalWrite(Trig_2,LOW);
  
  duracion_2=pulseIn(Echo,HIGH);
  distancia_2= duracion_2/sound_velocity;

   Serial.print("From TRIGGER 2 to ECHO 1");
   Serial.print(distancia_2);
   delay(delay_for_writer);
   Serial.print('\n');

}
