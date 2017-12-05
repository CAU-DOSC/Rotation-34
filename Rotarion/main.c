#include "Project_Header.h"

int main(void) {
	int d = 0, length = 10, test = 0, size = 0;
	long T_jug = 0, T_trivial = 0, T_reverse = 0, T_block = 0;
	time_t starttime = 0, endtime = 0;
	printf("Enter Test Size(array size = 2^n + 8) : ");
	scanf("%d", &size);
	for (length = 10; length < pow(8, size + 1) + 8; length *= 8) {
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
		temp = Juggling(ary, length, d);
		endtime = clock();
		T_jug = endtime - starttime;
		free(temp);

		/*starttime = clock();
		blockswap(ary, d, length);
		endtime = clock();
		T_block = endtime - starttime;
		free(temp);*/

		printf("STR Length   Rotate Distance    :  Trivial    Juggling   Reverse    Block\n");
		printf("%-13d%-19d:   %-8d   %-8d   %-8d   %-8d\n", length, d, T_trivial, T_jug, T_reverse, T_block);
	}
	return 0;
}
