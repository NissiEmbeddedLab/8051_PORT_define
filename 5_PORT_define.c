/* 	It is an examole to declare the PORT using #define directive
		MSDelay() function to create 10mSec delay
		Author		:	L.Boaz
		Mail id		:	laxsam89@gmail.com
		Phone no	:	+91 95972 91816	*/

#include<reg51.h>
#define BSc_EC P1										//Assign the variable BSc_EC for PORT1
#define BE_EC P2										//Assign the variable BE_EC for PORT2
void MSDelay(unsigned int itime);
unsigned int x;
void main(void)
{
for(x=0;x<255;x++)									//Pass value from 0 to 255 or 0x00 to 0xff to PORT 1 & PORT 2
{
  BSc_EC = x;												//Pass from 0x00 to 0xff
	BE_EC = 0xFF-x;										//Pass from 0xFF to 0x00
	MSDelay(100);											//Elapse time for 1 sec by 10*100msec
}
MSDelay(1000);
}
void MSDelay(unsigned int itime)
{
unsigned int i,j;
for(i=0;i<itime;i++)
for(j=0;j<1275;j++);
}