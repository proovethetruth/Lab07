
// Написать генератор псевдослучайных чисел по алгоритму
// f(n) = f(n - 1) + f(n - 2) + f(n - 3) + f(n - 4) mod 211;
// f(0) = f(1) = f(2) = f(3) = 1
// Подсчитать частоту каждого числа при выборке 100000.


//f(9) = f(8) + f(7) + f(6) + f(4) = 
//f(8) = f(7) + f(6) + f(5) + f(4) = 49
//f(7) = f(6) + f(5) + f(4) + f(3) = 25
//f(6) = f(5) + f(4) + f(3) + f(2) = 13
//f(5) = f(4) + f(3) + f(2) + f(1) = 7
//f(4) = f(3) + f(2) + f(1) + f(0) = 4

#include <stdio.h>
#include <time.h>

void srand(int *x) {
	*x = time(NULL);
}

int rand(int n) {
	int arr[] = { 1, 1, 1, 1 };
	int tmp = 0, j = 0;
	while (j < n)
	{
		for(int i = 0; i != 4; i++)
			tmp += arr[i];
		arr[j%4] = tmp % 211;
		printf(" f(%d) = %d\n", j, tmp);
		tmp = 0;
		j++;
	}
	for (int i = 0; i != 4; i++)
		tmp += arr[i];
	return tmp % 211;
	/*arr[4] = arr[0] + arr[1] + arr[2] + arr[3]
	arr[0] = arr[4]
	arr[4] = arr[0] + arr[1] + arr[2] + arr[3]*/
}

int main() {
	int last_rnd = 0;
	srand(&last_rnd);
	int x = rand(last_rnd%211);
	printf(" RAND: %d", x);
}