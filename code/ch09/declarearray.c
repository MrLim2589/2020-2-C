// file: declarearray.c
#include <stdio.h>

#define SIZE 5

int main(void)
{
	//배열 선언
	int score[SIZE];

	//배열 원소에 값 저장
	score[0] = 78;
	score[1] = 97;
	score[2] = 85;
	//score[3]에 쓰레기값 저장
	score[4] = 91;
	//score[5]은 문법 오류는 안 나지만 실행 오류 발생

	//배열 원소 출력
	for (int i = 0; i < SIZE; i++)
		printf("%d ", score[i]);
	printf("\n");

	return 0;
}