#include "game.h"

void loadFile() {
	Sleep(1000);
	printf("불러오기 성공");
	Sleep(1000);
	system("cls");
	game();
}

void menu(char select) {
	switch (select) {
	case '1'://새게임
		game(); break;
	case '2'://이어하기
		loadFile(); break;
	case '3'://설정
		printf("설정은 없다"); break;
	case '4': //만든이
		printf("만든이"); break;
	case '5': //종료
		return;
	}
}

char startScreen() {
	color(4); printf("T "); color(1); printf("E "); color(6); printf("X ");
	color(7); printf("T "); color(2); printf("R "); color(9); printf("P ");
	color(4); printf("G \n"); color(7);

	//Beep(330, 300);	Beep(290, 300); Beep(260, 300); Beep(290, 300);
	//Beep(330, 300); Beep(330, 300); Beep(330, 300);
	//Beep(290, 300); Beep(290, 300); Beep(290, 300);
	//Beep(330, 300); Beep(330, 300); Beep(330, 300);
	//Beep(330, 300);	Beep(290, 300); Beep(260, 300); Beep(290, 300);
	//Beep(330, 300); Beep(330, 300); Beep(330, 300);
	//Beep(290, 300); Beep(290, 300); Beep(330, 300); Beep(290, 300); Beep(260, 300);

	/*Beep(260, 500); Beep(340, 500); Beep(380, 500); Beep(420, 500); Beep(380, 500);
	Beep(340, 500); Beep(380, 700);
	Beep(420, 500); Beep(340, 500); Beep(380, 500);	Beep(340, 500); Beep(290, 500); Beep(260, 700);
	Beep(260, 500); Beep(340, 500); Beep(380, 500); Beep(420, 500); Beep(380, 500);
	Beep(340, 500); Beep(380, 700);
	Beep(420, 500); Beep(340, 500); Beep(380, 500); Beep(290, 500); Beep(330, 500); Beep(340, 300);
	Beep(380, 500); Beep(380, 500); Beep(380, 500); Beep(340, 500); Beep(380, 500); Beep(420, 300);
	Beep(340, 700);
	Beep(290, 500); Beep(290, 500); Beep(260, 500); Beep(420, 500); Beep(380, 500);
	Beep(520, 500); Beep(420, 500); Beep(380, 500); Beep(340, 500); Beep(380, 500);
	Beep(420, 500); Beep(290, 700);
	Beep(260, 500); Beep(340, 500); Beep(330, 500); Beep(340, 500); Beep(380, 500);
	Beep(340, 700);*/


	printf("게임을 시작하지!\n");
	printf("1. 새  게임\n");
	puts("2. 이어 하기");
	puts("3. 게임 설정");
	puts("4. 만  든 이");
	puts("5. 게임 종료");
	char select;
	select = getch();
	return select;
}

void color(int n) {
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), n);
}






//initial.c
//gameFunc.c
//gameStoryFunc.c
//game.h