//P1 I/O�� ����ѭ�����Ƶ�Ƭ������ 2012/10/30                                       by ��
//�޸�2012/11/5     �����ӳٺ������㣬��������ٶȹ����������ٶ�3�ε���          by�� 


#include <reg52.h> //ͷ�ļ�
void sleep(int a);    
void  main ()
{ 
	int a,b;
	 
	while (1)
  {
		b = 0;
		while((a = b++*5000) < 20000)    //����ѭ��
   {
    P1=0x7f;   //0111 1111  ���Ƶ���
	  sleep(a);     //�����ӳٺ���
	  P1=0xbf;   //1011 1111
	  sleep(a);
	  P1=0xdf;   //1101 1111
	  sleep(a);
	  P1=0xef;   //1110 1111
	  sleep(a);
	  P1=0xf7;   //1111 0111
	  sleep(a);
	  P1=0xfb;   //1111 1011
	  sleep(a);
	  P1=0xfd;   //1111 1101
	  sleep(a);
	  P1=0xfe;   //1111 1110
	  sleep(a);
   }
 }
}

 void  sleep(int a)
 {
   int i = 0;
 	//while (i++ <  10000) ; �Ż�ǰ
    while (i < a) i++; //�Ż���
 }