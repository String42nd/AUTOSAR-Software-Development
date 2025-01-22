/* Include RTE Application header file */
#include "Rte_TempHBridgeSWC.h" /* Example header file, standart for the Autosar */
/* RTE Application Header purpose is to include RTE generated 
APIs and serves as a bridge between ARXML and the C file */

void ReadTemperature_Function()
{
    uint16 ADCResult;
    float PinVoltage, Temperature;

    /* Trigger ADC Conversioon and read results */
    Adc_StartGroupConversion(1);
    Adc_ReadGroup(1, &ADCResult);


    /* Convert ADC raw value to Voltage */
    /* 10bit ADC with voltage reference-2.5V */
    PinVoltage = (2.5/1024)*ADCResult;

    /* Convert Voltage to temperature */
    /* Resp. sensor actuator SWC on Application layer */
    /* Sensor -> for 35degree output voltage is 0.35V */
    Temperature = PinVoltage * 100; /* value 100 is just an assumption */

    /* Write temperature results to RTE */
    Rte_Write_PP_Temperature_Temperature(Temperature);

}

/* Codes for the Runnable - StartMotor (Server) */
void StartMotor_Function(uint8 Fanspeed)
{
    if(Fanspeed<50)
    {
        /* Trigger cooling fan with half speed */
        /* H-Bridge settings logic (1,0) */
        Dio_WriteChannel (10, STD_HIGH);
        Dio_WriteChannel (11, STD_LOW);
        /* (channel id, Voltage lvl) */
    }
    else /* Run the fan at max speed */
    {
        /* H-Bridge settings logic (1,1) */
        Dio_WriteChannel (10, STD_HIGH);
        Dio_WriteChannel (11, STD_HIGH);
    }
}

/* Codes for the Runnable - Stop Motor */
void StopMotor_Function() 
{
    /* H-Bridge settings logic (0,0) */
    Dio_WriteChannel(10, STD_LOW);
     Dio_WriteChannel(10, STD_LOW);
}