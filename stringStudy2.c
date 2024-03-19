#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main() {

	char song[100] = "school bells ringing ding ding dong lets all gather now";
	int alp[26] = { 0, };

	// song 배열의 영어 알파벳의 갯수를 구하여 출력하시오.
	// 아스키
	for (int i = 0; song[i] != NULL; i++)
		alp[song[i] - 97]++;

	for (int i = 0; i < sizeof(alp) / sizeof(int); i++)
		printf("%c -  %d개 \n", 97 + i, alp[i]);


	for (int i = 0; song[i] != NULL; i++) {
		if (song[i] >= 97 && song[i] < 122)
			song[i] = song[i] - 32;
	}

	printf("%s \n", song);





	//char info[100] = "이름:김재성,나이:28,주소:선화동";
	//// 이름만 출력,  태어난 년도 출력(나이는 만나이)
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
	//printf("이름 - %s\n", nameStr);
	//int age = atoi(ageStr);
	//printf("태어난년도 : %d \n", 2024-age);






	//char birth[100] = "1998년12월09일";

	//// 올해 몇 살인지 출력하고, 생일이 몇월 달인지 출력하세요.

	//char year[5];
	//int iyear = 0;
	//for (int i = 0; i<4; i++) {
	//	year[i] = birth[i];
	//}
	//sscanf(year, "%d", &iyear); // 문자열 -> 숫자
	//printf("나이 : %d \n", 2024-iyear);

	//int month = 0;
	//sscanf(birth, "1998년%d월09일", &month);
	//printf("%d  \n", month);

	//char temp[100];
	//sscanf(birth, "1998년%s", temp);
	//printf("%s  \n", temp);
	//strtok(temp,',')


	//char temp[100];
	//sprintf(temp, "%d 와 %d", 15, 30);//숫자 -> 문자열
	//printf("%s \n", temp);


	/*iyear = atoi(year);
	printf("%d  \n", iyear);*/

	/*char tmp[10];
	itoa(234, tmp, 10);
	printf(" %s  \n", tmp);    비주얼스튜디오에만 정의된 함수, c++ 용*/






	//char word[100] = "it was just like a movie, it was just like a song";
	////알파벳 a가 몇개 인가 찾기
	//int cnt = 0;

	////for (int i = 0; i < sizeof(word) / sizeof(char); i++) {
	////	if (word[i] == 'a')
	////		cnt++;
	////}

	//for (int i = 0; word[i] != NULL; i++) {
	//	if (word[i] == 'a') cnt++;
	//}

	//printf("알파벳 a는 %d 개 \n", cnt);

	//// it was just like a movie 문자열만 추출 하려면


	//int idx = 0;
	//char temp[100];
	//char tmp[6] = "movie";
	//// movie를 찾아서  추출하기

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
	//	printf("추출할 문자열이 없다.");
	//}







	// , 를찾기

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