#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <limits.h>

int main(void) {
	/*
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d + %d = %d\n", a, b, a + b);
	printf("%d - %d = %d\n", a, b, a - b);
	printf("%d * %d = %d\n", a, b, a * b);
	printf("%d / %d = %d\n", a, b, a / b);
	printf("%d %% %d = %d\n", a, b, a % b);
	*/
	/*
	printf("\"\A\tB\tC\tD\"\n");
	printf("\"\A\tB\tC\tD\"\n");
	printf("\"\A\tB\tC\tD\"\n");
	*/
	/*
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d\n", a > b);
	*/
	/*
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	printf("%d\n", !a);
	printf("%d\n", a && b);
	printf("%d\n", (a > b) && (b > c) );
	*/
	/*
	int a = 7;
	printf("%d\n", ++a);
	printf("%d\n", a++);
	printf("%d\n", ++a);
	*/
	/*
	int a = 7, b = 7;
	printf("%d\n", (a == b) ? 100 : -100);
	*/
	/*
	int a[10] = { 0, };
	int i;
	for (i = 0; i < 10; i++) {
		printf("%d ", a[i]);
	}
	*/
	/*
	int a[10] = { 6,5,4,3,9,8,0,1,2,7 };
	int i, maxValue = INT_MIN;
	for (i = 0; i < 10; i++) {
		if (maxValue < a[i]) {
			maxValue = a[i];
		}
	}
	printf("%d\n", maxValue);
	*/
	/*
	char a[20];
	scanf("%s", &a);
	printf("%s\n", a);
	*/
	/*
	char a[20] = "Hello World";
	a[4] = ',';
	printf("%s", a);
	*/
	/*
	char a[] = "Hello World";
	int count = 0;
	for (int i = 0; i <= 10; i++) {
		if (a[i] == 'l') {
			count++;
		}
	}
	printf("%d\n", count);
	*/
	/*
	int a = 5;
	int* b = &a;
	printf("%d\n", *b);
	*/
	/*
	int a[] = { 1,2,3,4,5,6,7,8,9,10 };
	int i;
	for ( i = 0; i < 10; i++)
	{
		printf("%d\n", &a[i]);
	}
	*/
	/*
	int a = 5;
	int* b = &a;
	int** c = &b;
	printf("%d\n", a);
	printf("%d\n", &a);
	printf("%d\n", b);
	printf("%d\n", &b);
	printf("%d\n", *b);
	printf("%d\n", c);
	printf("%d\n", &c);
	printf("%d\n", *c);
	printf("%d\n", **c);
	*/
	/*
	int a[] = { 1,2,3,4,5,6,7,8,9,10 };
	int* b = a;
	printf("%d\n", a);
	printf("%d\n", &a);
	printf("%d\n", *a);
	printf("%d\n", b);
	printf("%d\n", &b);
	printf("%d\n", *b);
	printf("%d\n", b[0]);
	printf("%d\n", b[1]);
	*/
	
	/*
	int a;
	char c;
	scanf("%d", &a);
	printf("%d\n", a);
	int temp;
	while ((temp = getchar()) != EOF && temp != '\n') {}
	scanf("%c", &c);
	printf("%c\n", c);
	*/
	/*
	char* a = "Hello World";
	printf("%s\n", a);
	printf("%c\n", a[1]);
	printf("%c\n", a[4]);
	printf("%c\n", a[8]);
	*/
	/*
	char a[100];
	gets(a);
	gets_s(a, sizeof(a));
	printf("%s\n", a);
	char a[100];
	printf("%s\n", a);
	*/
	/*
	char a[20] = "Sung Woo";
	printf("문자열의 길이: %d\n", strlen(a));
	*/
	/*
	char a[20] = "Sung Woo";
	char b[20] = "Hojoon Seok";
	printf("두 배열의 사전 순 비교: %d\n", strcmp(a,b));
	*/
	/*
	char a[20] = "Sung Woo";
	char b[20] = "Hojoon Seok";
	strcpy(a, b);
	printf("복사된 문자열: %s\n", a);
	*/
	/*
	char a[30] = "My name is ";
	char b[20] = "Sung Woo";
	strcat(a, b);
	printf("합쳐진 결과 문자열: %s\n", a);
	*/

	char a[20] = "I like you";
	char b[20] = "like";
	printf("찾은 문자열: %s\n", strstr(a, b));

	system("pause");
	return 0;
}


