#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	
	char ch;

	printf("문자 입력 : ");
	scanf("%c", &ch);
	printf("%c문자의 아스키 코드 값은 %d입니다.", ch, ch);




	//char grade;
	//char name[20];

	//printf("학점 입력 : ");
	//scanf("%c", &grade);
	//printf("이름 입력 : ");
	//scanf("%s", name);
	//printf("%s의 학점은 %c입니다. \n", name, grade);



	//int num = 0;
	//int num2 = 0;
	//printf("정수 두개 입력 : ");
	//scanf("%d %d", &num, &num2);

	///*printf("두번째 정수 입력 : ");
	//scanf("%d", %num2");*/

	//printf(" 확인 %d %d \n", num, num2);

	/*
	float f = 3.1234567; //소수점 6자리
	double d = 3.12345678901234567; //소수점 15자리
	long double ld = 3.123456789012345678;

	printf(" %.15f , %.15f , %f \n", f, d, ld);

	printf(" %f %lf %lf \n", f, d, ld);

	int a = 0;

	a = a + 1;
	a = a + 2;
	a = a + 3; 
	printf("a : %d\n", a);

	*/
}