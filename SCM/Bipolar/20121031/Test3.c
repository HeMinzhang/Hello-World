//������ʦ���ĳ����Ż�֮��İ汾                                              2012/10/31   by ��

#include<reg52.h>

 void delays(int a);

    void main()
  {
	while(1)
	{
		P1 = 0xfe;
		delays(1000);
		P1 = 0xff;
		delays(1000);
	}
 }  


   void delays(int a)	//�ӳٺ���
 {
	int i;

	for(i = 0;i < a*124;i++) ;
 }