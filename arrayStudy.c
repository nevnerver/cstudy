#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define size 10

void main() {

	char ch[10] = { 'b','o','y',NULL,'g','i','r','l',NULL };
	printf("%s %s \n", ch, ch + 4);

	char word[6] = "apple";
	/*word[0] = 'a';
	word[1] = 'p';
	word[2] = 'p';
	word[3] = 'l';
	word[4] = 'e';
	word[5] = NULL;*/

	printf("%c%c%c%c%c\n", word[0], word[1], word[2], word[3], word[4]);

	printf("%s\n", word);



	/*srand(time(NULL));

	int num[30] = { 0 , };
	int line = 0;

	for (int i = 0; i < sizeof(num) / sizeof(int); i++) {
		num[i] = rand() % 45 + 1;
	}

	for (int i = 0; i < sizeof(num) / sizeof(int); i++) {
		printf("%2d", num[i]);
		line++;
		if (line == 5) {
			printf("\n");
			line = 0;
		}
		else {
			printf("│ ");
		}
	}*/





	/*int num[] = { 23,14,15,19,2,4,8,20,11 };
	int search[10] = { 0, };
	int idx = 0;

	for (int i = 0; i < sizeof(num) / sizeof(int); i++) {
		if (num[i] % 2 == 0) {
			search[idx++] = num[i];
		}
	}

	for (int i = 0; i < idx; i++) {
			printf("%d ", search[i]);
	}*/


	/*int banana[8] = { 2, 3, 4, 5, 1, 2, 3, 9 };
	int apple[8] = { 0, };

	for (int i = 0; i < sizeof(banana) / sizeof(int); i++) {
		apple[i] = banana[i];
	}
	
	for (int i = 0; i < sizeof(apple) / sizeof(int); i++) {
		printf("%d", apple[i]);
	}*/



	/*int ary[5];

	ary[0] = 10;
	ary[1] = 20;
	ary[2] = ary[0] + ary[1];
	scanf_s("%d", &ary[3]);

	printf("%d\n", ary[2]);
	printf("%d\n", ary[3]);
	printf("%d\n", ary[4]);*/




	//const int size = 5; // 컴파일 오류남

	//int arr[size] = { 0, };

	//printf("%d\n", sizeof(arr));

	//for (int i = 0; i < sizeof(arr)/sizeof(int);	 i++) arr[i] = 0;
	//for (int i = 0; i < size; i++) arr[i] = 0;

	//printf("%d\n", arr[1]);
}

/*

int size=5;

int[] arr= new int[size];
let arr = new Array(5);

*/	