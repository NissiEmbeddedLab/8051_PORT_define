#include<reg51.h>
#define BSc_EC P1
#define BE_EC P2
void MSDelay(unsigned int itime);
unsigned int x;
void main(void)
{
for(x=0;x<255;x++)
{
  BSc_EC = x;
	BE_EC = 0xFF-x;
	MSDelay(100);
}
MSDelay(1000);
}
void MSDelay(unsigned int itime)
{
unsigned int i,j;
for(i=0;i<itime;i++)
for(j=0;j<1275;j++);
}