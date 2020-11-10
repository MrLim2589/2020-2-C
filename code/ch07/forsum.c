// file: forsum.c
#include <stdio.h>

int main(void)
{
	int i, sum;

	for (i = 1, sum = 0; i <= 10; i++) //++i도 가능
		sum += i;
	printf("1에서 10까지의 합: %3d\n", sum);

	for (i = 1, sum = 0; i <= 10; ) 
		sum += i++;
	printf("1에서 10까지의 합: %3d\n", sum);

	for (i = 1, sum = 0; i <= 10; ) 
		sum += ++i;
	printf("1에서 10까지의 합: %3d\n", sum);

	for (i = 1, sum = 0; i <= 10; sum += i++); //반복 몸체가 없음 for문
	printf("1에서 10까지의 합: %3d\n", sum);

	return 0;
}