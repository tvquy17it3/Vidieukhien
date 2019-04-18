#include <REGX51.H>  
 // Dinh nghia cho chan so 0 cua port P1 
 sbit LED = P1^0;   
 // Chuong trinh chinh 
 void main(void) {     
	 EA  = 1;             
	 // Cho phep tat ca cac ngat hoat dong     
	 EX0 = 1;         
	 // Cho phep ngat ngoai 0     
	 IT0 = 1;             
	 
	 // Thiet lap ngat ngoai 0 cho suon am      
	  while(1){;} 
  }   
  // Trinh phuc vu ngat 
  void ten_tuy_chon(void) interrupt 0 
  // Khai bao trinh phuc vu ngat cho ngat ngoai 0 
  {                
  	LED = ~LED;         
  // Thay doi trang thai cua LED 
  }