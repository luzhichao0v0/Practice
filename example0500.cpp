#include <stdio.h>
#include <string.h>

/*
	�������鳤��

	�����ǵ�ַ�ͱ���(ָ�����),�����Ǳ�������
*/
int StringLength(char str[])
{
	int i = 0;
	while (str[i])
		++i;
	return i;
}

/*
	�ַ����������Ͷ��������

==>
	�����˳��ȵ�����,ϵͳ���Զ����Ͻ�β��.û�ж��峤�ȵ�����,ϵͳ�������Զ����Ͻ�β��,��һֱȥѰ�ҽ�β��.
	0xcccc=��
	���ֽڣ��ߵ�ַ�����ֽڣ��͵�ַ��----->��˴洢
	���ֽڣ��͵�ַ�����ֽڣ��ߵ�ַ��----->С�˴洢
	�������鳤�Ⱥ���:strlen<strlen>
<==
*/
void example0500()
{
	printf("=====example0500()=====\n");

	char a[20] = { 97,98,100,101,48 };
	char b[20] = { 'b','b','b','b','0' };
	char c[20] = "ccccccccccccc";
	//���ֽڣ��ߵ�ַ�����ֽڣ��͵�ַ��----->��˴洢
	//���ֽڣ��͵�ַ�����ֽڣ��ߵ�ַ��----->С�˴洢
	//��Ϊ����dû�ж����β��,����d��ӵ͵�ַ���ߵ�ַ(���ֽڵ����ֽ�)Ѱ�ҽ�β��,����������e���ҵ���β������������d�Ĵ�ӡ.
	char d[] = { 'd','d','d','d','0' };
	char e[] = { 'e','e','e','e','\0' };
	char s[] = "sssssssssssss";

	puts(a);
	puts(b);
	puts(c);
	puts(d);
	puts(e);
	puts(s);

	printf("sizeof(a)=%d, StringLength(a)=%d\n", (int)sizeof(a), (int)strlen(a));
	printf("sizeof(b)=%d, StringLength(b)=%d\n", (int)sizeof(b), (int)strlen(b));
	printf("sizeof(c)=%d, StringLength(c)=%d\n", (int)sizeof(c), StringLength(c));
	printf("sizeof(d)=%d, StringLength(d)=%d\n", (int)sizeof(d), StringLength(d));
	printf("sizeof(e)=%d, StringLength(e)=%d\n", (int)sizeof(e), StringLength(e));
	printf("sizeof(s)=%d, StringLength(s)=%d\n", (int)sizeof(s), StringLength(s));
}