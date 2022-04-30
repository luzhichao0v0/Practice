#include<stdio.h>

/*
==>
	ָ�����β�ʱ:p��Ч,*p��Ч
		ָ���β�(p)��������ı�ʵ��
		ָ���β�ֵ(*p)������ı�ʵ��ֵ
<==
*/

/*
	�β�ֵ����,ʵ��û�н���
*/
void swap1(int a, int b)
{
	int t = a;
	a = b;
	b = t;
}

/*
	�β�ֵ����,ʵ��û�н���
*/
void swap2(int* p1, int* p2)
{
	int* t = p1;
	p1 = p2;
	p2 = t;
}

/*
	�β�ָ��ֵ����,ʵ�ν���
*/
void swap3(int* p1, int* p2)
{
	int t = *p1;
	*p1 = *p2;
	*p2 = t;
}

void example0701()
{
	printf("=====example0701()=====\n");
	
	int x = -1, y = 0;
	//����ǰ:x=-1,*x=000000D760EFF884,y=0,*y=000000D760EFF8A4
	printf("����ǰ:x=%d,*x=%p,y=%d,*y=%p\n", x, &x, y, &y);

	swap1(x, y);
	//��һ�ν�����:x=-1,*x=000000D760EFF884,y=0,*y=000000D760EFF8A4
	printf("��һ�ν�����:x=%d,*x=%p,y=%d,*y=%p\n", x, &x, y, &y);

	swap2(&x, &y);
	//�ڶ��ν�����:x=-1,*x=000000D760EFF884,y=0,*y=000000D760EFF8A4
	printf("�ڶ��ν�����:x=%d,*x=%p,y=%d,*y=%p\n", x, &x, y, &y);

	swap3(&x, &y);
	//�����ν�����:x=0,*x=000000D760EFF884,y=-1,*y=000000D760EFF8A4
	printf("�����ν�����:x=%d,*x=%p,y=%d,*y=%p\n", x, &x, y, &y);
	
}