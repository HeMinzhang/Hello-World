#include <reg52.h> //ͷ�ļ�
void lan(void);    
void  main ()
{ 
   while (1)    //����ѭ��
   {
     P1=0x7f;   //0111 1111  ���Ƶ���
	 lan();     //�����ӳٺ���
	 P1=0xbf;   //1011 1111
	 lan();
	 P1=0xdf;   //1101 1111
	 lan();
	 P1=0xef;   //1110 1111
	 lan();
	 P1=0xf7;   //1111 0111
	 lan();
	 P1=0xfb;   //1111 1011
	 lan();
	 P1=0xfd;   //1111 1101
	 lan();
	 P1=0xfe;   //1111 1110
	 lan();
   }
}

 void  lan(void)
 {
   int a = 0;
 	while (a <  10000) a++;
 }