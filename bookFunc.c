#include "book.h"


static int writerCmp(Book*, char*);
static int titleCmp(Book*, char*);
static int publishingCmp(Book*, char*);
static void search(int num, Book* head);


void gotoxy(int x, int y) {
	COORD pos = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

MainMenu main_menu() {
	gotoxy(0, 3);
	printf("\t������������������������������\n");
	printf("\t�� 1.���� �˻� ��\n");
	printf("\t�� 2.���� ��� ��\n");
	printf("\t�� 3.���� �뿩 ��\n");
	printf("\t�� 4.���� �ݳ� ��\n");
	printf("\t������������������������������\n");
	MainMenu select;
	select = getch() - 48;
	return select;
}
SubMenu sub_menu(MainMenu main_select) {

}
Member* login() {
	int size = 0;
	Member* mlist = member_load(&size);
	system("cls");
	printf("�α��� ȭ�� �ε�");
	for (int i = 1; i <= 10; i++) {
		printf("."); Sleep(300);
	}
	system("cls");
	char name[20];
	int id;
	do {
		gotoxy(5, 3);
		printf("�̸� : ");
		gets(name);
		gotoxy(5, 5);
		printf("ȸ�� ��ȣ : ");
		scanf("%d", &id);

		for (int i = 0; i < size; i++) {
			//printf("%s %d %d \n", mlist[i].name, mlist[i].id, strcmp(mlist[i].name, name));
			if (strcmp(mlist[i].name, name) == 0) {
				if (mlist[i].id == id) {
					printf(" \nȮ�� �Ǿ����ϴ�. \n");
					Sleep(2000); return &mlist[i];
				}
			}
		}
		printf("\n\n �Է��Ͻ� �̸��� ��ȣ�� �ٽ� Ȯ�� ���ּ��� \n");
		printf("ó������ ���ư��� - b");
		if (getch() == 'b') return NULL;
		system("cls");
	} while (1);


}
void book_search(Book* list_head) {
	system("cls");
	gotoxy(5, 2);
	printf("���� �˻� ��� ���� \n");
	gotoxy(5, 3);
	printf("1.����  2.����  3.���ǻ� ");
	SubMenu search_select = 10 + (getch() - 48);
	switch (search_select) {
	case WRITER:
		search(1, list_head); break;
	case TITLE:
		search(2, list_head); break;
	case PUBLISHING:
		search(3, list_head); break;
	default:
		printf("\nó�� ȭ�� �̵�...");
		Sleep(2500); system("cls");
		return;
	}

}


static void search(int num, Book* head) {
	char category[3][20] = { "����","����","���ǻ�" };
	gotoxy(5, 5);
	printf("%s �˻� : ", category[num - 1]);
	char keyword[250];
	gets(keyword);
	int (*comp[3])(Book*, char*);
	comp[0] = writerCmp;
	comp[1] = titleCmp;
	comp[2] = publishingCmp;
	for (int i = 0; i < bookCnt; i++) {

		if (comp[num - 1](&head[i], keyword)) {
			printf("%s : %s  (%s) - %d", head[i].writer, head[i].title,
				head[i].publishing, head[i].yearOfPublication);
		}
	}

}
static int writerCmp(Book* target, char* key) {
	return strstr(target->writer, key) != NULL ? 1 : 0;
}
static int titleCmp(Book* target, char* key) {
	return strstr(target->title, key) != NULL ? 1 : 0;
}
static int publishingCmp(Book* target, char* key) {
	return strstr(target->publishing, key) != NULL ? 1 : 0;
}