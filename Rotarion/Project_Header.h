#pragma once
#pragma warning(disable:4996)
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

char *Juggling(char arr[], int n, int k);
char *Vector_rotation(char *ary, int d, int n);
char *Reverse(char *str, int d, int n);
char *Generate_array(int length);
int Generate_d(void);
int gcd(int m, int n);
void swapl(int arr[], int a_, int b_, int d);
void swapr(int arr[], int a_, int b_, int d);
char*blockswap(int *ary, int d, int n);