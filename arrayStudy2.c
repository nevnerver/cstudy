#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

typedef int(*pnum)[4];

pnum init() {
	static int num[3][4];
	int* parr[3] = { num[0], num[1],num[2] };
	for (int i = 0; i < 3; i++) {
		for (int k = 0; k < 4; k++) num[i][k] = rand() % 10 + k;
	}
	return num;
}

void main() {
	pnum p;
	p = init();
	printf("%d  %d \n", p[0][0], p[1][2]);
}


//void input(int (*p)[5]) {
//	for (int i = 0; i < 5; i++) {
//		for (int k = 0; k < 5; k++) {
//			p[i][k] = rand() % 10 + i + k;
//		}
//	}
//}
//void print(int (*)[5]);
//
//void main() {
//	int board[5][5] = { 0,  };
//	input(board);
//	print(board);
//}
//void print(int (*p)[5]) {
//
//}
//

	//int(*p)[5]; //배열포인터 - board[5][5]
	//p = board;

//
//	for (int i = 0; i < 5; i++) {
//		for (int k = 0; k < 5; k++) {
//			p[i][k] = i * k + 2;
//		}
//	}
//
//	for (int i = 0; i < 5; i++) {
//		for (int k = 0; k < 5; k++) {
//			printf("%d  ", board[i][k]);
//		}
//		printf("\n");
//	}
//
//}

// 배열 포인터 - 다차원 배열을 다루기 위한 포인터 이다.
//             다차원배열의 두번째 크기 부터를 배열포인터에 할당 해줘야한다.
//        int arr[3][4];
//        int (*p)[4];

//        int arr[4][5][2];
//        int (*p)[5][2];


//
//void amountUsed(int**day , char**detail);
//void main() {
//	int yday[3] = { 12000, 4500,5600 };
//	int today[4] = { 5400, 8900,12560,3700 };
//	int day2[3] = { 8900,5300, 21500 };
//	char detail_yday[3][20] = { "소갈비특국밥","담배","커피" };
//	char detail_today[4][20] = { "라면김밥","택시","이체","음료수" };
//	char detail_day2[3][20] = { "택시","커피2잔","야식" };
//
//	int* day[3] = { day2, yday,today };
//	char* detail[3] = { detail_day2, detail_yday,detail_today };
//
//	//printf("%s \n", detail[1]+40 );
//
//	amountUsed( day, detail );
//
//}
//void amountUsed(int** day, char** detail) {
//	//  yday는  어제,  day2는 2일전, today는 오늘
//	// 야식을 입력한다면 야식 금액은 얼마인가?, 언제 먹었는지 출력
//
//	char word[20]; 
//	int idx = 0, idx2=0;
//	printf("내역 입력 : ");
//	gets(word);
//
//	for (int i = 0; i < 3; i++) {
//		int e = i == 1 ? 4 : 3;
//		for (int k = 0; k < e*20; k += 20) {
//			if (strcmp(detail[i] + k, word) == 0) {
//				idx = i; 
//				idx2 = k / 20;
//				printf("금액 : %d \n", day[idx][idx2]);
//				printf("%s 사용한 금액 \n", idx == 0 ? "2일전" : idx == 1 ? "어제" : "오늘");
//			}
//		}
//	}
//	
//}



//
//void main() {
//	int i, j;
//	char mark[5][5] = { 0, };
//	//for (int i = 0; i < 5; i++) {
//	//	for (int j = 0; j < 5; j++) {
//	//		if ( i==j )mark[i][j] = 'X';
//	//	}
//	//}
//
//	for (int i = 0; i < 5; i++) {
//		for (int j = 0; j < 5; j++) {
//			if ( i==j || i+j==4  )mark[i][j] = 'X';
//		}
//	}
//	
//	for (int i = 0; i < 5; i++) {
//		for (int j = 0; j < 5; j++) {
//			printf("%c ", mark[i][j]);
//		}
//		printf("\n");
//	}
//
//}

//int** init() {
//	static int num = 10, num2 = 30, arr[4] = { 55,66,77,88 };
//	static int* parr[3] = { &num, &num2, arr };
//	return parr;
//}
//
//void main() {
//	int** p2;
//	p2=init();
//
//	printf("num -> %d \n", *(p2[0]) );
//	printf("num2 -> %d \n", *(p2[1])  );
//	printf("arr -> %d %d \n", p2[2][0]  , p2[2][1]  );
//
//
//
//	//int num = 20;
//	//int arr[3] = { 10,20,30 };
//
//	//printf("num ->  %d \n", num);
//	//printf("arr -> %d %d %d\n", arr[0], arr[1], arr[2]);
//
//	//int* p;
//	//p = &num;
//	//printf("p -> %p , *p -> %d \n",p , *p);
//
//	//int** p2;
//	//p2 = &p;
//	//printf("p2 -> %p,  *p2 -> %p , **p2 -> %d \n", p2, *p2, **p2);
//
//	//p = arr;
//	//printf("배열arr의 주소 %p,  p -> %p \n", arr, p);
//	//printf("%d %d %d \n", p[0], p[1], p[2]);
//
//	//p2 = &p;
//	//printf("%d %d %d \n", (*p2)[0], (*p2)[1], (*p2)[2]);
//
//	//
//
//
//}


// 포인터 배열 - 포인터변수의 공간이 연속적으로 할당된 공간
//            - 배열의 공간에는  메모리주소가 저장 된다.
//            - 포인터배열의 공간 하나하나는 1차원 포인터 변수와 동일하다.
//  포인터변수 - 1차원 포인터변수, 2차원 포인터 변수, 3차원 포인터 변수
//       int num=10;  -> 변수
//       int *p = &num;  -> 1차원 포인터변수
//       int  arr[10]; -> 1차원 배열
//       p = arr; ->1차원 포인터변수
//       int **p2 ;  -> 2차원 포인터 변수
//       p2 = &p ; -> 1차원 포인터변수의 주소를 저장
//       int *parr[4];  -> 1차원 포인터배열
//       p2 =parr;  -> 포인터배열의 주소를 2차원 포인터 에 저장




//void print( int * p);
//void main() {
//	int arr[3][4][5] = {1,2,3,4,5,6,7,8,9,10,11,12}; // 2차원배열
//
//	printf("%d %d \n", arr[0][1], arr[2][3]);
//	printf("%d %d \n", *arr[0] + 1, *arr[2] + 3);
//	printf("%d %d \n", *(*(arr + 0) + 1), *(*(arr + 2) + 3));
//
//	/*  int* p[3] = { arr[0],arr[1],arr[2] };
//	print( p );*/
//
//	int(*p)[4];  //배열포인터
//	p = arr;
//
//	print(arr);
//}
//
//void print(int (*p)[4] ) {
//	for (int i = 0; i < 3; i++) {
//		for (int k = 0; k < 4; k++) {
//			printf("  %d  ", p[i][k]);
//		}
//		printf("\n");
//	}
//}


//
//void print( int **p) {
//	
//		for (int k = 0; k < 4; k++) {
//			printf(" %d  ", p[0][k]);
//		}
//		printf("\n");
//}