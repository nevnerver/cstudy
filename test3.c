#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {

	char key; 
	printf("조작할 키를 누르세요 : ");
	scanf("%c", &key);

	switch (key) {
		case 'w' :
			printf("위로 이동"); break;
		case 's':
			printf("아래로 이동"); break;
		case 'a':
			printf("왼쪽으로 이동"); break;
		case 'd':
			printf("오른쪽으로 이동"); break;
		case 'k':
			printf("공격"); break;
		case 'l':
			printf("점프"); break;
		default:
			printf("");
	}










	/*int a, b;
	char c;
	printf("사칙연산 입력(정수) : ");
	scanf("%d %c %d", &a, &c, &b);

	switch (c) {
		case '+' : 
			printf("%d %c %d = %d", a, c, b, a + b);
			break;
		case '-':
			printf("%d %c %d = %d", a, c, b, a - b);
			break;
		case '*':
			printf("%d %c %d = %d", a, c, b, a * b);
			break;
		case '/':
			printf("%d %c %d = %d", a, c, b, a / b);
			break;
		default:
			printf("잘못 입력하셨습니다.\n");
	}
	*/



	/*int a = 0, b = 0;

	if (a > 0) {
		b = 1;
	}
	else if (a == 0) {
		b = 2;
	}
	else {
		b = 3;
	}

	printf("b : %d\n", b);*/
}