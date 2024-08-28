//-----------------------------------------------------------------------------------------------------------------------------------------------------
// -GLOBALS_H - Contine obiectul lcd si actuatorii
// 
//
//-----------------------------------------------------------------------------------------------------------------------------------------------------

#ifndef GLOBALS_H
#define GLOBALS_H

#include <LiquidCrystal.h>
extern LiquidCrystal lcd;
//OUT pe DIGITAL OUTPUT
extern const int M_Pompa_Pin;
extern const int L_Lumini_Pin;
extern const int M_Ventilator_Pin;
extern const int L_Caldura_Pin;
extern const int O_Power_OnOff;
extern const int L_System_Status;

// CONTORIZARE TIMP
extern  int Start_date;
extern  int weekNr;
extern unsigned long previousMillis;
extern const long interval;

// THRESHOLDS
extern int pragUmidiateSol;
extern int pragTemepratura;
extern int pragLumina;


#endif // GLOBALS_H
