#include <stdio.h>

/*
==>
	*:��ȡ��ֵַָ�������
	&:��ȡ��ֵַ����(ָ���������)�ĵ�ֵַ

	ָ�����Ҳ���в�ͬ���͵ĵ�,����:int*,char*
	ָ�����+n=ָ���ַ��ֵ+ָ��������ֽڴ�С*n

	ָ��Ĵ�СΪ8(�޷�������,16λ=2btye,32λ=4byte,64λ=8btye)
	ָ������Ĵ�С���ݶ���ָ�������(ָ����ָ������ݵ�����)����,��:char* 1,int* 4
<==
*/
void example0600()
{
	printf("=====example0600()=====\n");

	int i = 78;
	int* ip = &i;

	//i=78,����i��ֵ
	printf("i=%d\n", i);
	//&i=00000014D7FEF054,����i�ĵ�ֵַ
	printf("&i=%p\n", &i);
	//ip=00000014D7FEF054,����i�ĵ�ֵַ
	printf("ip=%p\n", ip);
	//&ip=00000014D7FEF078,ָ�����ip�ĵ�ֵַ
	printf("&ip=%p\n", &ip);
	//*ip=78,ָ�����ip��ֵ
	printf("*ip=%d\n", *ip);
	//&*ip=00000014D7FEF054,ָ�����ip��ֵ(����i)�ĵ�ֵַ
	printf("&*ip=%p\n", &*ip);

	//size(i)=4,sizeof(ip)=8,sizeof(*ip)=4
	printf("size(i)=%d,sizeof(ip)=%d,sizeof(*ip)=%d\n", (int)sizeof(i), (int)sizeof(ip), (int)sizeof(*ip));

	//i+1=79,ip+2=00000014D7FEF05C
	//00000014D7FEF05C=00000014D7FEF054+sizeod(int 4)*n
	printf("i+1=%d,ip+2=%p\n", i + 1, ip + 2);

	//"int *"���͵ĵ�ֵ�������ڳ�ʼ��"char *"���͵�ʵ��
	//char* cp = &i;

	//c1��ָ�����(char *),c2��char����
	char* c1, c2;
	//c3��ָ�����,c4��ָ�����
	char* c3, * c4;
	char c5 = 65;
	char c6 = 66;

	c1 = &c5;
	//���ܽ�"char *"���͵�ֵ���䵽"char"���͵�ʵ��
	//c2 = &c5;
	c2 = c5;
	c3 = &c5;
	//ʹ��δ��ʼ�����ڴ�"c4",��Ҫ��ָ���ڴ��ַ,Ȼ����ܸ�ֵ
	//*c4 = c5;
	c4 = &c5;
	//������c5��ֵ,����ָ��c5ָ���ֵ���ı�
	*c4 = c6;

	//c1=000000CAEEEFF6B4
	printf("c1=%p\n", c1);
	//&c2=000000CAEEEFF654
	printf("&c2=%p\n", &c2);
	//c3=000000CAEEEFF6B4
	printf("c3=%p\n", c3);
	//c4=000000CAEEEFF6B4
	printf("c4=%p\n", c4);
	//&c5=000000CAEEEFF6B4
	printf("&c5=%p\n", &c5);

	//*c1=66
	printf("*c1=%d\n", *c1);
	//c2=65
	printf("c2=%d\n", c2);
	//*c3=66
	printf("*c3=%d\n", *c3);
	//*c4=66
	printf("*c4=%d\n", *c4);
	//c5 = 66
	printf("c5=%d\n", c5);

	//size(c1)=8,sizeof(c2)=1,size(c3)=8,sizeof(c4)=8,size(c5)=1,sizeof(c6)=1
	printf("size(c1)=%d,sizeof(c2)=%d,size(c3)=%d,sizeof(c4)=%d,size(c5)=%d,sizeof(c6)=%d\n", (int)sizeof(c1), (int)sizeof(c2), (int)sizeof(c3), (int)sizeof(c4), (int)sizeof(c5), (int)sizeof(c6));
	//size(c1)=8,sizeof(c3)=8,size(c4)=8,sizeof(*c1)=1,size(*c3)=1,sizeof(*c4)=1
	printf("size(c1)=%d,sizeof(c3)=%d,size(c4)=%d,sizeof(*c1)=%d,size(*c3)=%d,sizeof(*c4)=%d\n", (int)sizeof(c1), (int)sizeof(c3), (int)sizeof(c4), (int)sizeof(*c1), (int)sizeof(*c3), (int)sizeof(*c4));

	//c1+3=000000E33D3AF257(c1=000000E33D3AF254)
	//000000E33D3AF257=000000E33D3AF254+sizeof(char 1)*n
	printf("c1+3=%p\n", c1 + 3);

}