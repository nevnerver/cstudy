#include "game.h"

void game() {
	int age = 0, level = 0;
	char job[50], life[20], look[50];
	void* avata[5] = { &age, job, &level, life, look };

	printf("당신의 아바타를 설정 해주세요\n");
	//Sleep(1000);
	gameInit(avata);
	system("cls");

	gameStory(avata);
}

void gameInit(void** avata) {

	char job_list[5][20] = { "중학생","고등학생","취준생","실업자","기혼자" };
	puts("\n직업선택");
	for (int i = 0; i < 5; i++)
		printf("%d. %s", i + 1, job_list[i]);
	char job_select = getch();
	//Sleep(1000);

	char life_list[5][20] = { "하찮은","고결한","정직한","야바위","비열한" };
	puts("\n인생 난이도 설정");
	for (int i = 0; i < 5; i++)
		printf("%d. %s 인생", i + 1, life_list[i]);
	char life_select = getch();
	//Sleep(1000);

	char appear_list[5][50] = { "키는 작지만 잘생긴(이쁜) 외모",
		"키는 크지만 분화구 피부","키 준수 외모 준수","외모, 키 우수 , 목소리는 베컴" };
	puts("\n외모 선택 ");
	for (int i = 0; i < 4; i++)
		printf("%d. %s", i + 1, appear_list[i]);
	char appearance_select = getch();

	*((int*)avata[0]) = job_select == '3' ? 26 : job_select == '4' ? 40 : job_select == '5' ? 32 : job_select - 33;
	strcpy((char*)avata[1], job_list[job_select - 49]);
	*((int*)avata[2]) = life_select - 48;
	strcpy((char*)avata[3], life_list[life_select - 49]);
	strcpy((char*)avata[4], appear_list[appearance_select - 49]);

	printf("\n\n당신은 %s %s이고, %s를 가졌습니다.", life_list[life_select - 49],
		job_list[job_select - 49], appear_list[appearance_select - 49]);
	Sleep(1000);
}