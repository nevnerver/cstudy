#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main() {

	char song[100] = "school bells ringing ding ding dong lets all gather now";
	int alp[26] = { 0, };

	// song �迭�� ���� ���ĺ��� ������ ���Ͽ� ����Ͻÿ�.
	// �ƽ�Ű
	for (int i = 0; song[i] != NULL; i++)
		alp[song[i] - 97]++;

	for (int i = 0; i < sizeof(alp) / sizeof(int); i++)
		printf("%c -  %d�� \n", 97 + i, alp[i]);


	for (int i = 0; song[i] != NULL; i++) {
		if (song[i] >= 97 && song[i] < 122)
			song[i] = song[i] - 32;
	}

	printf("%s \n", song);





	//char info[100] = "�̸�:���缺,����:28,�ּ�:��ȭ��";
	//// �̸��� ���,  �¾ �⵵ ���(���̴� ������)
	//
	//char nameStr[20] = { 0, }, ageStr[5] = { 0, };

	//for (int i = 0; info[i] != NULL; i++) {
	//	if (info[i] == ':' && nameStr[0] == 0) {
	//		int k = 0;
	//		for (; info[i + k] != ','; k++);
	//		strncpy(nameStr, info + i + 1, k - 1);
	//	}
	//	else if (info[i] == ':' && ageStr[0] == 0) {
	//		int k = 0;
	//		for (; info[i + k] != ','; k++);
	//		strncpy(ageStr, info + i + 1, k - 1);
	//	}
	//}
	//printf("�̸� - %s\n", nameStr);
	//int age = atoi(ageStr);
	//printf("�¾�⵵ : %d \n", 2024-age);






	//char birth[100] = "1998��12��09��";

	//// ���� �� ������ ����ϰ�, ������ ��� ������ ����ϼ���.

	//char year[5];
	//int iyear = 0;
	//for (int i = 0; i<4; i++) {
	//	year[i] = birth[i];
	//}
	//sscanf(year, "%d", &iyear); // ���ڿ� -> ����
	//printf("���� : %d \n", 2024-iyear);

	//int month = 0;
	//sscanf(birth, "1998��%d��09��", &month);
	//printf("%d  \n", month);

	//char temp[100];
	//sscanf(birth, "1998��%s", temp);
	//printf("%s  \n", temp);
	//strtok(temp,',')


	//char temp[100];
	//sprintf(temp, "%d �� %d", 15, 30);//���� -> ���ڿ�
	//printf("%s \n", temp);


	/*iyear = atoi(year);
	printf("%d  \n", iyear);*/

	/*char tmp[10];
	itoa(234, tmp, 10);
	printf(" %s  \n", tmp);    ���־�Ʃ������� ���ǵ� �Լ�, c++ ��*/






	//char word[100] = "it was just like a movie, it was just like a song";
	////���ĺ� a�� � �ΰ� ã��
	//int cnt = 0;

	////for (int i = 0; i < sizeof(word) / sizeof(char); i++) {
	////	if (word[i] == 'a')
	////		cnt++;
	////}

	//for (int i = 0; word[i] != NULL; i++) {
	//	if (word[i] == 'a') cnt++;
	//}

	//printf("���ĺ� a�� %d �� \n", cnt);

	//// it was just like a movie ���ڿ��� ���� �Ϸ���


	//int idx = 0;
	//char temp[100];
	//char tmp[6] = "movie";
	//// movie�� ã�Ƽ�  �����ϱ�

	//int cmpCount = 0;
	//for (int i = 0; word[i] != NULL; i++) {
	//	if (word[i] == tmp[0]) {
	//		for (int k = 0; tmp[k] != NULL; k++) {
	//			if (word[i + k] == tmp[k]) {
	//				cmpCount++;
	//			}
	//		}
	//		if (cmpCount == strlen(tmp)) {
	//			idx = i + strlen(tmp);
	//		}
	//	}
	//}
	//if (idx != 0) {
	//	for (int i = 0; i < idx; i++) {
	//		temp[i] = word[i];
	//	}
	//	temp[idx] = NULL;
	//	puts(temp);
	//}
	//else {
	//	printf("������ ���ڿ��� ����.");
	//}







	// , ��ã��

	/*
	int from = 0 , to=0 ;

	for (int i = 0; word[i] != NULL; i++) {
		if (word[i] == ',') {
			to = i; break;
		}
	}

	for (int i = from; i < to; i++) {
		temp[i] = word[i];
	}
	temp[to] = NULL;
	puts(temp);

	*/
	//for (int i = 0; word[i] != NULL; i++) {
	//	if (word[i] != ',') {
	//		temp[i] = word[i];
	//	}
	//	else {
	//		temp[i] = NULL; break;
	//	}
	//}
	//printf("%s \n", temp);

	/*for (int i = 0; word[i] != NULL; i++) {
		if (word[i] == ',') {
			idx = i; break;
		}
	}
	for (int i = 0; word[i] != NULL; i++) {
		if (i != idx) {
			temp[i] = word[i];
		}
		else break;
	}
	temp[idx] = NULL;
	printf("%s  \n", temp);*/
}