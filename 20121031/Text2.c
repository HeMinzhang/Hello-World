//��Դ�ļ�Text1.c���Ż�                                                                               
#include<reg52.h>


 void delays (void);

    void main()
  {
	while(1)
	{
		P1 = 0xfe;
		delays(); //ȥ������Ҫ�Ĵ��ݸ�������ֵ
		P1 = 0xff;
		delays();
	}
 }  


   void delays(void)	//�ӳٺ���
 {
	int i = 0;

	 while (i < 124000) i++;  //ֱ�ӽ���124000��ѭ��
 }