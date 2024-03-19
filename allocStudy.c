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
	printf("할당 크기 :");
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

동적 메모리 할당
malloc, calloc, realloc, free

int num1=10;
char ch='a';
int arr[20];

메모리의 영역은 User와 System으로 나뉘며
user영역은 크게 코드, 스택, 데이터, 힙으로 나뉘어 사용된다.

지역변수, 정적지역변수 (배열) -> 메모리의 스택영역에 할당된다.
전역변수, 외부변수 -> 메모리의 데이터 영역에 할당된다.
일반 함수 -> 메모리의 코드 영역에 할당
코드, 스택, 데이터 영역의 크기는 한정적이다.


*/