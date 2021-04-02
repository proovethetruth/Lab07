
#include "Lab07.h"

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
