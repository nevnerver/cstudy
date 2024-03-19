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
		printf("1.�Է� 2.��� 3.����  4.�ҷ�����  5.���� : ");
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
			printf("\n�����մϴ�.\n"); return;
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

	printf("��ȣ �Է� : ");
	scanf("%d", &ip[cnt].num);
	getchar();
	printf("������ �̸� : ");
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
		printf("��ȣ : %d , �����۸� : %s \n", ip[i].num, ip[i].itemName);
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
		//	printf("fscanf �� %d \n", feof(fl));
		//	fscanf(fl, "%d %s\n", &tmp[cnt].num , tmp[cnt].itemName);
		//	printf("fscanf �� %d \n", feof(fl));
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
fopen  ���
	r - �б� ���� ,������ ���ų� ã���� ���°�� ����
	w - ���� ���� , �����̾����� ���ο� ���� ����, ������ ���� ���� ���� �ٽ�����
	a - �߰����� ���� , ������ ������ ������ ������ ���� �߰�

	r+  - �а� ���� ��� , ������ ���뿡 �����, �����̾����� ���� ����
	w+  - �а� ���� ��� , �����ǳ��� �����ϰ�ٽ�����, ���Ͼ����� ���� ����
	a+  - �а� ���� �߰� ���, ������ ���� ���� �߰� , ���Ͼ����� ���� ����

*/