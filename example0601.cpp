#include <stdio.h>

/*
==>
	����Ҳ��һ��ָ��,ָ������������Ԫ��
	ָ��Ҳ�ܵ�������ʹ��,ָ�����ʹ���±��������Ԫ��
	�������������ָ�����顸��һ��Ԫ�ء���ָ�룬���ָ�뷨����ֱ��������������,������ʵ������һ����ַ(��������++����,���ַ�ǲ����޸ĵ�)
<==
*/
void example0601()
{
	printf("=====example0601()=====\n");

	double d[5] = { 12,-4,12.32,-456.8,87 };
	double* dp = d;

	//double d[]�ĵ�ַΪ:000000F7A79BF4C8
	printf("double d[]�ĵ�ַΪ:%p\n", d);
	//double* dp�ĵ�ַΪ:000000F7A79BF4C8
	printf("double* dp�ĵ�ַΪ:%p\n", dp);

	//double d[0]�ĵ�ַΪ:000000F7A79BF4C8,double d[1]�ĵ�ַΪ:000000F7A79BF4D0,double d[2]�ĵ�ַΪ:000000F7A79BF4D8
	printf("double d[0]�ĵ�ַΪ:%p,double d[1]�ĵ�ַΪ:%p,double d[2]�ĵ�ַΪ:%p\n", &d[0], &d[1], &d[2]);
	//double* dp[1]�ĵ�ַΪ:000000F7A79BF4C8
	printf("double* dp[1]�ĵ�ַΪ:%p\n", &dp[0]);
	//double* dp+1�ĵ�ַΪ:000000F7A79BF4D8
	printf("double* dp+1�ĵ�ַΪ:%p\n", dp + 2);
	
}