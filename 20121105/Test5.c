//2012/11/05���λ���8                    by��    
#include <reg52.h>
void sleep(void);
void main()
{
	int a[10] ={0x03,0x9f,0x25,0x0d,0x99,0x49,0x41,0x1f,0x01,0x09};
  int i;
  while(1)
	{
		P2 = 0xfe;
		for(i = 0;i<10;i++)
		{
			P1=a[i];
		  sleep();
        }  
    }
}
void sleep(void)
{
  int i = 0;
	while(i < 32000) i++; 
}