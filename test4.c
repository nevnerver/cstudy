#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void main() {

	int num = 0;
	bool isPrime = true;
	int count = 0;
	printf("2 �̻��� ������ �Է��ϼ��� : ");
	scanf_s("%d", &num);
	for (int i = 2; i <= num; i++) {
		isPrime = true;
		for (int j = 2; j < i; j++){
			if (i % j == 0) {
				isPrime = false;
				break;
			}
		}
		if (isPrime == true) {
			printf("%5d", i);
			count++;
			if (count == 5) {
				printf("\n");
				count = 0;
			}
		}
	}

	//int num = 0;
	//int tmp = 1;
	//int count = 0;
	//printf("2 �̻��� ������ �Է��ϼ��� : ");
	//scanf_s("%d", &num);
	//for (int i = 2; i <= num; i++) {
	//	tmp = 1;
	//	for (int j = 2; j < i; j++) {
	//		if (i % j == 0) {
	//			tmp = 0;
	//			break;
	//		}
	//	}
	//	if (tmp == 1) {
	//		printf("%5d", i);
	//		count++;
	//		if (count == 5) {
	//			printf("\n");
	//			count = 0;
	//		}
	//	}
	//}


	/*srand(time(NULL));
	
	int num = 0;
	int rnum = 0;
	while( 1 ){
		rnum = rand() % 9 + 1;
		printf("1 ~ 50 ���� ���� �Է� : ");
		scanf_s("%d", &num);
		printf("������ %d\n", rnum);
		if (num % rnum == 0) {
			printf("%d�� ��� ��÷",rnum);
			break;
		}
	}*/

	


	/*int num = rand()%10 +1;
	printf("%d", num);*/





	//���� �Է��� ������ �´� �������� ����Ѵ�.
	//��, 5���� ����Ҷ��� 5*5=25 ������ 6*5=30���� ����Ǿ� ���

	//int a = 0;
	//printf("������ ���� �Է� : ");
	//scanf_s("%d", &a);
	//for (int i = 1; i <= 9; i++) {
	//	if (a == 5 && i == 6) {
	//		int tmp = a;
	//		a = i;
	//		i = tmp;
	//	}
	//	/*if (a == 5 && a < i) {
	//		printf("%d*%d=%d\n", i, a, (i+1) * a);
	//		i--;
	//		a++;
	//	}*/
	//	printf("%d*%d=%d\n", a,i,a*i);
	//}







	/*int num1 = 2;
	int num2 = 1;
	for (; num2 <= 9; num2++) {
		printf("%d*%d=%d\n", num1, num2, num1 * num2);
	}
	num2--;
	for (; num1 <= 9; num1++) {
		printf("%d*%d=%d\n", num2, num1, num1 * num2);
	}*/



	/*int num = 1;

	while ( num != 11 ) {
		printf("���� �Է� ( 11 - ���� ) : ");
		scanf_s("%d", &num);
	}*/

	/*int num = 0;
	do {
		printf("���� �Է� (0-����) : ");
		scanf_s("%d", &num);
	} while (num != 0);*/


	// while��
	// int a = 1; �ʱⰪ
	// while ( a<=5 ) { ���ǽ�
	// a++; ������
	// }

	// for�� 
	// for(int a=1; a<=; a++){ �ʱⰪ; ���ǽ�; ������
	// }

	// do~while��
	// int a=1; �ʱⰪ
	// do{
	//    a++ ������
	// }while ( a<=5 ); ���ǽ�






	/*int line = 4;

	for (int i = 1; i <= line; i++) {
		for (int blank = 1; blank < i; blank++) {
			printf(" ");
		}
		for (int star = (line - i + 1) * 2 - 1; star >= 1; star--) {
			printf("*");
		}
		printf("\n");
	}

	for (int i = 1; i <= line; i++) {
		for (int blank = line; blank > i; blank--) {
			printf(" ");
		}
		for (int star = 1; star <= i * 2 - 1; star++) {
			printf("*");
		}
		printf
		("\n");
	}*/

	



	/*for (int i = 1; i <= 7; i++) {
		if (i % 2 == 1) {
			for (int k = 1; k <= (7 - i) / 2; k++) {
				printf(" ");
			}
			for (int k = 1; k <= i; k++) {
				printf("*");
			}
			printf("\n");
		}
	}*/



	//1���� 10���� ����ϸ鼭 ¦���� ����Ҷ��� ***�� ���� ����ϼ���

	/*for (int i = 1; i <= 10; i++) {
		if ( ( i % 2 ) == 0) {
			printf("%d***\n", i);
		}
		else {
			printf("%d \n", i);
		}
	}*/

	//1���� 10���� �ݺ����� ����� ����ϴµ� 

	/*for (int i = 1; i <= 10; i++) {
		for (int k = 1; k <= i; k++) {
			printf("*");
		}
		printf("\n");
	}*/

	//�ݺ��� - while, for, do~while
	/*while (1) {
			
	}*/
	/*for (int i = 1; i < 10; i++) {
		printf("%d\n", i);
	}*/
	
}