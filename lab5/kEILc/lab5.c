#include <REGX51.H>
sbit LED1 = P3^0;
sbit LED2 = P3^1;
sbit LED3 = P3^2;
sbit LED4 = P3^3;
unsigned char LED7SEG[10] =
{0xC0,0xF9,0xA4,0xB0,0x99,0x92,0x82,0xF8,0x80,0x90};
void Fn_Delay (unsigned int _vrui_Time)
{
while(_vrui_Time--);
}
void main (void)
{
unsigned char i,k,d;
unsigned int j;
LED1 = 0;
LED2 = 0;
LED3 = 0;
LED4 = 0;
while(1)
{/* Hien thi so i chay tu 00 den 99 */
for(i = 0; i < 10000; i++)
{
/* Voi moi so i hien thi 200 lan */
for (j = 0; j < 200; j++)
{
/* Hien thi phan chuc cua so */
P2 = LED7SEG[i/1000];
k = i%1000;
LED1 = 1;
Fn_Delay(10);
LED1 = 0;
/* Ket thuc hien thi phan chuc */
/* Hien thi phan don vi cua so */
P2 = LED7SEG[k/100];
d = k%100;
LED2 = 1;
Fn_Delay(10);
LED2 = 0;

P2 = LED7SEG[d/10];
LED3 = 1;
Fn_Delay(10);
LED3 = 0;
/*as*/
P2 = LED7SEG[d%10];
LED4 = 1;
Fn_Delay(10);
LED4 = 0;
/* Ket thuc hien thi phan don vi */
}
}
}
}