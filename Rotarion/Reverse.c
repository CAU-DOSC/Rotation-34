#include "Project_Header.h"

char *Reverse(char *ary, int d, int n) {
	char* str = (char*)malloc((sizeof(char))*n);
	char temp = 0;
	for (int i = 0; i < n; i++) {
		str[i] = ary[i];
	}
	int c = n - 1;
	if (d < 0)
		d = -d;
	for (int i = 0; i < (d / 2); i++) {
		temp = str[i];
		str[i] = str[d - 1 - i];
		str[d - 1 - i] = temp;
	}

	for (int i = 0; i < (n - d) / 2; i++) {
		temp = str[(i + d)];
		str[(i + d)] = str[n - 1 - i - 1];
		str[n - 1 - i - 1] = temp;
	}

	for (int i = 0; i < (n / 2); i++) {
		temp = str[i];
		str[i] = str[n - 2 - i];
		str[n - 2 - i] = temp;
	}

	return str;
}
