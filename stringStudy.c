#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main() {
	char str1[100] = "�ѱ۵� �� ���� �ǰ���µǳ�??";

	char han[10] = "����Ȩ";

	char word[200];
	strcat_s(str1, sizeof(str1), "�踸��");//���ڿ� ����
	strcpy_s(word, sizeof(word), str1);// ���ڿ� ����

	printf("%s  \n", str1);
	printf("%s \n", word);
	int len;
	len = strnlen_s(word, sizeof word);
	printf("%d  \n", len); // ���ڿ��� ����

	int cmp = 0;
	cmp = strcmp(word, str1); //���ڿ���
	printf(" %d  \n", cmp);
	cmp = strcmp("apple", "banana");
	printf(" %d \n", cmp);

	cmp = strcmp("banana", "apple");
	printf(" %d \n", cmp);

	//���ڿ� �˻�
	printf("%p \n", strchr("banana", 'n'));

	printf("%d \n", strspn("banana1234", "1234"));
	printf("%d \n", strspn("1234banana", "1234"));

	printf("%s  \n", strstr("i like banana", "banana"));
	printf("%s  \n", strstr("i like banana", "orange"));

	char name[20];

	printf("�̸� : ");
	//scanf("%s", name);
	gets(name);  //gets_s(name , sizeof(name));
	//printf(" %s \n",name);
	puts(name);  // \n
	//char aa[100] = name + "�Դϴ�";
	//puts(name + "�Դϴ�");

	puts(strcat(name, "�Դϴ�"));



	// ���� �����
	char ch = 0;
	printf("���� �Է� : ");
	//ch=getchar();
	//printf("%c  \n", ch);

	ch = getch();
	printf("%c  \n", ch);
	putchar(ch);
	putch(ch);
}




// scanf_s("%s", name); -> 1����Ʈ ������ �����ϰڴ�.