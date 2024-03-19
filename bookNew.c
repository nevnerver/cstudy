#include "book.h"

void book_registration(Book* list_head) {
	system("cls");
	if (user == NULL) {
		printf("\n로그인 필요합니다.  (y/n) \n ");
		char yn = getch();
		if (yn == 'n' || yn == 'N') { system("cls"); return; } // 로그인하지 않겠다 선택- 첫화면 돌아가기
		else {
			user = login(); // 로그인 시도
			if (user == NULL) return; // 로그인 중도 포기- 첫화면 이동
		}
	}
	if (user->id != 1000000) { // 로그인 을 했지만 관리자가 아닌경우
		printf("\n권한이 없습니다.\n"); Sleep(2000);
		return;
	}
	else { // 관리자로 인증 받았다면 서브 메뉴 실행하여 신규도서등록 또는 도서 수정 작업
		sub_menu(RESISTRATION);
	}
}
Book* new_book(Book* list_head) {

}
Book* update_book(Book* list_head) {

}