#include "book.h"

Book* rent_book(Book* list_head) {
	// ���� �뿩 �Ϸ��� ȸ�� ���� �޾ƾ� �Ѵ�.
	// �뿩 �� ���� ��ȣ�� �Է¶Ǵ� �˻��Ͽ� �����ͼ� �뿩 ����		
	system("cls");
	// �α��� �ϴ� â
	// �����ϸ� ���� �������� �̵�
	int num;
	printf("�뿩�� ������ȣ�� �Է� �� �˻� ���ּ��� (��ȣ-1, �˻�-2)\n");
	scanf("%d", &num);
	switch (num) {
	case 1:
		break;
	case 2:
		list = file_load();
		book_search(list); break;

	}
	
	


}		