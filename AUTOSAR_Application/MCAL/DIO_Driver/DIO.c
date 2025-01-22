/*DIO için Micro Controller Abstraction Layer (MCAL)*/
/*Function API to Read a Channel (Dio_ReadChannel)*/
/*AUTOSAR Simple Waypoint System Digital Input/Output Driver dosyasının Dio_ReadChannel başlığında ilgili syntax bulunabilir*/

#include "Dio.h"

Dio_LevelType Dio_ReadChannel (Dio_ChannelType ChannelId){
	
	/*Assuming channel 10 is mapped to port p2.0*/
	unsigned int ReadVal;
	if(ChannelId == 10)
	{
		ReadVal = P2IN & BIT0;
		
		if(ReadVal == 0x00)
		{
			/*If pin is low*/
			return (STD_LOW);
		}
		else
		{ 
			/*If pin is high*/
			return (STD_HIGH);
		}
	}
		/*Same for the other channels*/
}
/*EN-Since this is a demo code, it does not contain error handling and null ptr checking.*/
/*TR-Bu bir deneme kodu olduğu için hata ayıklama ve null ptr kontrolü içermemektedir.*/

/*Function API to Write a port (Dio_WriteChannel)*/
void Dio_WriteChannel (Dio_ChannelType ChannelId, Dio_LevelType Level)
{
	if (ChannelId == 10)
	{
		if (Level == STD_LOW)
		{
			P2OUT &= ~BIT0; /*This code sets pin LOW*/
		}
		else
		{
			P2OUT |= BIT0; /*This code sets pin HIGH*/
		}
	} /*Same for the other pins*/
}