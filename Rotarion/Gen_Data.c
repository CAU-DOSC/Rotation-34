#include "Project_Header.h"

int Generate_d(int length) {
  srand((unsigned)time(NULL));
  int temp = rand();
  return length - 2 * temp % length;
}

char *Generate_array(int length) {
  srand((unsigned)time(NULL));
  char* ary = (char*)malloc((sizeof(char))*length);
  for (int i = 0; i < length; i++)
	*(ary + i) = rand() % 25 + 65;
  *(ary + length) = '\0';
  return ary;
}
