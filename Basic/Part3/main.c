#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <limits.h>
/*
int a = 5;

void changeValue() {
	a = 10;
}

void process() {
	static int a = 5;
	a = a + 1;
	printf("%d\n", a);
}

void add(int* a, int b) {
	*a = *a + b;
}
*/

//int a[3][3] = { {1,2,3}, {4,5,6}, {7,8,9} };
//int a[2][3][3] = { { {1,2,3}, {4,5,6}, {7,8,9} }, { {1,2,3}, {4,5,6}, {7,8,9} } };

int main(void) {
	/*
	printf("%d\n", a);
	changeValue();
	printf("%d\n", a);
	*/
	/*
	int a = 7;
	if (1) {
		int a = 5;
	}
	printf("%d\n", a);
	*/
	/*
	process();
	*/
	/*
	register int a = 10, i;
	for ( i = 0; i < a; i++)
	{
		printf("%d ", i);
	}
	*/
	/*
	int a = 7;
	add(&a, 10);
	printf("%d\n", a);
	*/
	/*
	int i, j;
	for ( i = 0; i < 3; i++)
	{
		for ( j = 0; j < 3; j++)
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	*/
	/*
	int i, j, k;
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
		{
			for ( k = 0; k < 3; k++)
			{
				printf("%d ", a[i][j][k]);
			}
			printf("\n");
		}
		printf("\n");
	}
	*/
	/*
	int a = 10;
	int b[10];
	b = &a;
	*/
	/*
	int a[5] = { 1,2,3,4,5 };
	int* b = a;
	printf("%d\n", b[2]);
	*/
	/*
	int a[5] = { 1,2,3,4,5 };
	int i;
	for ( i = 0; i < 5; i++)
	{
		printf("%d ", *(a + i));
	}
	*/
	/*
	double b[10];
	printf("%d %d\n", b, b + 9);
	*/
	/*
	int a[5] = { 1,2,3,4,5 };
	int* p = a;
	printf("%d\n", *(p++));
	printf("%d\n", *(++p));
	printf("%d\n", *(p+2));
	*/
	int a[2][5] = { {1,2,3,4,5},{6,7,8,9,10} };
	int (*p)[5] = a[1];
	int i;
	for ( i = 0; i < 5; i++)
	{
		printf("%d ", p[0][i]);
	}

	system("pause");
	return 0;
}


