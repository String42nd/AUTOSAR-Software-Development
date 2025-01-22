#include "Adc.h"

/*Function that starts ADC Conversion*/

void Adc_StartGroupConversion(Adc_GroupType Group)
{
	if(Group==1)
	{
		/*Code here to start the ADC*/
	}
}

/*Function API to read ADC group*/
Std_ReturnType Adc_ReadGroup (Adc_GroupType Group, Adc_ValueGroupType* DataBufferPtr) 
{
	unsigned int ADCValue;
	
	if(Group ==1)
	{
		ADCValue = SomeRegister;
		*DataBufferPtr=AdcValue; /*Write back ADC value*/
	}
}
/*This is an example ADC conversion function for the MCAL*/