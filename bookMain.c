#include "book.h"

void main() {
	list = file_load();
	while (1) {
		system("cls");

		switch (main_menu()) {
		case SEARCH:
			book_search(list); break;
		case RESISTRATION:
			book_registration(list); break;
		case BOOKRENT:
			rent_book(list); break;
		case BOOKRETURN:
			return_book(list); break;
		default:
			// 모든 동적할당 공간 해제 하는 코드 작성하기
			printf("종료합니다.");
			return;
		}
	}
}

/*
bookMain.c  -> main함수
bookEnum.c  -> 열거형
bookFile.c -> 파일 저장, 불러오기 용
book.h -> header파일
bookNew.c -> 신간 등록
bookRent.c ->대여
bookReturn.c -> 반납
bookFunc.c -> 메뉴, 서브메뉴, 회원
bookData.c -> 구조체

*/