#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
==>
	����������ʱ��������˻�Ϊָ�룬��sizeof(������)��sizeof(ָ��)��������ģ�������Ҫ��������������С��
		sizeof(ָ��)��ָ������Ĵ�С(������ռ���ڴ��ֽ�����Ϊ8,Ҳ����Ҫʹ��8���ֽڵĴ�С���洢ָ���ֵ)�����Ǽ���ָ�����͵Ĵ�С(�ֽ�)��
		_countof��sizeof������ַ�������Ľ�β������ʵ�ַ�������Ӧ��һ��
		ʹ��strlen���ã���������ַ�������Ľ�β����
	fopen���򿪲���ȡ�ļ�����fclose���رմ򿪵��ļ�����
	fread�����ļ��ж�ȡ���ݡ�fwrite�����ļ���д�����ݡ�
	fseek�����ļ�λ��ָ���ƶ���ָ��λ�ã��ڶ�������Ϊƫ����������������Ϊƫ����㡣
		SEEK_SET(0)���ļ�ͷ
		SEEK_CUR(1)����ǰλ��
		SEEK_END(2)���ļ�β
	ftell�����ļ�λ��ָ���ƶ����ļ�ͷ��
	malloc�����ڴ��п��ٿռ䡣free�������ڴ�ռ䡣
<==
*/
//���ļ���ȡ����
void readFile(const char* fileName)
{
	char fileMode[] = "r";
	if (fileName)
	{
		size_t fileSize = 0;
		FILE* pFile = fopen(fileName, fileMode);
		//���ļ�λ��ָ���ƶ���β��
		fseek(pFile, 0, SEEK_END);
		//��ȡ�ļ�λ��ָ��ĵ�ǰλ��������ļ��׵�ƫ���ֽ���
		fileSize = ftell(pFile);
		//���ļ�λ��ָ�������ƶ���ͷ��
		//fseek(pFile, 0, 0);
		rewind(pFile);

		if (pFile)
		{
			char* buffer;
			//���ٿռ�����ļ����ݣ�+1��Ϊ��׷�ӽ�β��
			buffer = (char*)malloc(fileSize * sizeof(char) + 1);
			size_t readSize = 0;
			if (buffer)
			{
				readSize = fread(buffer, (size_t)sizeof(char), fileSize, pFile);
				//��ӽ�β����û�н�β�������Ѱ�ҽ�β�������¿���̨�����������
				*(buffer + fileSize) = '\0';
				if (readSize)
					printf("�ļ����ݣ�%s\n", buffer);
				else
					printf("�ļ�����Ϊ�գ������ļ���(%s)\n", fileName);
			}
			free(buffer);
		}
		else
			perror("�ļ���ȡ���������ļ��Ƿ���ڡ�\n");
		fclose(pFile);
	}
	else
		printf("�ļ�·��Ϊ�գ���������ԡ�\n");
}

//������д���ļ� 
void writeFile(const char* fileName, char* pArray, size_t nArray, char fileMode[])
{
	if (fileName)
	{
		FILE* pFile = fopen(fileName, fileMode);

		if (pFile)
		{
			size_t writeSize = 0;
			//����������ʱ��������˻�Ϊָ�룬��sizeof(������)��sizeof(ָ��)��������ģ�������Ҫ��������������С
			//writeSize = fwrite(pArray, sizeof(char), sizeof(pArray)/sizeof(char), pFile);
			writeSize = fwrite(pArray, (size_t)sizeof(char), nArray, pFile);

			if (writeSize)
				printf("����д���ļ��ɹ���(%s)\n", fileName);
			else
				printf("����д���ļ�ʧ�ܡ�(%s)\n", fileName);
			fclose(pFile);
		}
		else
			printf("�ļ�״̬�쳣��д��������顣(%s)\n", fileName);
	}
}

void example0800()
{
	printf("=====example0800()=====\n");

	char cArray[] = "abcde������ʦ";
	char fileName[] = "C:/Users/luzhichao/Desktop/VS/File/myFile.txt";
	char fileMode[] = "a";

	readFile(fileName);

	//����������ʱ��������˻�Ϊָ�룬��sizeof(������)��sizeof(ָ��)��������ģ�������Ҫ��������������С
	size_t nArray = 0;
	//_countof������ַ�������Ľ�β������ʵ�ַ�λ��Ӧ��һ
	//nArray = _countof(cArray);
	nArray = strlen(cArray);
	writeFile(fileName, cArray, nArray, fileMode);

	readFile(fileName);
}