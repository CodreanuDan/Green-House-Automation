//-----------------------------------------------------------------------------------------------------------------------------------------------------
// -UPDATE_THRESHOLDS - Actualizeaza pragurile de Temperatura, Umidiate in sol si Luminozitate in functie de sapatamana 
// 
//
//-----------------------------------------------------------------------------------------------------------------------------------------------------

#ifndef UPDATE_THRESHOLDS
#define UPDATE_THRESHOLDS

//----------------#_INCLUDES_#-------------------------------------------------------------------------------------------------------------------------

#include "GLOBALS_H.h"    // Global variables


//----------------#_FUNCTIONS_#------------------------------------------------------------------------------------------------------------------------

int pragUmidiateSol;
int pragTemepratura;
int pragLumina;

void updateThresholds()
{
  if (  1 <= weekNr && weekNr < 14)
  {
    pragUmidiateSol = 50;
    pragTemepratura = 28;
    pragLumina = 90;
  }
  else if ( 14 <= weekNr && weekNr < 24)
  {
    pragUmidiateSol = 70;
    pragTemepratura = 28;
    pragLumina = 500;
  }
  else if ( 24 <= weekNr && weekNr < 34 )
  {
    pragUmidiateSol = 50;
    pragTemepratura = 28;
    pragLumina = 90;
  }
  else if ( 34 <= weekNr && weekNr < 50)
  {
    pragUmidiateSol = 70;
    pragTemepratura = 28;
    pragLumina = 500;
  }
  else if ( 50 <= weekNr && weekNr < 60)
  {
    pragUmidiateSol = 60;
    pragTemepratura = 18;
    pragLumina = 90;
  }
  else if ( 60 <= weekNr && weekNr < 66)
  {
    pragUmidiateSol = 55;
    pragTemepratura = 21;
    pragLumina = 90;
  }
  else if ( 60 <= weekNr && weekNr < 70 )
  {
    pragUmidiateSol = 60;
    pragTemepratura = 21;
    pragLumina = 90;
  }
}




//-----------------------------------------------------------------------------------------------------------------------------------------------------

#endif // UPDATE_THRESHOLDS_H

//-----------------------------------------------------------------------------------------------------------------------------------------------------