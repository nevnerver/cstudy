#include<stdio.h>

char main() {
	
	int birth = 19990101;
	short age = 25;
	unsigned char ch = 69;
	int result = 0;
	printf(" %d %d %c \n", birth, age, ch);

	ch = 130;
	printf(" %d %c \n", ch, ch);

	result = ch + age;
	printf("��� %d \n", result);

	short sh = 32767;
	int in = 2147483647;
	long ln = 2147483647;
	long long lln = 123451234512345;

	printf("short�� ���� ��� : %d\n", sh);
	printf("int�� ���� ��� : %d\n", in);
	printf("long�� ���� ��� : %ld\n", ln);
	printf("long long�� ���� ��� : %lld\n", lln);


	int kor = 70;
	int eng = 80;
	int mat = 90;
	int tot = 0;

	tot = kor + eng + mat;
	printf("���� : %d, ���� : %d, ���� : %d \n", kor, eng, mat);
	printf("���� : %d \n", tot);

}

/*

	���� ������

	%d - 10���� ���� -> int, short
	%ld - 10���� ���� -> long
	%f - 10���� �Ǽ� -> float, double
	%lf - 10���� �Ǽ� -> double 
	%c - ���� -> char
	%s - ���ڿ� ->char*
	%p - �޸��ּ� ->void*

int a(int a11, int b);

int printf( const char* format, ...);

*/

