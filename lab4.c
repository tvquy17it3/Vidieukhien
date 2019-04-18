#include<REGX51.H>

void Fn_Delay(unsigned int _vrui_Time)
{
	while(_vrui_Time--);
}

void main(void)
{
	unsigned char i;
	while(1)
	{
		for(i = 0;i < 2;i++)
		{
			P1 = 0x01<<i;
			Fn_Delay(20000);
			
		}
	}
}