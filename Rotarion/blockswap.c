#include "Project_Header.h"
void swap(char arr[], int a_, int b_, int d);//astart, bstart


void swap(char arr[], int a_, int b_, int d) {
	int i, temp;
	for (i = 0; i<d; i++)
	{
		temp = arr[a_ + i];
		arr[a_ + i] = arr[b_ + i];
		arr[b_ + i] = temp;
	}
}


char*blockswap(char *ary, int d, int n) {
	int d1 = (d<0) ? -d : d;

	if (d1 == 0 || d1 == n)
		return;//형태 그대로
	int a = d1;
	int b = n - d1;


	while (a != b) {
		if (a<b) {
			swap(ary, d1 - a, d1 + b - a, a);
			b -= a;
		}
		else {
			swap(ary, d1 - a, d1, b);
			a -= b;
		}

	}
	swap(ary, d1 - a, d1, a);

	return ary;
}
