// file: declarearray.c
#include <stdio.h>

#define SIZE 5

int main(void)
{
	//�迭 ����
	int score[SIZE];

	//�迭 ���ҿ� �� ����
	score[0] = 78;
	score[1] = 97;
	score[2] = 85;
	//score[3]�� �����Ⱚ ����
	score[4] = 91;
	//score[5]�� ���� ������ �� ������ ���� ���� �߻�

	//�迭 ���� ���
	for (int i = 0; i < SIZE; i++)
		printf("%d ", score[i]);
	printf("\n");

	return 0;
}