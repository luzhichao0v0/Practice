#include <stdio.h>

#include "example.h"

void callWork() {
	void dayWork();
	dayWork();
}

// ���������ƣ����callExample��main���棬��ôcallExample�������Ҳ���������
void callExample()
{
	example();
}

int main() {

	// puts��printf������puts���Զ����У�ֻ������ַ�û�и�ʽ���ơ�
	puts("Hello C!");

	//callWork();
	callExample();

	return 0;
}