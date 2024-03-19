#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

enum menu { input = 1, print, save, load, end };

typedef struct item {
	int num;
	char itemName[20];
}item;

item* data_input(item*);
void file_save(item*);
item* file_load();
void data_print(item*);

int cnt = 0;

void main() {
	enum menu select;
	item* myItem = NULL;
	while (1) {
		printf("1.입력 2.출력 3.저장  4.불러오기  5.종료 : ");
		scanf("%d", (int*)&select);
		switch (select) {
		case input:
			myItem = data_input(myItem); break;
		case print:
			data_print(myItem); break;
		case save:
			file_save(myItem); break;
		case load:
			myItem = file_load(); break;
		case end:
			free(myItem);
			printf("\n종료합니다.\n"); return;
		}
	}
}

item* data_input(item* ip) {
	if (ip == NULL) {
		ip = (item*)malloc(sizeof(item));
	}
	else {
		ip = (item*)realloc(ip, sizeof(item) * (cnt + 1));
	}

	printf("번호 입력 : ");
	scanf("%d", &ip[cnt].num);
	getchar();
	printf("아이템 이름 : ");
	gets(ip[cnt].itemName);
	cnt++;
	return ip;
}
void file_save(item* ip) {
	FILE* fs = NULL;
	fs = fopen("c:/test/item.txt", "w");
	if (fs != NULL) {
		for (int i = 0; i < cnt; i++) {
			fprintf(fs, "%d %s\n", ip[i].num, ip[i].itemName);
		}

		fclose(fs);
	}
}
void data_print(item* ip) {

	for (int i = 0; i < cnt; i++) {
		printf("번호 : %d , 아이템명 : %s \n", ip[i].num, ip[i].itemName);
	}


}
item* file_load() {
	FILE* fl = NULL;

	fl = fopen("c:/test/item.txt", "r");
	if (fl != NULL) {
		item* tmp = NULL;


		char temp[500];
		while (fgets(temp, sizeof(temp), fl) != NULL) {
			if (tmp == NULL)
				tmp = (item*)malloc(sizeof(item));
			else
				tmp = (item*)realloc(tmp, sizeof(item) * (cnt + 1));

			sscanf(temp, "%d %s", &tmp[cnt].num, tmp[cnt].itemName);
			cnt++;
		}


		//while (feof(fl) == 0  ) {
		//	//if (feof(fl) != 0) break;
		//	if (tmp == NULL)
		//		tmp = (item*)malloc(sizeof(item));
		//	else
		//		tmp = (item*)realloc(tmp, sizeof(item) * (cnt + 1));
		//	printf("fscanf 전 %d \n", feof(fl));
		//	fscanf(fl, "%d %s\n", &tmp[cnt].num , tmp[cnt].itemName);
		//	printf("fscanf 후 %d \n", feof(fl));
		//	cnt++;
		//}

		fclose(fl);
		return tmp;
	}

	return NULL;
}



//
//void save(int (*num)[4]);
//void load();
//
//void main() {
//	int number[10][4];
//	for (int i = 0; i < 10; i++) {
//		for (int k = 0; k < 4; k++)
//			number[i][k] = rand() % 50 + 10;
//	}
//
//	save(number);
//	load();
//	
//}
//void load() {
//	int num[10][4];
//
//	FILE* fr;
//	fr = fopen("c:/test/number.txt", "r");
//	if (fr != NULL) {
//		for (int i = 0; i < 10; i++) {
//			fscanf(fr, "%d %d %d %d", &num[i][0], &num[i][1], &num[i][2], &num[i][3]);
//		}
//		fclose(fr);
//	}
//
//	for (int i = 0; i < 10; i++) {
//		for (int k = 0; k < 4; k++) {
//			printf("%d ", num[i][k]);
//		}
//		printf("\n");
//	}
//
//
//}
//
//
//void save(int(*num)[4]) {
//	FILE* fp = NULL;
//	fp = fopen("c:/test/number.txt", "w");
//	if (fp != NULL) {
//		for (int i = 0; i < 10; i++) {
//			for (int k = 0; k < 4; k++) {
//				fprintf(fp, "%d  ", num[i][k]);
//			}
//			fprintf(fp, "\n");
//		}
//		fclose(fp);
//	}
//}




/*
fopen  모드
	r - 읽기 전용 ,파일이 없거나 찾을수 없는경우 실패
	w - 쓰기 전용 , 파일이없으면 새로운 파일 생성, 기존의 파일 내용 삭제 다시저장
	a - 추가쓰기 전용 , 지정한 파일이 있으면 파일의 끝에 추가

	r+  - 읽고 쓰기 모드 , 기존의 내용에 덮어쓰기, 파일이없으면 새로 생성
	w+  - 읽고 쓰기 모드 , 파일의내용 삭제하고다시저장, 파일없으면 새로 생성
	a+  - 읽고 쓰고 추가 모드, 파일의 끝에 내용 추가 , 파일없으면 새로 생성

*/