#include <stdio.h>
#include <math.h>

void work0801()
{
	printf("����������day08Work.cpp ==> work0801()����������\n");

	/*
	3����ӡ7��13�е���������
	*
	* * 
	* * *
	* * * * 
	* * * * * 
	* * * * * * 
	* * * * * * * 
	* * * * * * 
	* * * * * 
	* * * * 
	* * * 
	* *
	* 
	*/

	int i = 0;
	//�д�ӡ
	for (i; i < 13; i++)
	{
		if (i < 7)
		{
			//��7�д�ӡ(0~7)
			int j = 0;
			for (j; j <= i; j++)
			{
				printf("* ");
			}
			puts("");
		} 
		else 
		{
			//��6�д�ӡ(7~12)
			int j = 13 - i;
			for (j; j > 0; j--)
			{
				printf("* ");
			}
			puts("");
		}
		
	}
}

void work0802()
{
	printf("����������day08Work.cpp ==> work0802()����������\n");

	/*
	4����ӡ13��7�е���������
	0 1 2 3 4 5 6 7 8 9 A B C D
				  *
				* * * 
			  * * * * *
			* * * * * * * 
		  * * * * * * * * * 
		* * * * * * * * * * * 
	  * * * * * * * * * * * * * 
	*/

	int i = 0;
	//�д�ӡ
	for (i; i < 7; i++)
	{
		int j = 0;
		//�д�ӡ
		for (j; j < 14; j++)
		{
			if (7 - i > j)
			{
				//��ո��ӡ
				printf("  ");
			}
			else if (14 - j < 7 - i)
			{
				//�ҿո��ӡ
				printf("  ");
			}
			else 
			{
				//�м�*��ӡ
				printf("* ");
			}
		}
		puts("");
	}
}

void work0803()
{
	printf("����������day08Work.cpp ==> work0803()����������\n");

	/*
	5����ӡ13��13�����������Ρ�
	 01 2 3 4 5 6 7 8 9 A B C D
	0			  *
	1			* * * 
	2		  * * * * *
	3		* * * * * * * 
	4	  * * * * * * * * * 
	5	* * * * * * * * * * * 
	6 * * * * * * * * * * * * * 
	7	* * * * * * * * * * *
	8	  * * * * * * * * *
	9		* * * * * * * 
	A		  * * * * * 
	B			* * *
	C			  *
	*/

	int i = 0;
	//��7�д�ӡ
	for (i; i < 7; i++)
	{
		int j = 0;
		//�д�ӡ
		for (j; j < 14; j++)
		{
			if (7 - i > j)
			{
				//��ո��ӡ
				printf("  ");
			}
			else if (14 - j < 7 - i)
			{
				//�ҿո��ӡ
				printf("  ");
			}
			else
			{
				//�м�*��ӡ
				printf("* ");
			}
		}
		puts("");
	}
	//��6�д�ӡ
	for (i; i < 13; i++)
	{
		int j = 0;
		//�д�ӡ
		for (j; j < 14; j++)
		{
			if (i - 5 > j)
			{
				//��ո��ӡ
				printf("  ");
			}
			else if (14 - j < i - 5)
			{
				//�ҿո��ӡ
				printf("  ");
			}
			else
			{
				//�м�*��ӡ
				printf("* ");
			}
		}
		puts("");
	}
}

void work0804()
{
	puts("");
	printf("����������day08Work.cpp ==> work0804()����������\n");

	int n = 1;
	while (((int)pow(2, n) % 7 == 0))
	{
		if (n == 100)
			printf("n = 10000");
		n++;
	}
	printf("pow(2,n)=%d\n",(int)pow(2,n));
	printf("2^%d \% 7 == 0\n", n);
}

void work0805()
{
	puts("");
	printf("����������day08Work.cpp ==> work0805()����������\n");

	char c = 1;
	short s = 1;
	int i = -658;
	long l = 1;
	float f = -78.375;
	double d = 1;

	printf("char c = %d\n", c);
	printf("short s = %d\n", s);
	printf("int i = %d\n", i);
	printf("long l = %d\n", l);
	printf("float f = %5.20f\n", f);
	printf("double d = %5.20f\n", d);
}

void day08Work()
{

	work0801();

	puts("");
	work0802();

	puts("");
	work0803();

	//work0804();

	work0805();
}