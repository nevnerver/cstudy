#include "game.h"

void game() {
	int age = 0, level = 0;
	char job[50], life[20], look[50];
	void* avata[5] = { &age, job, &level, life, look };

	printf("����� �ƹ�Ÿ�� ���� ���ּ���\n");
	//Sleep(1000);
	gameInit(avata);
	system("cls");

	gameStory(avata);
}

void gameInit(void** avata) {

	char job_list[5][20] = { "���л�","����л�","���ػ�","�Ǿ���","��ȥ��" };
	puts("\n��������");
	for (int i = 0; i < 5; i++)
		printf("%d. %s", i + 1, job_list[i]);
	char job_select = getch();
	//Sleep(1000);

	char life_list[5][20] = { "������","�����","������","�߹���","����" };
	puts("\n�λ� ���̵� ����");
	for (int i = 0; i < 5; i++)
		printf("%d. %s �λ�", i + 1, life_list[i]);
	char life_select = getch();
	//Sleep(1000);

	char appear_list[5][50] = { "Ű�� ������ �߻���(�̻�) �ܸ�",
		"Ű�� ũ���� ��ȭ�� �Ǻ�","Ű �ؼ� �ܸ� �ؼ�","�ܸ�, Ű ��� , ��Ҹ��� ����" };
	puts("\n�ܸ� ���� ");
	for (int i = 0; i < 4; i++)
		printf("%d. %s", i + 1, appear_list[i]);
	char appearance_select = getch();

	*((int*)avata[0]) = job_select == '3' ? 26 : job_select == '4' ? 40 : job_select == '5' ? 32 : job_select - 33;
	strcpy((char*)avata[1], job_list[job_select - 49]);
	*((int*)avata[2]) = life_select - 48;
	strcpy((char*)avata[3], life_list[life_select - 49]);
	strcpy((char*)avata[4], appear_list[appearance_select - 49]);

	printf("\n\n����� %s %s�̰�, %s�� �������ϴ�.", life_list[life_select - 49],
		job_list[job_select - 49], appear_list[appearance_select - 49]);
	Sleep(1000);
}