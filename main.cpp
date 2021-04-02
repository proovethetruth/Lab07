
// Написать генератор псевдослучайных чисел по алгоритму
// f(n) = f(n - 1) + f(n - 2) + f(n - 3) + f(n - 4) mod 211;
// f(0) = f(1) = f(2) = f(3) = 1
// Подсчитать частоту каждого числа при выборке 100 000.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int algorythm(int x) {
	int arr[] = { 1, 1, 1, 1 };
	int tmp = 0, j = 0;
	while (j < x)
	{
		for (int i = 0; i != 4; i++)
			tmp += arr[i];
		arr[j % 4] = tmp % 211;
		tmp = 0;
		j++;
	}
	for (int i = 0; i != 4; i++)
		tmp += arr[i];
	return tmp % 211;
}

int main() {
	int x = NULL, *arr;

	srand(time(NULL));
	x = rand();
	printf("\n Seed: %d\n", x);
	printf("\n -----------------------------------------\n");

	arr = (int*)calloc(211, sizeof(int));

	for (int i = 0; i != 100000; i++)
	{
		arr[algorythm(x)]++;
		x = rand();
	}
	for (int j = 0; j != 211; j++)
	{
		printf("\n Amount of %d: %d", j, arr[j]);
	}		
}