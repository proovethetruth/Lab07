
// �������� ��������� ��������������� ����� �� ���������
// f(n) = f(n - 1) + f(n - 2) + f(n - 3) + f(n - 4) mod 211;
// f(0) = f(1) = f(2) = f(3) = 1
// ���������� ������� ������� ����� ��� ������� 100 000.
	
// ���� x, ������������� ���������� (0, 1]
// 0.1 - ��� ���������

#include <stdio.h>
#include <malloc.h>
#include "Lab07.h"

int main() {
	int* arr = (int*)calloc(211, sizeof(int));
	for (int i = 0; i != 100000; i++)
	{
		arr[gen_rnd()]++;
	}
	for (int j = 0; j != 211; j++)
	{
		printf("\n Amount of %d: %d", j, arr[j]);
	}
	printf("\n");
	free(arr);
}