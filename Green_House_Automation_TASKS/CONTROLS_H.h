//-----------------------------------------------------------------------------------------------------------------------------------------------------
// -CONTROLS_H - Contine functiile de control pentru
// -pompa apa,caldura,ventilator,lumini
//
//-----------------------------------------------------------------------------------------------------------------------------------------------------

#ifndef CONTROLS_H
#define CONTROLS_H

//----------------#_INCLUDES_#-------------------------------------------------------------------------------------------------------------------------

#include "GLOBALS_H.h"    // Global variables
#include "UPDATE_THRESHOLDS_H.h"  // Thresholds module

//----------------#_FUNCTIONS_#------------------------------------------------------------------------------------------------------------------------


//__CONTROL_POWER_SOURCE__

void sourceControl()
{
  int pinButon = A4;
  int rawValue = analogRead(pinButon);

  if (rawValue > 500)
  {
   delay(150);
   digitalWrite(O_Power_OnOff, HIGH);
   Serial.println("<DANGER(220V)> Sursa: ON <!!!>");
  } 
  else 
  {
   delay(150);
   digitalWrite(O_Power_OnOff, LOW);
   Serial.println("<SAFE> Sursa: OFF <!!!>");
  }

}

//__CONTROL_LIGHT__

void controlLight(int lightIntensity)
{
  updateThresholds();

  int pragLuminaLocal = pragLumina; //"Lx"
  if (lightIntensity < pragLuminaLocal)
  {
    digitalWrite(L_Lumini_Pin, HIGH);
    lcd.setCursor(0, 2);
    lcd.print(" Light:ON ");
    Serial.println("Light:ON ");
  }
  else
  {
    digitalWrite(L_Lumini_Pin, LOW);
    lcd.setCursor(0, 2);
    lcd.print(" Light:OFF ");
    Serial.println("Light:OFF ");
  }
}

//__CONTROL_PUMP__
void controlPump(int soilMoisture)
{
  updateThresholds();

  int pragUmidiateSolLocal = pragUmidiateSol; //"%"
  if (soilMoisture < pragUmidiateSolLocal)
  {
    digitalWrite(M_Pompa_Pin, HIGH);
    lcd.setCursor(10, 2);
    lcd.print(" Pump:ON ");
    Serial.println("Pump:ON ");
  }
  else
  {
    digitalWrite(M_Pompa_Pin, LOW);
    lcd.setCursor(10, 2);
    lcd.print(" Pump:OFF ");
    Serial.println("Pump:OFF ");
  }
}

//__CONTROL_TEMPERATURE__(Heat Lamp & Vent)

void controlTemperature(int temperature)
{
  updateThresholds();
  int pragTemepraturaLocal = pragTemepratura; //"`C"
  if (temperature < pragTemepraturaLocal)
  {
    digitalWrite(L_Caldura_Pin, HIGH);
    lcd.setCursor(0, 3);
    lcd.print("Heat:ON ");
    Serial.println("Heat:ON ");

    digitalWrite(M_Ventilator_Pin, LOW);
    lcd.setCursor(10, 3);
    lcd.print("Vent:OFF ");
    Serial.println("Vent:OFF ");

  }
  else if (temperature > pragTemepraturaLocal)
  {
    digitalWrite(L_Caldura_Pin, LOW);
    lcd.setCursor(0, 3);
    lcd.print("Heat:OFF ");
    Serial.println("Heat:OFF ");

    digitalWrite(M_Ventilator_Pin, HIGH);
    lcd.setCursor(10, 3);
    lcd.print("Vent:ON ");
    Serial.println("Vent:ON ");

  }
  else
  {
    digitalWrite(L_Caldura_Pin, LOW);
    lcd.setCursor(0, 3);
    lcd.print("Heat:OFF ");
    Serial.println("Heat:OFF ");

    digitalWrite(M_Ventilator_Pin, LOW);
    lcd.setCursor(10, 3);
    lcd.print("Vent:OFF ");
    Serial.println("Vent:OFF ");
    
  }
}

//--------------------------------------------------------------------------------------------------------------------------------------------------------

#endif CONTROLS_H // CONTROLS_H

//--------------------------------------------------------------------------------------------------------------------------------------------------------