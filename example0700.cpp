#include <stdio.h>
#include <stdlib.h>

void InputArray(int* p, int nLen)
{//����Դ����д��
	int i = 0;
	printf("������%d��������", nLen);
	while (i < nLen)
		scanf_s("%d", &p[i++]);//ʹ���������±귨,�൱��pΪ����,&p[i]������ȡַ
}

void InputPoniter(int* p, int nLen)
{//����Դ����д��
	int i = 0;
	printf("������%d��������", nLen);
	while (i++ < nLen)
		scanf_s("%d", p++);//ʹ����ָ�뷨,pΪ��ַ
}

int CalcalArray(int* p, int nLen)
{//����Դ�����ȡ
	int nSum = 0;
	while (nLen--)
		nSum += p[nLen];//�±귨
	return nSum;
}

int CalcalPoniter(int* p, int nLen)
{//����Դ�����ȡ
	int nSum = 0;
	while (nLen--)
		nSum += *p++;//ָ�뷨
	return nSum;
}

void example0700() 
{
	printf("=====example0700()=====\n");

	int a[5], n;
	//InputArray(a, _countof(a));
	InputPoniter(a, _countof(a));
	n = CalcalArray(a, _countof(a));
	printf("������������ܺ�Ϊ��%d\n", n);
}