//P1 I/O�� ����ѭ�����Ƶ�Ƭ������ 2012/10/30                                       by ��
//2012/11/05      ʹ�õݹ�����ѭ��     by��

#include <reg52.h> //ͷ�ļ�
void sleep(void);    
void led(int * a,int b);
void  main ()
{ 
   int a[8] = {0x7f,0xbf,0xdf,0xef,0xf7,0xfb,0xfd,0xfe};
   led(a,0);
}

 void  sleep(void)
 {
   int i = 0;
 	//while (i++ <  10000) ; �Ż�ǰ
    while (i < 20000) i++; //�Ż���
 }
 
 void led(int * a,int b)
 { 
	 P1 = a[b++];
	 sleep();
	 if (b < 8) led(a,b);
	 P1 = a[--b];
	 sleep();
}