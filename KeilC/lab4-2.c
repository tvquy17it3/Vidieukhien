#include <REGX51.H>
/* Trien khai ham tao do tre */
void Fn_Delay (unsigned int _vrui_Time)
{
while(_vrui_Time--);
}
/* Chuong trinh chinh */
void main (void)
{
/* Khai bao bien i */
unsigned char i;
/* Vong lap vo han */
while(1)
{
for (i = 0; i < 8; i++)
{
P1 = 0x01<<i;
Fn_Delay(5000);
}
}
}