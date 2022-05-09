#include <stdio.h>
#include <stdlib.h>

/*
==>
	�ṹ��ָ�����β�ʱ:p�޸���Ч,*p(p[i])�޸���Ч
<==
*/

typedef struct _SWork
{
	int nNumb;			//����
	char sName[20];		//����
	float fSala;			//����
}SWork;

//�ṹ��������
void intSWork(SWork w)
{
	SWork w2 = { 1001, "����", 700.78 };
	w = w2;

	//intSWork ==> 1001,����,700.780029
	printf("intSWork ==> %d,%s,%f\n", w2.nNumb, w2.sName, w2.fSala);
}
//�ṹ��������
void outSWork(SWork w)
{
	//outSWork ==> 0,,0.000000
	printf("outSWork ==> %d,%s,%f\n", w.nNumb, w.sName, w.fSala);
}

//�ṹ��ָ��������
void intSWorkPointer1(SWork* wp)
{
	SWork w2 = { 1002, "����", 990.98 };
	*wp = w2;

	//intSWorkPointer1 ==> 1002,����,990.979980 �޸���Ч
	printf("intSWorkPointer1 ==> %d,%s,%f\n", (*wp).nNumb, (*wp).sName, (*wp).fSala);
}
void intSWorkPointer2(SWork* wp)
{
	SWork w2 = { 1003, "����", 860.48 };
	wp = &w2;

	//intSWorkPointer2 ==> 1003,����,860.479980 �޸���Ч
	printf("intSWorkPointer2 ==> %d,%s,%f\n", wp->nNumb, wp->sName, wp->fSala);
}
void outSWorkPointer(SWork* wp)
{
	//outSWorkPointer ==> 1002,����,990.979980
	printf("outSWorkPointer ==> %d,%s,%f\n", (*wp).nNumb, (*wp).sName, (*wp).fSala);
	//outSWorkPointer ==> 1002,����,990.979980
	printf("outSWorkPointer ==> %d,%s,%f\n", wp->nNumb, wp->sName, wp->fSala);
}

//�ṹ������
void intSWorkArray1(SWork* p, int nCount)
{
	int i = 0;
	SWork w;
	while (i++ < nCount)
	{
		w = { 1004 + i, "����", 310.54 };
		*p = w;

		//intSWorkArray1 ==> 1004,����,310.540009 �޸���Ч
		printf("intSWorkArray1 ==> %d,%s,%f\n", p[0].nNumb, (*p).sName, p->fSala); //��Ϊp++�Ѿ���λ��,�������ﲻ��p[i]

		p++;
	}
}
void intSWorkArray2(SWork* p, int nCount)
{
	int i = 0;
	SWork w;
	while (i++ < nCount)
	{
		w = { 1005 + i, "����", 750.20 };
		p = p + i - 1; //��λ,����p++��++p����
		p = &w;

		//intSWorkArray2 ==> 1005,����,750.200012 �޸���Ч
		printf("intSWorkArray2 ==> %d,%s,%f\n", p[0].nNumb, (*p).sName, p->fSala);
	}
}
void intSWorkArray3(SWork* p, int nCount)
{
	int i = -1;
	SWork w;
	while (++i < nCount)
	{
		w = { 1006 + i, "Ǯ��", 910.26 };
		p[i] = w;

		//intSWorkArray3 ==> 1006,Ǯ��,910.260010 �޸���Ч
		printf("intSWorkArray3 ==> %d,%s,%f\n", p[i].nNumb, p[i].sName, p[i].fSala);
	}
}
void outSWorkArray(SWork* p, int nCount)
{
	while (nCount--)
	{
		//outSWorkArray ==> 1004,����,310.540009 �±귨��ӡ
		//printf("outSWorkArray ==> %d,%s,%f\n", p[nCount].nNumb, p[nCount].sName, p[nCount].fSala);

		//outSWorkArray ==> 1006,Ǯ��,910.260010 ָ�뷨��ӡ
		//printf("outSWorkArray ==> %d,%s,%f\n", p[0].nNumb, (*p).sName, p->fSala);
		//p++;

		//outSWorkArray ==> 1006,Ǯ��,910.260010 ָ�뷢��ӡ (4-nCount)������p++ؼ++p
		printf("outSWorkArray ==> %d,%s,%f\n", p[4 - nCount].nNumb, (*(p + 4 - nCount)).sName, (p + 4 - nCount)->fSala);
	}
}

void example0705()
{
	printf("=====example0705()=====\n");

	SWork w1 = { 0 };
	//main ==> 0,,0.000000
	printf("main ==> %d,%s,%f\n", w1.nNumb, w1.sName, w1.fSala);
	
	intSWork(w1);
	outSWork(w1);

	intSWorkPointer1(&w1);
	intSWorkPointer2(&w1);
	outSWorkPointer(&w1);

	SWork wa[5];

	//intSWorkArray1 ==> 1005,����,310.540009
	intSWorkArray1(wa, _countof(wa));
	//intSWorkArray2 ==> 1006,����,750.200012
	intSWorkArray2(wa, _countof(wa));
	//outSWorkArray ==> 1009,����,310.540009
	outSWorkArray(wa, _countof(wa));

	//intSWorkArray3 ==> 1006,Ǯ��,910.260010
	intSWorkArray3(wa, _countof(wa));
	//outSWorkArray ==> 1010,Ǯ��,910.260010
	outSWorkArray(wa, _countof(wa));

}