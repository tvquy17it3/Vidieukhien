#include <REGX51.H>
/* DINH NGHIA CAC CHAN */
sbit BUTTON = P3^7;
sbit LED = P2^7;
/* Khai bao bien Button_Old chua du lieu ngay truoc do cua nut nhan */
bit Button_Old;
void Delay (unsigned int vrui_Time)
{
while(vrui_Time--);
}
/* Chuong trinh chinh */
void main (void)
{
while(1)
{
/* Kiem tra nut nhan duoc xuong muc 0 hay chua*/
if(BUTTON == 0)
{
/* Tre mot khoang thoi gian nho */
Delay(100);
/* Kiem tra lai chac chan nut nhan co duoc nhan hay khong

*/

if((BUTTON == 0) && (Button_Old == 1))
{
/* Xac nhan nut nhan duoc nhan va thuc hien lenh dao

gia tri dau ra */

LED = !LED;
}
}
/* Cap nhat gia tri ngay truoc do cua nut nhan */
Button_Old = BUTTON;
Delay(100);
}
}