#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {

	char key; 
	printf("������ Ű�� �������� : ");
	scanf("%c", &key);

	switch (key) {
		case 'w' :
			printf("���� �̵�"); break;
		case 's':
			printf("�Ʒ��� �̵�"); break;
		case 'a':
			printf("�������� �̵�"); break;
		case 'd':
			printf("���������� �̵�"); break;
		case 'k':
			printf("����"); break;
		case 'l':
			printf("����"); break;
		default:
			printf("");
	}










	/*int a, b;
	char c;
	printf("��Ģ���� �Է�(����) : ");
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
			printf("�߸� �Է��ϼ̽��ϴ�.\n");
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