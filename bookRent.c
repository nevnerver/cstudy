#include "book.h"

Book* rent_book(Book* list_head) {
	// 도서 대여 하려면 회원 인증 받아야 한다.
	// 대여 할 도서 번호를 입력또는 검색하여 가져와서 대여 진행		
	system("cls");
	// 로그인 하는 창
	// 성공하면 다음 페이지로 이동
	int num;
	printf("대여할 도서번호를 입력 및 검색 해주세요 (번호-1, 검색-2)\n");
	scanf("%d", &num);
	switch (num) {
	case 1:
		break;
	case 2:
		list = file_load();
		book_search(list); break;

	}
	
	


}		