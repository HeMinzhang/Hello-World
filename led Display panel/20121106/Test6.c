//led����ʾ P2ѡ��λ P1���ƶ�����ʾ0-99                 2012/11/06 by��
#include <reg52.h>
#define uchar unsigned char
#define uint unsigned int
#define MAX 99
void sleep(void);
void main()
{
  int k;
	uint p;
  uchar P_2[8] ={0x7f,0xbf,0xdf,0xef,0xf7,0xfb,0xfd,0xfe};    //P2 1-8���
  uchar P_1[10] ={0x03,0x9f,0x25,0x0d,0x99,0x49,0x41,0x1f,0x01,0x09};  //P1 0-9����	
  while(1)
  {
	  for(p = 0;p < MAX+1;p++)  
	 {
		 for(k = 0;k <3000;k++)
		{ 
		 	if(p > 999){P2 = P_2[4],P1 = P_1[p/1000%10];sleep();}//��4λ��ʾ
		
			if(p > 99){P2 = P_2[5],P1 = P_1[p/100%10];sleep();} //��3λ��ʾ
			
			if(p > 9){P2 = P_2[6],P1 = P_1[p/10%10];sleep();} //��2λ��ʾ
			
			P2 = P_2[7],P1 = P_1[p%10];sleep();
		}
	 }
  }
}
void sleep(void) //�ӳٱ����У�������ʾ��������
{
  uchar i;
	for(i = 70;i > 0;i--);
}