#include <stdio.h>
#include <string.h>

/*
==>
	����ָ���޸Ľṹ���ڵĵ�������
		ָ�뷨�޸�����,.�����ȼ���*��,������Ҫ��*����(),������*�����ȼ�.
			((*p).nNumb = 1003;)
		ָ����ŷ��޸�����
			p->fSala = 8887.77f;
	�޸Ľṹ���ڵ���������ʱ,ʹ��strcpy_s����
		strcpy_s(w1.sName, w2.sName);
<==
*/

typedef struct _SWork
{
	int nNumb;			//����
	char sName[20];		//����
	float fSala;			//����
}SWork;

void example0704()
{
	printf("=====example0704()=====\n");

	_SWork w1 = { 1001, "����", 9898.89 };
	SWork w2 = { 1002, "����", 9999.77 };
	SWork* p;
	
	p = &w1;
	//pָ��Ķ����ڵ�����Ϊ:1001,����,9898.889648 .�����ȼ���*��,������Ҫ��*����(),������*�����ȼ�.
	printf("pָ��Ķ����ڵ�����Ϊ:%d,%s,%f\n", (*p).nNumb, (*p).sName, (*p).fSala);

	//ָ�뷨�޸�����
	(*p).nNumb = 1003;
	//w1���ڵ�����Ϊ��1003,����,9898.889648 
	printf("w1���ڵ�����Ϊ��%d,%s,%2f\n", w1.nNumb, w1.sName, w1.fSala);

	//ָ����ŷ��޸�����
	p->fSala = 8887.77f;
	//pָ��Ķ����ڵ�����Ϊ:1003,����,8887.769531
	printf("pָ��Ķ����ڵ�����Ϊ:%d,%s,%f\n", p->nNumb, p->sName, p->fSala);

	//strcpy�������޸�����
	strcpy_s(w1.sName, w2.sName);
	//w1���ڵ�����Ϊ��1003,����,8887.769531
	printf("w1���ڵ�����Ϊ��%d,%s,%2f\n", w1.nNumb, w1.sName, w1.fSala);
}