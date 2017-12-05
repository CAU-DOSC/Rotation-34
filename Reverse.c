#include "Project_Header.h"

char *Reverse(char *ary, int d, int n) {
	char* str = (char*)malloc((sizeof(char))*n);
	for (int i = 0; i < n; i++) {
		str[i] = ary[i];
	}
	int c = n - 1;
	if (d >= 0)
	{
		for (int a = 1; a <= c; a++)
		{
			for (int b = 0; b < d - 1; b++)
			{
				char temp = str[b];
				str[b] = str[b + 1];
				str[b + 1] = temp;
			}
		}
	}
	else
	{
		for (int a = c; a<0; a++)
		{
			for (int b = d - 1; b>0; b--)
			{
				char temp = str[b];
				str[b] = str[b - 1];
				str[b - 1] = temp;
			}
		}
	}
	return str;
}
