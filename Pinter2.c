#include <stdio.h>

int main()
{
	printf("%d\n", sizeof(int*));//x64平台
	printf("%d\n", sizeof(char*));
	printf("%d\n", sizeof(short*));
	printf("%d\n", sizeof(float*));

	return 0;
}