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
			// ��� �����Ҵ� ���� ���� �ϴ� �ڵ� �ۼ��ϱ�
			printf("�����մϴ�.");
			return;
		}
	}
}

/*
bookMain.c  -> main�Լ�
bookEnum.c  -> ������
bookFile.c -> ���� ����, �ҷ����� ��
book.h -> header����
bookNew.c -> �Ű� ���
bookRent.c ->�뿩
bookReturn.c -> �ݳ�
bookFunc.c -> �޴�, ����޴�, ȸ��
bookData.c -> ����ü

*/