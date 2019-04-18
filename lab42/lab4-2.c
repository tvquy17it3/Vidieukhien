#include <REGX51.H>
unsigned char a,b,c,d;
unsigned int i,j,k;
void delay(unsigned char time){
	while(time--) 
	{
		unsigned char j=121;
		while(j--);
	}
}
void main()
{
	while(1)
	{	
		k=9;P1=0x00;
		for(i=0;i<8;i++)
		{
			k--;a=P1;c=0x01;
			for(j=0;j<k;j++)
			{
				b=a;
				a=a|c;
				P1=a;
				delay(1000);
				a=b;
				c=c<<1;
			}
		}
	}
}