#include <stdio.h>
/*
	==>
		��ӡ���ͱ����Ĵ�С(�ֽ���)��sizeof(���ͱ���)
	<==
*/
void example0404()
{
	printf("=====example0404()=====\n");

	char ch = 99;
	int n = 1234567890;
	float f = 12345678.123456789f;//0.123456f
	double d = 1234567890.1234567890;
	//0.01234567890123456789;
	//1234567890123456.0;
	printf("c=%c,n=%d,f=%f,d=%0.20lf\n", ch + 5, n, f, d);
	printf("sizeof(ch)=%d, sizeof(n)=%d, sizeof(f)=%d, sizeof(d)=%d\n",
	(int)sizeof(ch), (int)sizeof(n), (int)sizeof(f), (int)sizeof(d));
	//���һ���Ǵ�ӡ�������ͱ����Ĵ�С���ֽ�����
}