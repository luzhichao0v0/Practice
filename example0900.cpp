#include <stdio.h>

void example0900()
{
	printf("=====example0900()=====\n");

	int a[2][3] = { 2,3,4,5,4,8 };
	int(*p)[3] = &a[1];

	//pΪָ�룬sizeof(ָ��)��32λϵͳ��Ϊ4����64λϵͳ��Ϊ8
	//*p=p[0]={5,4,8}
	//sizeof(p)=8,sizeof(*p)=12,sizeof(p[0])=12
	printf("sizeof(p)=%d,sizeof(*p)=%d,sizeof(p[0])=%d\n", (int)sizeof(p), (int)sizeof(*p), (int)sizeof(p[0]));

	p = a;
	//*p=p[0]={2,3,4}
	//sizeof(p)=8,sizeof(*p)=12,sizeof(p[0])=12
	printf("sizeof(p)=%d,sizeof(*p)=%d,sizeof(p[0])=%d\n", (int)sizeof(p), (int)sizeof(*p), (int)sizeof(p[0]));
}