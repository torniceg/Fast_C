#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	/*
	printf("%d\n", sizeof(int));
	int* a = malloc(sizeof(int));
	printf("%d\n", a);
	free(a);
	a = malloc(sizeof(int));
	printf("%d\n", a);
	free(a);
	*/
	/*
	char* a = malloc(100);
	memset(a, 'A', 100);
	for (int i = 0; i < 100; i++)
	{
		printf("%c ", a[i]);
	}
	*/

	int** p = (int**)malloc(sizeof(int*) * 3);
	//test

	system("pause");
	return 0;
}