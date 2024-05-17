//Primera parte de la practica numero 6.
/*
   Fundacion Kinal
   Centro educativo tecnico laboral Kinal
   Quinto perito
   Quinto electronica
   Codigo Tecnico: EB5AM / EB5AV 
   Curso: Taller de electronica digital y reparacion de computadoras I
   Proyecto: Interfaces de visualización e Interacción
   Dev: Damasco Oxcal Vasquez
   Fecha: 17 de mayo
*/
 
#include<LiquidCrystal.h>
LiquidCrystal lcd(12,11,5,4,3,2);

void setup(){
lcd.begin(16,2); //definimos 16 columanas y 2 filas.
}

void loop(){
lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Damasco");
  lcd.setCursor(0,1);
  lcd.print("2023442");
  delay(2000);
}
