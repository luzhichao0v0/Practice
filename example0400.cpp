#include <stdio.h>

/*
	==>
		printf��ӡ���ݵ�ַʱ��ʹ�õ���%p��&
	<==
*/
int example0400()
{
	printf("=====example0400()=====\n");

	int i = '\t';
	printf("abc\t123\n");
	printf("C:\\windows\\system32\\spaint.exe\n");
	// i="9"
	printf("i=\"%d\"\n", i);

	int a1 = '\n';
	float _f1 = 677.124568;

	// a1=10,a1�ĵ�ַ��:0xd49bf4e4��Ϊʲô�Ŵ�ӡ��8λ��
	printf("a1=%d,a1�ĵ�ַ��:0x%x\n", a1, (int) & a1);
	// _f1=677.124573,_f1�ĵ�ַ��:0xd49bf504��Ϊʲô�Ŵ�ӡ��8λ��
	printf("_f1=%f,_f1�ĵ�ַ��:0x%x\n", _f1, (int) & _f1);

	// a1=10,a1�ĵ�ַ��:0x00000062D49BF4E4
	printf("a1=%d,a1�ĵ�ַ��:0x%p\n", a1, &a1);
	// _f1 = 677.124573, _f1�ĵ�ַ��:0x00000062D49BF504
	printf("_f1=%f,_f1�ĵ�ַ��:0x%p\n", _f1, &_f1);

	return 0;
}
