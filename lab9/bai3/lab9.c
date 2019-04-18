#include <REGX51.H>
// Dinh nghia cho chan so 0 cua port P1
sbit LED = P1^5;
void delay_50ms(void);
void main(void)
{
while(1)
{
LED = 0;
delay_50ms();
LED = 1;
delay_50ms();
}

}
void delay_50ms(void)
{
TMOD = 0x01; // Buoc 1: Nap gia tri cho thanh ghi TMOD
TH0 = 0x3C; // Buoc 2: Gia tri can nap cho 2 thanh ghi la 0xFC17
TL0 = 0xAF; // Do vay TH chua 2 byte cao, TL chua 2 byte
TR0 = 1; // Buoc 3: Khoi dong Timer0
while(TF0 == 0){ // Buoc 4: Kiem tra co TF0 chua len 1 thi khong
;
}
TR0 = 0; // Buoc 5: Dung bo dinh thoi
TF0 = 0; // Buoc 6: Xoa co TF
// Buoc 7: Nap lai gia tri trong bai nay khong can

}