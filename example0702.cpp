#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

/*
==>
    ��̬�ֲ������ھ�̬�洢������ռ�,���������һ���ڴ�;�������غ�,�þ�̬�ֲ�������������ʧ.
    ��̬�ֲ��������оֲ�������,ֻ�Զ����Լ��ĺ�����ʼ�տɼ�,�����Ƴ���,����������,��������.
<==
*/

char* __strtok_r(char* s, const char* delim, char** save_ptr)
{
    char* end;

    if (s == NULL)
        s = *save_ptr;

    if (*s == '\0')
    {
        *save_ptr = s;
        return NULL;
    }

    /* Scan leading delimiters.  */
    //�����ַ��� str1 �е�һ�������ַ��� str2 �г��ֵ��ַ��±ꡣ2
    unsigned int i = strspn(s, delim);
    s += i;
    if (*s == '\0')
    {
        *save_ptr = s;
        return NULL;
    }

    /* Find the end of the token.  */
    //�����ַ��� str1 ��ͷ�����м����ַ��������ַ��� str2 �е��ַ���4
    i = strcspn(s, delim);
    end = s + i;
    if (*end == '\0')
    {
        *save_ptr = end;
        return s;
    }

    /* Terminate the token and make *SAVE_PTR point past it.  */
    *end = '\0';
    *save_ptr = end + 1;
    return s;
}

char* _strtok(char* s, const char* delim)
{
    //���徲̬�ֲ���������ָ���ʣ���ַ���
    static char* olds;
    return __strtok_r(s, delim, &olds);
}

void example0702()
{
	printf("=====example0702()=====\n");

	char str[] = "- This, a sample string.";
	char* pch;
	printf("Splitting string \"%s\" into tokens:\n", str);
	pch = _strtok(str, " ,.-");
	while (pch != NULL)
	{
		printf("%s\n", pch);
        //��strtok�����ж����˾�̬�ֲ���������ָ���ʣ���ַ���,����arg1ֻ��Ҫ��һ��,������NULL
		pch = _strtok(NULL, " ,.-");
	}
}