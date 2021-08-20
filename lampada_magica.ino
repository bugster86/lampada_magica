#include <CapacitiveSensor.h>
const byte pinledverde=10;
const byte pinledrosso=11;
const byte pinledblu=12;
const long soglia=500;

const long duratatocco=3000;

bool toccovalido=false;
long inizio,fine;
bool lettoinizio=false;
bool lettafine=true;

int numerotocchi=0;

CapacitiveSensor sensore=CapacitiveSensor(4,2);

void setup() {
  Serial.begin(9600);
  for (int i=pinledverde;i<=pinledblu;i++) 
  {pinMode(i,OUTPUT); digitalWrite(i,LOW);}

}

void loop() {

 long valoreletto=sensore.capacitiveSensor(30);  //leggo il valore dal sensore capacitivo
 Serial.println(valoreletto); // stampo su seriale il valore letto per debug

  if (valoreletto > soglia && !lettoinizio)
  {
    inizio=millis();
    lettoinizio=true;
    //Serial.println(inizio);
  }

  if (valoreletto < soglia)
  {
   fine=millis();
   if (!lettoinizio || (fine-inizio)< duratatocco )inizio=millis();  
  }
  
  //if ((fine-inizio) != 0 && (fine-inizio)>0)Serial.println((fine-inizio));
  if ((fine-inizio) >= duratatocco)
  { toccovalido=true;
    numerotocchi++;
    //Serial.println(numerotocchi);
  }
 
  if (toccovalido)
  { 
    for(int j=0;j<(5*numerotocchi);j++)
     { for (int i=pinledverde;i<=pinledblu;i++) digitalWrite(i,HIGH);
      delay(20);
      for (int i=pinledverde;i<=pinledblu;i++) digitalWrite(i,LOW);
      delay (20);}
   inizio=millis();
   fine=millis();
   lettoinizio=false;
   toccovalido=false;
  }
 
  delay(10);
}
