//-----------------------------------------------------------------------------------------------------------------------------------------------------
// -DISPLAY_H - Contine functiile de afisare ale senzorilor in portul Serial si pe LCD display
// 
//
//-----------------------------------------------------------------------------------------------------------------------------------------------------

#ifndef DISPLAY_H
#define DISPLAY_H

//----------------#_INCLUDES_#-------------------------------------------------------------------------------------------------------------------------

#include "GLOBALS_H.h"    // Global variables

//----------------#_FUNCTIONS_#------------------------------------------------------------------------------------------------------------------------

//__TEMPERATURE__

void displayTemperature(int temperature)
{
  lcd.setCursor(0, 0);
  lcd.print(" T=");
  Serial.print(" T=");
  lcd.print(temperature);
  Serial.print(temperature);
  lcd.print("'C     ");
  Serial.println("'C     ");
}

//__LIGHT_INTENSITY__

void displayLightIntensity(int lightIntensity)
{
  lcd.setCursor(7, 0);
  lcd.print(" L=");
  Serial.print(" L=");
  lcd.print(lightIntensity);
  Serial.print(lightIntensity);
  lcd.print("Lx       ");
  Serial.println("Lx       ");
}

//__SOIL_MOISTURE__

void displaySoilMoisture(int soilMoisture)
{
  lcd.setCursor(0, 1);
  lcd.print(" S=");
  Serial.print(" S=");
  lcd.print(soilMoisture);
  Serial.print(soilMoisture);
  lcd.print("%      ");
  Serial.println("%      ");
}

//__AIR_HUMIDITY__

void displayAirHumidity(int airHumidity)
{
  lcd.setCursor(11, 1);
  lcd.print(" H=");
  Serial.print(" H=");
  lcd.print(airHumidity);
  Serial.print(airHumidity);
  lcd.print("%   ");
  Serial.println("%   ");
}

//__WEEK_NR__

void displayWeek(int weekNr)
{
  lcd.setCursor(15, 0);
  lcd.print(" S:");
  Serial.print(" Saptamana Nr:");
  lcd.print(weekNr);
  Serial.println(weekNr);
}

void displayThersholds()
{
  Serial.print("w: ");
  Serial.print(weekNr);
  Serial.print(" |pU: ");
  Serial.print(pragUmidiateSol);
  Serial.print(" |pT: ");
  Serial.print(pragTemepratura);
  Serial.print(" |pL: ");
  Serial.println( pragLumina);
}



//--------------------------------------------------------------------------------------------------------------------------------------------------------

#endif // DISPLAY_H

//--------------------------------------------------------------------------------------------------------------------------------------------------------