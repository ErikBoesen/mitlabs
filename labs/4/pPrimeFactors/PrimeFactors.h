/************************************************************/
/*    NAME: Erik Boesen                                     */
/*    ORGN: MIT Marine Autonomy Lab                         */
/*    FILE: PrimeFactors.h                                  */
/*    DATE: 2018-06-19                                      */
/************************************************************/

#ifndef PrimeFactors_HEADER
#define PrimeFactors_HEADER

#include "MOOS/libMOOS/MOOSLib.h"

class PrimeFactors : public CMOOSApp
{
 public:
   PrimeFactors();
   ~PrimeFactors();

 protected: // Standard MOOSApp functions to overload
   bool OnNewMail(MOOSMSG_LIST &NewMail);
   bool Iterate();
   bool OnConnectToServer();
   bool OnStartUp();

 protected:
   void RegisterVariables();

 private: // Configuration variables

 private: // State variables
};

#endif
