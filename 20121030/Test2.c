//P1 I/O�� ����ѭ�����Ƶ�Ƭ������  �ڶ���ʹ�������ʵ�� 2012/11/1                                       by ��

#include <reg52.h> //ͷ�ļ�
void sleep(void);    
void  main ()
{ 
   int a;
   int led[8] = {0x7f,0xbf,0xdf,0xef,0xf7,0xfb,0xfd,0xfe};
   while (1)    //����ѭ��
   {
     for (a = 0;a < 8;a++)
	 {
	    P1 = led[a];
		sleep();
	 }
   }
}

 void  sleep(void)
 {
   int i = 0;
 	while (i++ <  10000) ;
 }