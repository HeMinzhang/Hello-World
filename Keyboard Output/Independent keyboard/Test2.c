//�������̿���led���ְ���ʾ���λ˫������

#include <reg52.h>//����ͷ�ļ�reg52.h

#define uchar unsigned char //����uchar����


int flag = 0;//λ
int num = 0;//����
uchar a[8] ={0x7f,0xbf,0xdf,0xef,0xf7,0xfb,0xfd,0xfe};    //P2 1-8 λ
uchar b[10] ={0x03,0x9f,0x25,0x0d,0x99,0x49,0x41,0x1f,0x01,0x09};  //P1 0-9 ��
uchar c[8] ={0x7f,0x3f,0x1f,0x0f,0x07,0x03,0x01,0x00}; //˫����
sbit key1 = P0^0;//�������
sbit key2 = P0^1;
sbit key3 = P0^2;
sbit key4 = P0^3;

void keyscan(void);//ɨ�躯��
void delays(void);//�ӳٺ���
void main()
{
	

	while(1)
	{
		keyscan();
		
		if(flag > 7) flag = 0;//flag 0-7֮�����
		if(flag < 0) flag = 7;//ͬ��
    if(num > 9) num = 0;//num 0-9֮�����
		if(num < 0) num = 9;//ͬ��
		P3 = P2 = a[flag];//���ݸ�P3,P2 I/O�����
		P1 = b[num]; //ͬ�ϴ��ݸ�P1
				
	}
}
void keyscan(void) //ӷ�׵�ɨ�躯��
{
	if(key1 == 0)
	{
		delays();
		if(key1 == 0)
			flag++;
		while(!key1);//���Ʊ��ⰴ���������
	}

	if(key2 == 0)
	{
		delays();
		if(key2 == 0)
		 flag--;
		while(!key2);
	}

	if(key3 == 0)
	{
		delays();
		if(key3 == 0)
			num++;
		while(!key3);
	}

	if(key4 == 0)
	{
		delays();
		if(key4 == 0)
			num--;
		while(!key4);
	}
}
void delays(void)//�ӳ�
{
	int i;
	int j;
	for(i = 0;i<10;i++)
		for(j = 0; j<124;j++);
}	
