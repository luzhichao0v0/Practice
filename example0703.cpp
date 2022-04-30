#include <stdio.h>
#include <string.h>

/*
==>
	�ṹ��Ķ���,����ʱ��û�������ڴ�ռ�(�����ڶ���ʱ�ͻ������ڴ�ռ�),�ṹ���ڹ�������ʱ�Ż�����ڴ�ռ�����
	typedef�ؼ���Ϊ�ṹ����������:
		��һ��:�������Ͷ���ͬʱ����
		�ڶ���:�ȶ���ṹ��,������Ϊ�ṹ������
	�ṹ�����ֵ�����ַ�ʽ:ʹ�ø�ֵ����(=)������memcpy����ؼ�����Ա���������ݸ���
		�ַ������鲻��ֱ��ʹ�ø�ֵ���Ž������ݸ�ֵ,��Ҫʹ��strcpy�������и�ֵ
<==
*/

//�ṹ��Ķ���,����ʱ��û�������ڴ�ռ�(�����ڶ���ʱ�ͻ������ڴ�ռ�),�ṹ���ڹ�������ʱ�Ż�����ڴ�ռ�����
struct SWork1
{
	int iNumber; //����
	char sName[20]; //����
	float fSala; //����
};

//typedef�ؼ���Ϊ�ṹ����������
//��һ��:�������Ͷ���ͬʱ����
typedef struct SWork2
{
	int iNumber;
	char sName[20];
	float fSala;

}SWork3;

//�ڶ���:�ȶ���ṹ��,������Ϊ�ṹ������
struct SWork4
{
	int iNumber;
	char sName[20];
	float fSals;
};
typedef SWork4 SWork5;

void example0703()
{
	printf("=====example0703()=====\n");

	SWork1 w1 = {};
	SWork2 w2 = { 8001, "����", 9000 };

	//����:0,����:,����:0.000000
	printf("SWork1 ==> ����:%d,����:%s,����:%f\n", w1.iNumber, w1.sName, w1.fSala);
	//����:8001,����:����,����:9000.000000
	printf("SWork2 ==> ����:%d,����:%s,����:%f\n", w2.iNumber, w2.sName, w2.fSala);
	
	//�ṹ�����ֵ�����ַ�ʽ:ʹ�ø�ֵ���š�����memcpy�����������Ա���������ݸ���

	//ʹ�ø�ֵ����
	SWork3 w3 = { 9889.8 };

	//SWork3 ==> ����:9889,����:,����:0.000000
	printf("SWork3 ==> ����:%d,����:%s,����:%f\n", w3.iNumber, w3.sName, w3.fSala);

	//w3(SWork3)��w2(SWork2)��������,����w2���Ը�w3ֱ�Ӹ�ֵ
	w3 = w2;
	//w1 = w2; �ṹ�嶨�岻ͬ,����ֱ�Ӹ�ֵ
	//(SWork2)w1 = w2; �ṹ�嶨�岻ͬ,����ǿ��ת��

	//SWork3 ==> ����:8001,����:����,����:9000.000000
	printf("SWork3 ==> ����:%d,����:%s,����:%f\n", w3.iNumber, w3.sName, w3.fSala);

	//�����Ա���������ݸ�ֵ
	w3.iNumber = w2.iNumber;
	//w3.sName = w2.sName; �ַ������鲻��ֱ��ʹ�ø�ֵ���Ž������ݸ�ֵ,��Ҫʹ��strcpy�������и�ֵ
	strcpy_s(w3.sName, w2.sName);
	w3.fSala = 7000.89;
	//SWork3 ==> ����:8001,����:����,����:7000.890137
	printf("SWork3 ==> ����:%d,����:%s,����:%f\n", w3.iNumber, w3.sName, w3.fSala);

	//����memcpy�������и�ֵ
	memcpy(&w3, &w2, sizeof(w2));
	//SWork3 ==> ����:8001,����:����,����:9000.000000
	printf("SWork3 ==> ����:%d,����:%s,����:%f\n", w3.iNumber, w3.sName, w3.fSala);
}