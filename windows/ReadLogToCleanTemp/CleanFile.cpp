/*
Ϊ�������ͷ����ʦ��������΢��������������ͬʱҲΪ�˼����Լ�����
������֮ǰ������ɵ�
2013/7/7 by�� 
*/
#include "stdafx.h"
#define MAX 256


bool ReadFilePath(const wchar_t *DataFilePath);
void CreateTextToWideChar(FILE *stream);//����һ����ʱת��Ϊ���ַ����ı�
void CleanFile(FILE * stream);//�������
int _tmain(int argc, _TCHAR* argv[])
{
	_wsetlocale(LC_ALL, L"chs");
	ReadFilePath(L"C:\\alltemp_other.txt");

	getchar();
	return 0;
}
//��ȡunicode�ļ����������¼�������ļ�
//����1:��־�ļ�·��
bool ReadFilePath(const wchar_t *DataFilePath)
{
    wchar_t ChBuffer = L'\0'; //��Ҫ���ļ���ȡ�ĵ����ַ�
    wchar_t CleanFilePath[256] = L"\0"; //��Ҫ����������ļ�·��
    DWORD ReadNumber = 0; //�Ѿ���ȡ��·��ӵ�е��ַ�����
    DWORD dwReadSize = 100;//�Ѿ���ȡ��������

    HANDLE handle_File = CreateFile(DataFilePath,
                                    GENERIC_READ,
                                    0,
                                    NULL,
                                    OPEN_EXISTING,
                                    FILE_ATTRIBUTE_NORMAL,
                                    NULL);
        
        while(ReadFile(handle_File,&ChBuffer,2,&dwReadSize,NULL))
        {
            if(dwReadSize == 0)
            {
                wprintf(L"��⵽�ļ���β\n");
                break;
            }

            if(ChBuffer == L'\r')
                continue;
            if(ChBuffer == L'\n')
            {
                CleanFilePath[ReadNumber] = L'\0';
                wprintf(L"�����%s\n",CleanFilePath);
                DeleteFile(CleanFilePath);
                ReadNumber = 0;
            }
            else
                CleanFilePath[ReadNumber++] = ChBuffer;

        }
    // �ͷ��ļ�������Դ
    CloseHandle(handle_File) ;
}
