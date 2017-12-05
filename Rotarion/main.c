#include "Project_Header.h"

int main(void) {
	int d = 0, length = 10, test = 0, size = 0;
	long T_jug = 0, T_trivial = 0, T_reverse = 0, T_block = 0;
	time_t starttime = 0, endtime = 0;
	printf("Enter Test Size(string size = 1024*2^n) : ");
	scanf("%d", &size);
	for (length = 1024; length < pow(2, size + 1) * 1024; length *= 2) {
		d = 0,test = 0, T_jug = 0, T_trivial = 0, T_reverse = 0, T_block;
		char *ary = (char*)malloc((sizeof(char))*length);
		char *temp;
		d = Generate_d(length);
		ary = Generate_array(length);

		starttime = clock();
		Vector_rotation(ary, d, length);
		endtime = clock();
		T_trivial = endtime - starttime;

		starttime = clock();
		Reverse(ary, d, length);
		endtime = clock();
		T_reverse = endtime - starttime;

		starttime = clock();
		Juggling(ary, length, d);
		endtime = clock();
		T_jug = endtime - starttime;

		starttime = clock();
		blockswap(ary, d, length);
		endtime = clock();
		T_block = endtime - starttime;

		printf("STR Length   Rotate Distance    :  Trivial    Juggling   Reverse    Block      (´ÜÀ§ : ms)\n");
		printf("%-13d%-19d:  %-8d   %-8d   %-8d   %-8d\n", length, d, T_trivial, T_jug, T_reverse, T_block);
	}
	return 0;
}
