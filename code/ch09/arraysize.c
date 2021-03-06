// file: arraysize.c
#include <stdio.h>

int main(void)
{
	int data[] = { 3,4,5,7,9 };

	printf("%zd %zd\n", sizeof(data), sizeof(data[0]));
	printf("일차원 배열: 배열 크기 == %zd\n", sizeof(data), sizeof(data[0]));

	//4x3 행렬
	double x[][3] = { {1,2,3}, {7,8,9}, {4,5,6}, {10,11,12} };

	printf("%zd %zd %zd %zd\n", sizeof(x), sizeof(x[0]), sizeof(x[1]), sizeof(x[0][0]));
	int rowsize = sizeof(x) / sizeof(x[0]);
	int colsize = sizeof(x[0]) / sizeof(x[0][0]);
	printf("이차원 배열: 행수 == %d  열수 == %d\n", rowsize, colsize);
	printf("이차원 배열: 전체 원소 수 == %zd\n", sizeof(x) / sizeof(x[0][0]));

	return 0;
}