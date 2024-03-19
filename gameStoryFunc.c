#include "game.h"


#define xSize 17
#define ySize 10
#define X 8
#define headY 8
#define bodyY 9
#define building 10 // ȭ�鿡 ��µǴ� �ǹ� �� ����

void make_building(char(*board)[xSize]);
void fight(int* age, int* level, char* job, char* life, char* look);
void prolog(int* age, int* level, char* job, char* life, char* look);
void gotoXY(int x, int y);
void screenDraw(char(*board)[xSize]);
static void moving(char(*board)[xSize]);
static bool encounter(int* plevel, char* plife);
char* enemyList(int ex_value, int* penemy_level);

//���� ����
short end_game = 1;




char* enemyList(int ex_value, int* penemy_level) {
	static char enemy[5][4][100] = {
		//level 1 ��
		{"���� ��","�������� 2����", "����3�� ���2����","��õ�� �������ܸ�"},
		//level 2 ��
		{"��μ�", "������ ���� ������","�������� ���ϴ� ����","������� �� �ٴ� ����"},
		// level 3 ��
		{"����޶�� ���л�", "��ȣ�� �ʷϺҿ� �Ȱ��� ��Ƽ�� ������",
		"����� ����� �ϰ� ���Ƽ� ���ϴ� ����","���쿷�� �ڰ��ִ� ����"},
		// level 4 ��
		{"���� ���ġ","���԰� �ú�Ŵ� ���","��ȣ��(��μ� ����)",
		"�������� ������ ã�ƿ��� ���"},
		// level 5 ��
		{"���� ���ִ� ����","�Կ� ������","�������鼭 �Ѹ��� �ϴ� �����",
		 "���»���"}
	};

	int r = rand() % 4; // �� ������ ���� ���� �ε��� ����
	int r2 = ex_value / 10; // ���� ����
	int r3 = ex_value % 10; // ���� ����ġ ���� ���ڸ�
	if (r3 == 9 && r2 < 5)  r2 += 1; // ���� ����ġ�� 9��� ������ 1�ø���.
	*penemy_level = rand() % r2 + 1;// ���� ���� ������ �� ��������
	return enemy[*penemy_level - 1][r];
}

// ������ �ο�
void fight(int* age, int* level, char* job, char* life, char* look) {
	static float experience = 0.0;
	int enemy_level;
	char* enemy = enemyList((*level + experience) * 10, &enemy_level);
	gotoXY(0, 0);

	printf("%s %s �λ��� ��� �ִ� ��!! \n �λ��� �÷��� ���� �Ѵ�.!! \n\n", life, job);

	Sleep(500); color(4); printf(" �÷� !");
	Sleep(500); color(6); printf(" ���� !! \n\n");
	color(4);
	printf("\n\n %s \n\n", enemy);
	color(7);


	printf("1. ����  2. ����");
	char select = getch();
	if (select == '2') {
		printf("\n������ �����Ͽ����ϴ�. \n");
		int temp = rand() % 2;
		if (temp == 1) {
			printf("�÷��� ����µ� �����Ͽ����ϴ�.\n");
			Sleep(2000);
			system("cls");
			return;
		}
		printf("���� ����!  ���� �������ϴ�.\n");
		enemy_level += 2;
		Sleep(1000);
	}

	int enemy_hp = enemy_level * 100; // enemyList �Լ��� ���� �� �� ���� �ε���(my_enemy)�� �޾� ������ �����Ͽ�
	// �ε��� * 100
	int my_attack = *level * 30;//���� ���� ���� *30;
	int turn = 1;
	for (; turn <= 7; turn++) {
		enemy_hp -= my_attack;
		if (enemy_hp < 0) enemy_hp = 0;
		printf("%d�� ���ظ� ����ϴ�. �� HP : %d \n", my_attack, enemy_hp);
		if (enemy_hp == 0) break;
	}
	if (turn == 8) {
		printf("\n�÷��� �̰ܳ��� ���߽��ϴ�..... ���� �λ��� ����ϼ���\n");
		end_game = 0;
		Sleep(2000);
		system("cls");
		return;
	}
	experience += enemy_level * 2.5 * 0.1;
	printf("%.2f ����ġ ȹ��  \n", enemy_level * 2.5 * 0.1);
	if (experience > 1 && *level != 5) {
		*level += 1;
		printf("������ ! level : %dLV -> %dLV \n", *level - 1, *level);
		experience -= 1;
	}


	// �ο��� ������ ����ġ�� ���� ����*2.5 *0.1 �� ������.
	// ����ġ�� �׿��� ���� 1�̻��� �Ǹ� �������� �Ѵ�.
	// ������ �ϰ� ����ġ��  experience - 1�� ������.
	// ����ġ �� ���� �� �������� �������ߴٰ� ����Ѵ�.
	// 2�ʵڿ� fight�Լ��� �����Ѵ�.
	Sleep(2000);
	system("cls");
}


