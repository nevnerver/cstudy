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
	printf("\t┌─────────────┐\n");
	printf("\t│ 1.도서 검색 │\n");
	printf("\t│ 2.도서 등록 │\n");
	printf("\t│ 3.도서 대여 │\n");
	printf("\t│ 4.도서 반납 │\n");
	printf("\t└─────────────┘\n");
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
	printf("로그인 화면 로딩");
	for (int i = 1; i <= 10; i++) {
		printf("."); Sleep(300);
	}
	system("cls");
	char name[20];
	int id;
	do {
		gotoxy(5, 3);
		printf("이름 : ");
		gets(name);
		gotoxy(5, 5);
		printf("회원 번호 : ");
		scanf("%d", &id);

		for (int i = 0; i < size; i++) {
			//printf("%s %d %d \n", mlist[i].name, mlist[i].id, strcmp(mlist[i].name, name));
			if (strcmp(mlist[i].name, name) == 0) {
				if (mlist[i].id == id) {
					printf(" \n확인 되었습니다. \n");
					Sleep(2000); return &mlist[i];
				}
			}
		}
		printf("\n\n 입력하신 이름과 번호를 다시 확인 해주세요 \n");
		printf("처음으로 돌아가기 - b");
		if (getch() == 'b') return NULL;
		system("cls");
	} while (1);


}
void book_search(Book* list_head) {
	system("cls");
	gotoxy(5, 2);
	printf("도서 검색 대상 선택 \n");
	gotoxy(5, 3);
	printf("1.저자  2.제목  3.출판사 ");
	SubMenu search_select = 10 + (getch() - 48);
	switch (search_select) {
	case WRITER:
		search(1, list_head); break;
	case TITLE:
		search(2, list_head); break;
	case PUBLISHING:
		search(3, list_head); break;
	default:
		printf("\n처음 화면 이동...");
		Sleep(2500); system("cls");
		return;
	}

}


static void search(int num, Book* head) {
	char category[3][20] = { "저자","제목","출판사" };
	gotoxy(5, 5);
	printf("%s 검색 : ", category[num - 1]);
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