/* constptr.c */
#include <stdio.h>

int main(void)
{
	int i = 10, j = 20;
	const int* p = &i; //*p ���� �Ұ�
	//*p = 20;  ����
	p = &j;
	printf("%d\n", *p);

	double d = 7.8, e = 2.7;
	double* const pd = &d;
	//pd = &e; �ٸ� �ּҸ� ���� �Ұ�
	*pd = 4.4;
	printf("%f\n", *pd);

	return 0;
}