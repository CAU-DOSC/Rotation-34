#include "Project_Header.h"

/*
	callee 함수 내에서 동적할당을 했으므로 caller함수에서 memory free를 꼭 해주시길 부탁드립니다.
*/

int gcd(int m, int n) {
	return n ? gcd(n, m%n) : m;
}
char* Juggling(char arr[], int n, int k) {	//인자로 전달되는 n의 크기는 문자열 자체의 크기(널문자 포함안됨)
	int d = -1, i, j, temp;
	char* dest = (int*)malloc((sizeof(char))*(n+1));
	for (int i = 0; i < n; i++) {
		dest[i] = arr[i];
	}
	dest[n] = '\0';
	for (i = 0; i < gcd(n, k); i++) {
		j = i;
		temp = dest[i];
		while (1) {
			d = (j + k) % n;
			if (d == i) break;
			dest[j] = dest[d];
			j = d;
		}
		dest[j] = temp;
	}
	return dest;
}


