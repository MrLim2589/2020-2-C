// file: nullpointer.c
#include <stdio.h>

int main(void)
{
	int* ptr1, * ptr2, data = 10;
	ptr1 = NULL;

	printf("%p\n", ptr1);
	//printf("%p\n", ptr2); 초기값이 없어서 컴파일 오류 발생
	printf("%d\n", data);

	return 0;
}