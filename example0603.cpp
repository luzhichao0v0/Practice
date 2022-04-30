#include <stdio.h>
#include <string.h>

/*
==>
	strcpy�ܰ�strSrc�����ݸ��Ƶ�strDest��Ϊʲô��Ҫchar * ���͵ķ���ֵ��
		��Ϊ��ʵ����ʽ���ʽ������ int length = strlen( strcpy( strDest, ��hello world��) );
<==
*/


/*
	�Զ���ָ�뷨�ַ�����������
*/
char* customPointerStrCpy(char* destination, const char* source)
{
	char* tmp = destination;
	while (*tmp++ = *source++) {}
	return destination;
}

/*
	�Զ���ָ�뷢�ַ������Ӻ���
*/
char* customPointerStrCat(char* dst, const char* src)
{
	char* tmp = dst;
	while (*tmp)
	{
		tmp++;
	}
	while (*tmp++ = *src++) {}
	return dst;
}

/*
	�Զ���ָ�뷢�ַ����ȽϺ���
*/
void customPointerStrCmp(const char* dst, const char* src)
{
	const char* tmp = dst;
	while (*tmp && (*tmp++ == *src++)) {}
	if (*tmp - *src)
	{
		printf("�Ƚ��ַ��������!\n");
	}
	else
	{
		printf("�Ƚ��ַ������!\n");
	}
}

void example0603()
{
	printf("=====example0603()=====\n");

	char s1[] = "hello C!";
	char s2[40] = "Hello Java!";

	printf("�ַ�������ǰ:s1=%s,s2=%s\n", s1, s2);

	customPointerStrCpy(s2, s1);
	printf("�ַ���������:s1=%s,s2=%s\n", s1, s2);

	customPointerStrCat(s2, s1);
	printf("�ַ������Ӻ�:s1=%s,s2=%s\n", s1, s2);

	customPointerStrCmp(s2, s1);
	customPointerStrCmp(s1, "hello C!");
	customPointerStrCmp("hello C!", "hello C!");

	char s3[40] = "Hello Java0";
	customPointerStrCat(s3, s1);
	printf("�ַ������Ӻ�:s1=%s,s2=%s\n", s1, s3);

}