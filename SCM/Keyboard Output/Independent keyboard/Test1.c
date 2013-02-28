//�������̿���
#include <reg52.h>

#define uint unsigned int//����uint����
#define uchar unsigned char//����uchar����

uint num = 1;//led��ʾ������
uchar flag = 0;//led��ʾλ

uchar a[8] ={0x7f,0xbf,0xdf,0xef,0xf7,0xfb,0xfd,0xfe};    //P2 1-8 λ
uchar b[10] ={0x03,0x9f,0x25,0x0d,0x99,0x49,0x41,0x1f,0x01,0x09};  //P1 0-9 ��


sbit key1 = P0^0;//���Ӽ��̵�I/O��
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
		
		if(num > 9)
			num = 0;
		
		if(flag == 1)//�ر�led���
		{
		    P2 = 0xff;	
			
		}
	  else
		{
			P2 = a[0];
			P1 = b[num];
		}
				
	}
}
void keyscan(void)//ɨ�躯��
{
	if(key1 == 0)
	{
		delays();
		if(key1 == 0)
			flag = 1;
		while(!key1);
	}

	if(key2 == 0)
	{
		delays();
		if(key2 == 0)
		 flag = 0;
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
void delays(void)//�ӳٺ���
{
	int i;
	int j;
	for(i = 0;i<10;i++)
		for(j = 0; j<124;j++);
}	
