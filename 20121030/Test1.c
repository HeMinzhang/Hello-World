//P1 I/O�� ����ѭ�����Ƶ�Ƭ������ 2012/10/30                                       by ��

#include <reg52.h> //ͷ�ļ�
void sleep(void);    
void  main ()
{ 
   while (1)    //����ѭ��
   {
     P1=0x7f;   //0111 1111  ���Ƶ���
	 sleep();     //�����ӳٺ���
	 P1=0xbf;   //1011 1111
	 sleep();
	 P1=0xdf;   //1101 1111
	 sleep();
	 P1=0xef;   //1110 1111
	 sleep();
	 P1=0xf7;   //1111 0111
	 sleep();
	 P1=0xfb;   //1111 1011
	 sleep();
	 P1=0xfd;   //1111 1101
	 sleep();
	 P1=0xfe;   //1111 1110
	 sleep();
   }
}

 void  sleep(void)
 {
   int i = 0;
 	//while (i++ <  10000) ; �Ż�ǰ
    while (i < 10000) i++; //�Ż���
 }