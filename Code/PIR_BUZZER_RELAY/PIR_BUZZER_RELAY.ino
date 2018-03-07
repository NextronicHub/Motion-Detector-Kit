#define RELAY 11
#define BUZZER 10
#define PIR 9

int val_pir=0;

void setup() {
  pinMode(BUZZER, OUTPUT); 
  pinMode(RELAY,OUTPUT );     
  pinMode(PIR, INPUT);
  Serial.begin(9600);
}

void loop() {
  val_pir=digitalRead(PIR);
  if( val_pir==HIGH) {
    Serial.println("Mouvement detecté");
    digitalWrite(BUZZER,HIGH);
    digitalWrite(RELAY,LOW);    //commande en inverse
    }
   else  { 
    Serial.println("Aucun mouvement ");
    digitalWrite(BUZZER,LOW);
    digitalWrite(RELAY,HIGH);
    }
delay(300);
}
