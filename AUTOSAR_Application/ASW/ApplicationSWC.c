#include "Rte_TemControlSWC.h"

void ApplTemperatureControl()
{
    float Temperature;
    /*Read data from ECU Abstraction through RTE */
    Rte_Read_RP_Temperature_Temperature (Temperature);

    /*Control Logic*/
    if(Temperature > 56 && Temperature < 75)
    {
        /*Start Cooling Fan at Low Speed*/
        Rte_Call_RP_StartMotor_StartMotor(25);
    }
    else if (Temperature > 75)
    {
        /*Start Cooling Fan at High Speed*/
        Rte_Call_RP_StartMotor_StartMotor(100);
    }
    else
    {
        /*Stop Cooling Fan*/
        Rte_Call_RP_StopMotor_StopMotor();
    }
}