#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void main() {

	int* pm = (int*)malloc(20);
	int* pc = (int*)calloc(5, sizeof(int));
	printf("%d %d\n", pm[0], pm[1]);
	printf("%d %d\n", pc[0], pc[1]);

	pm[0] = 10; pm[1] = 20; pm[2] = 30; pm[3] = 40; pm[4] = 50;
	pc[0] = 1; pc[1] = 2; pc[2] = 3; pc[3] = 4; pc[4] = 5;
	printf("%d %d %d\n", pm[0], pm[3], pm[4]);
	printf("%d %d %d\n", pc[0], pc[3] ,pc[4]);

	printf("pm -> %p , pc -> %pc \n", pm, pc);

	/*pm[5] = 60; pm[6] = 70;
	printf("%d %d\n", pm[5], pm[6]);*/

	pm = (int*)realloc(pm, 28);
	pm[5] = 60; pm[6] = 70;
	printf("%d %d\n", pm[5], pm[6]);



	/*int size = 5;
	int arr[5];
	printf("�Ҵ� ũ�� :");
	scanf("%d", &size);
	int* p = (int*)malloc(size * 4);
	p[0] = 10;
	p[1] = 20;
	p[2] = 30;
	p[3] = 40;
	p[4] = 50;

	for (int i = 0; i < size; i++) {
		printf("%d \n", p[i]);
	}
	free(p);
	for (int i = 0; i < size; i++) {
		printf("%d \n", p[i]);
	}*/
}
/*

���� �޸� �Ҵ�
malloc, calloc, realloc, free

int num1=10;
char ch='a';
int arr[20];

�޸��� ������ User�� System���� ������
user������ ũ�� �ڵ�, ����, ������, ������ ������ ���ȴ�.

��������, ������������ (�迭) -> �޸��� ���ÿ����� �Ҵ�ȴ�.
��������, �ܺκ��� -> �޸��� ������ ������ �Ҵ�ȴ�.
�Ϲ� �Լ� -> �޸��� �ڵ� ������ �Ҵ�
�ڵ�, ����, ������ ������ ũ��� �������̴�.


*/