#include <stdio.h>
#include <stdlib.h>

void work0901()
{
	printf("����������day09Work.cpp ==> work0901()����������\n");

	//int a[10] = { [5] = 1,2,3,4,5 };

	int ds[10] = { 1,2,3,4,5,6,7,8,0,9 };
	int* p;
	p = ds;

	//�����ж���������ʹ��p(�޷�����)��*p(int���͵�0��ʾ��β,��0����)
	while (p - ds < _countof(ds))
		printf("%d ", *p++);
}

void day09Work()
{
	void work0901();
	work0901();
}