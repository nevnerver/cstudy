#include "book.h"

void book_registration(Book* list_head) {
	system("cls");
	if (user == NULL) {
		printf("\n�α��� �ʿ��մϴ�.  (y/n) \n ");
		char yn = getch();
		if (yn == 'n' || yn == 'N') { system("cls"); return; } // �α������� �ʰڴ� ����- ùȭ�� ���ư���
		else {
			user = login(); // �α��� �õ�
			if (user == NULL) return; // �α��� �ߵ� ����- ùȭ�� �̵�
		}
	}
	if (user->id != 1000000) { // �α��� �� ������ �����ڰ� �ƴѰ��
		printf("\n������ �����ϴ�.\n"); Sleep(2000);
		return;
	}
	else { // �����ڷ� ���� �޾Ҵٸ� ���� �޴� �����Ͽ� �űԵ������ �Ǵ� ���� ���� �۾�
		sub_menu(RESISTRATION);
	}
}
Book* new_book(Book* list_head) {

}
Book* update_book(Book* list_head) {

}