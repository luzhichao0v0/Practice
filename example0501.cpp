#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
==>
	_countof()����ȡԪ�ظ�����������ַ���""�Ľ�β��
		û�����������С������£����Ϊ�����ʵ��Ԫ�ظ���(�������ڵ�����Ԫ�ظ���)��
		�����������С������£����Ϊ�����������С�����������ʵ��Ԫ�ظ�����
	sizeof()���������λ��(�ֽ� byte)��������ַ���""�Ľ�β��
		û�����������С������£����Ϊ�����ʵ��Ԫ�ظ���*�ֽ�(�������ڵ�����Ԫ�ظ���*�ֽ�)��
		�����������С������£����Ϊ�����������С�����������ʵ��Ԫ�ظ���*�ֽڡ�
	stelen()����ȡԪ�ظ���
		char���������У�0��'\0'�ǽ�β������'0'���ǽ�β������˫����""����������Ĭ�Ͻ�β�н�β����
		û�����������С������£����ΪѰ�ҵ���β��Ϊֹ(���ȿ��ܻᳬ������)��
		�����������С������£��н�β��ʱ�����Ϊ��β��ǰ��Ԫ�ظ�����û�н�β��ʱ�����Ϊ�����Ԫ�ظ�����
<==
_countof():�ܷż���Ԫ��
sizeof():�����λ�ռ��Ƕ���
strlen():����ռ�ʹ���˶���
_msize():malloc �� new �����Ŀռ��С
*/
void example0501()
{
	printf("=====example0501()=====\n");

	int iStr1[] = { 1, 2, 3, 4, 5 };
	int iStr2[] = { 0, 1, 2, 3, 4, 5, 0 };
	int iStr3[] = { '0', '1', '2', '3', '4', '5', '6', '7', '0' };
	int iStr4[] = { '0', '1', '2', '3', '4', '5', '6', '7', '\0' };
	
	int iStr5[8] = { 1, 2, 3, 4, 5 };
	int iStr6[12] = { 0, 1, 2, 3, 4, 5, 0 };
	int iStr7[16] = { '0', '1', '2', '3', '4', '5', '6', '7', '0' };
	int iStr8[20] = { '0', '1', '2', '3', '4', '5', '6', '7', '\0' };

	//_countof()����ȡԪ�ظ���(�ֽ� byte)
	//û�����������С������£����Ϊ�����ʵ��Ԫ�ظ���(�������ڵ�����Ԫ�ظ���)��
	//�����������С������£����Ϊ�����������С�����������ʵ��Ԫ�ظ�����
	int strLen;
	strLen = _countof(iStr1);
	//_countof(iStr1)=5
	printf("_countof(iStr1)=%d\n", strLen);
	strLen = _countof(iStr2);
	//_countof(iStr2)=7
	printf("_countof(iStr2)=%d\n", strLen);
	strLen = _countof(iStr3);
	//_countof(iStr3)=9
	printf("_countof(iStr3)=%d\n", strLen);
	strLen = _countof(iStr4);
	//_countof(iStr4)=9
	printf("_countof(iStr4)=%d\n", strLen);
	strLen = _countof(iStr5);
	//_countof(iStr5)=8
	printf("_countof(iStr5)=%d\n", strLen);
	strLen = _countof(iStr6);
	//_countof(iStr6)=12
	printf("_countof(iStr6)=%d\n", strLen);
	strLen = _countof(iStr7);
	//_countof(iStr7)=16
	printf("_countof(iStr7)=%d\n", strLen);
	strLen = _countof(iStr8);
	//_countof(iStr8)=20
	printf("_countof(iStr8)=%d\n", strLen);

	//sizeof()���������λ��(�ֽ� byte)
	//û�����������С������£����Ϊ�����ʵ��Ԫ�ظ���*�ֽ�(�������ڵ�����Ԫ�ظ���*�ֽ�)��
	//�����������С������£����Ϊ�����������С�����������ʵ��Ԫ�ظ���*�ֽڡ�
	strLen = sizeof(iStr1);
	//sizeof(iStr1)=20 20=5*4
	printf("sizeof(iStr1)=%d\n", strLen);
	strLen = sizeof(iStr2);
	//sizeof(iStr2)=28 28=7*4
	printf("sizeof(iStr2)=%d\n", strLen);
	strLen = sizeof(iStr3);
	//sizeof(iStr3)=36 36=9*4
	printf("sizeof(iStr3)=%d\n", strLen);
	strLen = sizeof(iStr4);
	//sizeof(iStr4)=36 36=9*4
	printf("sizeof(iStr4)=%d\n", strLen);
	strLen = sizeof(iStr5);
	//sizeof(iStr5)=32 32=8*4
	printf("sizeof(iStr5)=%d\n", strLen);
	strLen = sizeof(iStr6);
	//sizeof(iStr6)=48 48=12*4
	printf("sizeof(iStr6)=%d\n", strLen);
	strLen = sizeof(iStr7);
	//sizeof(iStr7)=64 64=16*4
	printf("sizeof(iStr7)=%d\n", strLen);
	strLen = sizeof(iStr8);
	//sizeof(iStr8)=80 80=20*4
	printf("sizeof(iStr8)=%d\n", strLen);

	char cStr1[] = { 1, 2, 3, 4, 5 };
	char cStr2[] = { 0, 1, 2, 3, 4, 5, 0 };
	char cStr3[] = { '0', '1', '2', '3', '4', '5', '6', '7', '0' };
	char cStr4[] = { '0', '1', '2', '3', '4', '5', '6', '7', '\0' };
	char cStr5[] = "012345";
	
	char cStr6[8] = { 1, 2, 3, 4, 5 };
	char cStr7[12] = { 0, 1, 2, 3, 4, 5, 0 };
	char cStr8[16] = { '0', '1', '2', '3', '4', '5', '6', '7', '0' };
	char cStr9[20] = { '0', '1', '2', '3', '4', '5', '6', '7', '\0' };
	char cStr10[25] = "012345";

	//stelen()
	//char���������У�0��'\0'�ǽ�β������'0'���ǽ�β������˫����""����������Ĭ�Ͻ�β�н�β����
	//û�����������С������£����ΪѰ�ҵ���β��Ϊֹ(���ȿ��ܻᳬ������)��
	//�����������С������£��н�β��ʱ�����Ϊ��β��ǰ��Ԫ�ظ�����û�н�β��ʱ�����Ϊ�����Ԫ�ظ�����
	strLen = strlen(cStr1);
	//strlen(cStr1)=32
	printf("strlen(cStr1)=%d\n", strLen);
	strLen = strlen(cStr2);
	//strlen(cStr2)=0
	printf("strlen(cStr2)=%d\n", strLen);
	strLen = strlen(cStr3);
	//strlen(cStr3)=56
	printf("strlen(cStr3)=%d\n", strLen);
	strLen = strlen(cStr4);
	//strlen(cStr4)=8
	printf("strlen(cStr4)=%d\n", strLen);
	strLen = strlen(cStr5);
	//strlen(cStr5)=6
	printf("strlen(cStr5)=%d\n", strLen);
	strLen = strlen(cStr6);
	//strlen(cStr6)=5
	printf("strlen(cStr6)=%d\n", strLen);
	strLen = strlen(cStr7);
	//strlen(cStr7)=0
	printf("strlen(cStr7)=%d\n", strLen);
	strLen = strlen(cStr8);
	//strlen(cStr8)=9
	printf("strlen(cStr8)=%d\n", strLen);
	strLen = strlen(cStr9);
	//strlen(cStr9)=8
	printf("strlen(cStr9)=%d\n", strLen);
	strLen = strlen(cStr10);
	//strlen(cStr10)=6
	printf("strlen(cStr10)=%d\n", strLen);

	//_countof(cStr5)=7
	printf("_countof(cStr5)=%d\n", (int)_countof(cStr5));
	//_countof(cStr10)=25
	printf("_countof(cStr10)=%d\n", (int)_countof(cStr10));
	//sizeof(cStr5)=7
	printf("sizeof(cStr5)=%d\n", (int)sizeof(cStr5));
	//sizeof(cStr10)=25
	printf("sizeof(cStr10)=%d\n", (int)sizeof(cStr10));
}