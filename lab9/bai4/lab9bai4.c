#include <REGX51.H>
// Dinh nghia cho chan so 0 cua port P1
#define LED_PORT P2
void delay_50ms(void);
void main(void)
{
unsigned char i;
LED_PORT = 0x00;
while(1)
{
for(i = 0; i<5; i++)
{
	LED_PORT =~ LED_PORT;
	delay_50ms();
}
}

}
void delay_50ms(void)
{
TMOD = 0x10; // Buoc 1: Nap gia tri cho thanh ghi TMOD
TH1 = 0x3C; // Buoc 2: Gia tri can nap cho 2 thanh ghi la 0xFC17
TL1 = 0xAF; // Do vay TH chua 2 byte cao, TL chua 2 byte
TR1 = 1; // Buoc 3: Khoi dong Timer0
while(TF1 == 0){ // Buoc 4: Kiem tra co TF0 chua len 1 thi khong
;
}
TR1 = 0; // Buoc 5: Dung bo dinh thoi
TF1 = 0; // Buoc 6: Xoa co TF
// Buoc 7: Nap lai gia tri trong bai nay khong can

}