/* constptr.c */
#include <stdio.h>

int main(void)
{
	int i = 10, j = 20;
	const int* p = &i; //*p 수정 불가
	//*p = 20;  오류
	p = &j;
	printf("%d\n", *p);

	double d = 7.8, e = 2.7;
	double* const pd = &d;
	//pd = &e; 다른 주소를 저장 불가
	*pd = 4.4;
	printf("%f\n", *pd);

	return 0;
}