//-----------------------------------------------------------------------------------------------------------------------------------------------------
// - Main Program
// - Contains all headers
// - Responsible for environment monitoring and
//   and green house control
//------------------------------------------------------------------------------------------------------------------------------------------------------

//----------------#_INCLUDES_#--------------------------------------------------------------------------------------------------------------------------


#include "GLOBALS_H.h"    // Global variables
#include "SENSORS_H.h"    // Reads data from sensors
#include "DISPLAY_H.h"    // Displays sensor data
#include "CONTROLS_H.h"   // Controls Green House
#include "TIME_H.h"

//----------------#_GLOBAL_VARS_#------------------------------------------------------------------------------------------------------------------------

LiquidCrystal lcd(13, 12, 11, 10,  9,  8);

const int M_Pompa_Pin = 7;        // iesire pompa
const int L_Lumini_Pin = 6;       // iesire lumini
const int M_Ventilator_Pin = 5;   // iesire ventilator
const int L_Caldura_Pin = 4;      // iesire caldura
const int O_Power_OnOff = 3;      // iesire sursa
const int L_System_Status = 2;    // iesire sys status

int Start_date = 0;   // start day 
int weekNr = 1;       // start week

unsigned long previousMillis = 0; // interval saptmanana* trecuta
const long interval = 14; // interval saptmanana*

//--------------------#_SETUP_#--------------------------------------------------------------------------------------------------------------------------

void setup() 
{
  Serial.println("_________________________________");
  Serial.println(" ");
  Serial.println(" ");

  lcd.begin(20, 4);

  Serial.begin(9600);
  Serial.println("SETUP_BEGIN");
  Serial.println("_________________________________");
  Serial.println("-> Baud Rate set to 9600");
  
  pinMode(L_Lumini_Pin, OUTPUT);
  Serial.println("-> Output: L_Lumini_Pin");

  pinMode(M_Pompa_Pin, OUTPUT);
  Serial.println("-> Output: M_Pompa_Pin");

  pinMode(M_Ventilator_Pin, OUTPUT);
  Serial.println("-> Output: M_Ventilator_Pin");

  pinMode(L_Caldura_Pin, OUTPUT);
  Serial.println("-> Output: L_Caldura_Pin");

  pinMode(O_Power_OnOff, OUTPUT);
  Serial.println("-> Output: O_Power_OnOff");

  pinMode(L_System_Status, OUTPUT);
  Serial.println("-> Output: L_System_Status");

  delay(1000);
  Serial.println("  ");
  Serial.println("SETUP_ENDS");
  Serial.println("_________________________________");
}

//-----------------------#_LOOP_#--------------------------------------------------------------------------------------------------------------------------
void loop() 
{
  Serial.println("LOOP_START");
  Serial.println("_________________________________");

  updateTime();
 
  displayTemperature(readTemperature());
  displayLightIntensity(readLightIntensity());
  displaySoilMoisture(readSoilMoisture());
  displayAirHumidity(readAirHumidity());
  displayWeek(weekNr);
  displayThersholds();

  digitalWrite(L_System_Status, HIGH);
  delay(500);
  digitalWrite(L_System_Status, LOW);

  sourceControl();
  controlLight( readLightIntensity());
  controlPump(readSoilMoisture());
  controlTemperature(readTemperature());

  digitalWrite(L_System_Status, HIGH);
  delay(500);
  digitalWrite(L_System_Status, LOW);

  Serial.println("  ");
  Serial.println("LOOP_END");
  Serial.println("_________________________________");

  digitalWrite(L_System_Status, HIGH);
  delay(500);
  digitalWrite(L_System_Status, LOW);
}

//-----------------------------------------------------------------------------------------------------------------------------------------------------