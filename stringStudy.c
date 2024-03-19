#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main() {
	char str1[100] = "한글도 잘 저장 되고출력되나??";

	char han[10] = "노재홈";

	char word[200];
	strcat_s(str1, sizeof(str1), "김만수");//문자열 복사
	strcpy_s(word, sizeof(word), str1);// 문자열 복사

	printf("%s  \n", str1);
	printf("%s \n", word);
	int len;
	len = strnlen_s(word, sizeof word);
	printf("%d  \n", len); // 문자열의 길이

	int cmp = 0;
	cmp = strcmp(word, str1); //문자열비교
	printf(" %d  \n", cmp);
	cmp = strcmp("apple", "banana");
	printf(" %d \n", cmp);

	cmp = strcmp("banana", "apple");
	printf(" %d \n", cmp);

	//문자열 검색
	printf("%p \n", strchr("banana", 'n'));

	printf("%d \n", strspn("banana1234", "1234"));
	printf("%d \n", strspn("1234banana", "1234"));

	printf("%s  \n", strstr("i like banana", "banana"));
	printf("%s  \n", strstr("i like banana", "orange"));

	char name[20];

	printf("이름 : ");
	//scanf("%s", name);
	gets(name);  //gets_s(name , sizeof(name));
	//printf(" %s \n",name);
	puts(name);  // \n
	//char aa[100] = name + "입니다";
	//puts(name + "입니다");

	puts(strcat(name, "입니다"));



	// 문자 입출력
	char ch = 0;
	printf("문자 입력 : ");
	//ch=getchar();
	//printf("%c  \n", ch);

	ch = getch();
	printf("%c  \n", ch);
	putchar(ch);
	putch(ch);
}




// scanf_s("%s", name); -> 1바이트 공간에 저장하겠다.