#pragma once

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <Windows.h>
#include <stdbool.h>


typedef enum mainMenu {
	SEARCH = 1, RESISTRATION, BOOKRENT, BOOKRETURN
}MainMenu;
typedef enum subMenu {
	WRITER = 11, TITLE = 12, PUBLISHING = 13,
	NEW = 21, UPDATE = 22
}SubMenu;
typedef enum rent_return {
	RENT, RETURN
}rent_return;
struct book {
	char id[15];  // ���� id
	char title[250]; // ���� ����
	char writer[50]; // ������
	char publishing[30]; //���ǻ�
	int yearOfPublication; //����⵵
	char sector[30]; //�о� 
};  // ���Ͽ� ����Ǿ� �ִ� ������ �� ������ �����ϴ�.
struct bookState {
	struct book* link; // book ����ü �ּ�
	char* bookId;  // �뿩 ���� id�ּ�
	char dateLending[20]; // �뿩��
	rent_return state; // ���� ����
};
struct member {
	int id;  //ȸ����ȣ
	char name[20]; //ȸ���̸�
};

typedef struct book Book;
typedef struct bookState BookState;
typedef struct member Member;




//bookFile.c
Book* file_load(); // ���� ���� �ҷ����� ( Book, BookState����ü�� ����)
void file_save(); // ���� ���� ����(Book, BookState ����ü ������ ����)
Member* member_load(); // ȸ�� ���� �ҷ�����

//bookFunc.c
MainMenu main_menu();
SubMenu sub_menu(MainMenu);
Member* login();  //�뿩, �ݳ�, �Ű����� ��Ͻ� �ʿ�
void gotoxy(int x, int y);
void book_search(Book*);  //���� �˻�


//bookNew.c
void book_registration(Book*);
Book* new_book(Book*);//�Ű����� ��� - ������ �α��� �ʿ�
Book* update_book(Book*);// ���� ���� ���� - ������ �α��� �ʿ�

//bookRent.c
Book* rent_book(Book*); //�뿩�� ȸ�� ��ȣ �Է��Ͽ� ��ġ�� �뿩 ����

//bookReturn.c
Book* return_book(Book*);// �ݳ��� ���� ��ȣ �� ���� �Է��Ͽ� �ݳ� ����


//��������
int bookCnt; // ���� ���� ����, �űԵ�϶Ǵ� ���� �ε�� ����
int stateCnt; //���� ���� �Ҵ� ���� ����id, ��¥, �뿩0 �ݳ�1 
Member* user;// �α��� ȸ�� 
Book* list; //������ü 
BookState* stat;// ���� �뿩 ��������, �뿩���� ������ ���� ������ �־����