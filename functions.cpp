
#include "Lab07.h"

int gen_rnd(void) {
	static int tmp = 0;
	static int prvs[] = { 1, 1, 1, 1 };
	static int point = 0;

	tmp = 0;

	for (int j = 0; j != 4; j++)
		tmp += prvs[j];
	tmp %= 211;

	prvs[point] = tmp;

	if (point == 4)
		point = 0;
	else
		point++;

	return tmp;
}
