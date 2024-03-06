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
	printf("결과 %d \n", result);

	short sh = 32767;
	int in = 2147483647;
	long ln = 2147483647;
	long long lln = 123451234512345;

	printf("short형 변수 출력 : %d\n", sh);
	printf("int형 변수 출력 : %d\n", in);
	printf("long형 변수 출력 : %ld\n", ln);
	printf("long long형 변수 출력 : %lld\n", lln);


	int kor = 70;
	int eng = 80;
	int mat = 90;
	int tot = 0;

	tot = kor + eng + mat;
	printf("국어 : %d, 영어 : %d, 수학 : %d \n", kor, eng, mat);
	printf("총점 : %d \n", tot);

}

/*

	형식 지정자

	%d - 10진수 정수 -> int, short
	%ld - 10진수 정수 -> long
	%f - 10진수 실수 -> float, double
	%lf - 10진수 실수 -> double 
	%c - 문자 -> char
	%s - 문자열 ->char*
	%p - 메모리주소 ->void*

int a(int a11, int b);

int printf( const char* format, ...);

*/