void gameStory(void** avata) {
	int age = *((int*)avata[0]), level = *((int*)avata[2]);
	char job[50], life[20], look[50];
	strcpy(job, (char*)avata[1]);
	strcpy(life, (char*)avata[3]);
	strcpy(look, (char*)avata[4]);
	char board[ySize][xSize] = { 0, };
	board[headY][X] = 1;
	board[bodyY][X] = 2;

	make_building(board);

	prolog(&age, &level, life, job, look);

	while (1) {
		gotoXY(0, 0);
		board[headY][X] = 1;
		board[bodyY][X] = 2;
		printf("%s %s�� \n%s������ ���� �λ����丮 !!\n\n", life, job, look);
		screenDraw(board); // ȭ�� �׸���

		moving(board);
		if (encounter(&level, life) == true) {
			fight(&age, &level, life, job, look);
		}
		if (!end_game) return;
	}
}
//���ѷα�
void prolog(int* age, int* level, char* job, char* life, char* look) {
	char detail[400];
	sprintf(detail, "�� ���� %d,  %s %s�ź��� \n���� %s�ܸ� ������. \n���� ���� ���� �λ� ���丮�� ���� �Ѵ�....", *age, life, job, look);
	int col = 3, row = 5, oldCol = 0;
	gotoXY(row, col);
	color(10);
	for (int i = 0; i < strlen(detail); i += 2) {
		if (detail[i] == '\n' || detail[i + 1] == '\n') {
			gotoXY(row, ++col);
			continue;
		}
		printf("%c%c", detail[i], detail[i + 1]);

		Sleep(200);
	}color(15);
	col = 3; row = 5;
	Sleep(2000);
	gotoXY(row, col);
	for (int i = 0; i < strlen(detail); i += 2) {
		if (detail[i] == '\n' || detail[i + 1] == '\n') {
			gotoXY(row, ++col);
			continue;
		}
		printf("%c%c", ' ', ' ');

		Sleep(50);
	}
	Sleep(2000);
}


// ���� ���� ġ���� �� ���� ġ���� �� ���� ����
bool encounter(int* plevel, char* plife) {
	int meet = rand() % 10;
	bool isMeet = false;
	if (meet == 5 || meet == 7) {
		isMeet = true;
		gotoXY(4, 15);
		printf("����������������������������������������������������������������������������\n");
		printf("    ��  %s �λ��� �÷��� �������ϴ�.  ��\n", plife);
		printf("    ����������������������������������������������������������������������������\n");
		Sleep(1000);
	}
	Sleep(500);
	system("cls");
	return isMeet;
}


void gotoXY(int x, int y) {
	COORD pos = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}


static void moving(char(*board)[xSize]) {
	for (int i = ySize - 1; i > 0; i--) {
		for (int k = 0; k < xSize; k++) {
			board[i][k] = board[i - 1][k];
		}
	}
	memset(board[0], 0, sizeof(char) * xSize);
	int cnt = 0;
	for (int i = 0; i < ySize; i++) {
		for (int k = 0; k < xSize; k++) {
			if (board[i][k] == 6) cnt++;
		}
	}
	for (int i = 0; i < building - cnt; i++) {
		int posx = rand() % xSize;
		if (posx == X) {
			i--;
			continue;
		}
		board[0][posx] = 6;
	}
}

void screenDraw(char(*board)[xSize]) {
	for (int i = 0; i < ySize; i++) {
		for (int k = 0; k < xSize; k++) {
			if (board[i][k] == 0)
				printf("  ");
			else if (board[i][k] == 6)
				printf("��");
			else if (board[i][k] == 1)
				printf("��");
			else if (board[i][k] == 2)
				printf("��");
		}
		printf("\n");
	}

}

void make_building(char(*board)[xSize]) {
	for (int i = 1; i <= building; i++) {
		int posx = rand() % xSize;
		int posy = rand() % ySize;
		if (posx == X) {
			i--;
			continue;
		}
		board[posy][posx] = 6;
	}
}