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
	char id[15];  // 도서 id
	char title[250]; // 도서 제목
	char writer[50]; // 지은이
	char publishing[30]; //출판사
	int yearOfPublication; //발행년도
	char sector[30]; //분야 
};  // 파일에 저장되어 있는 순서는 위 순서와 동일하다.
struct bookState {
	struct book* link; // book 구조체 주소
	char* bookId;  // 대여 도서 id주소
	char dateLending[20]; // 대여일
	rent_return state; // 현재 상태
};
struct member {
	int id;  //회원번호
	char name[20]; //회원이름
};

typedef struct book Book;
typedef struct bookState BookState;
typedef struct member Member;




//bookFile.c
Book* file_load(); // 도서 파일 불러오기 ( Book, BookState구조체에 저장)
void file_save(); // 도서 파일 저장(Book, BookState 구조체 데이터 저장)
Member* member_load(); // 회원 정보 불러오기

//bookFunc.c
MainMenu main_menu();
SubMenu sub_menu(MainMenu);
Member* login();  //대여, 반납, 신간도서 등록시 필요
void gotoxy(int x, int y);
void book_search(Book*);  //도서 검색


//bookNew.c
void book_registration(Book*);
Book* new_book(Book*);//신간도서 등록 - 관리자 로그인 필요
Book* update_book(Book*);// 도서 정보 수정 - 관리자 로그인 필요

//bookRent.c
Book* rent_book(Book*); //대여시 회원 번호 입력하여 일치시 대여 가능

//bookReturn.c
Book* return_book(Book*);// 반납시 도서 번호 및 제목 입력하여 반납 진행


//전역변수
int bookCnt; // 도서 현재 수량, 신규등록또는 파일 로드시 증가
int stateCnt; //도서 상태 할당 갯수 도서id, 날짜, 대여0 반납1 
Member* user;// 로그인 회원 
Book* list; //도서전체 
BookState* stat;// 도서 대여 상태정보, 대여중인 도서에 대한 정보만 있어야함