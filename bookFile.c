#include "book.h"


Book* file_load() { // book.txt ���� �ҷ�����  bookstate.txt ���ϵ� �ҷ�����
					// bookstate.txt���� ������ stat ���������� ����
	FILE* fp = NULL;
	Book* blist = NULL;
	BookState* stlist = NULL;
	char temp[500];

	// book.txt ���� �ҷ�����
	fp = fopen("c:/test/book.txt", "r");
	if (fp != NULL) {
		while (fgets(temp, sizeof(temp), fp) != NULL) {
			if (blist == NULL)
				blist = (Book*)malloc(sizeof(Book));
			else
				blist = (Book*)realloc(blist, sizeof(Book) * (bookCnt + 1));

			// ����ü �����Ҵ� ������ �����ϱ�
			sscanf(temp, "%14[^,],%249[^,],%49[^,],%29[^,],%d,%29[^,]",
				blist[bookCnt].id, blist[bookCnt].title, blist[bookCnt].writer,
				blist[bookCnt].publishing, &blist[bookCnt].yearOfPublication,
				blist[bookCnt].sector);

			bookCnt++;
		}
		fclose(fp);
	}

	//bookstate.txt �ҷ�����
	fp = fopen("c:/test/bookstate.txt", "r");
	if (fp != NULL) {
		while (fgets(temp, sizeof(temp), fp) != NULL) {
			if (stlist == NULL)
				stlist = (BookState*)malloc(sizeof(BookState));
			else
				stlist = (BookState*)realloc(blist, sizeof(BookState) * (stateCnt + 1));
			//����ü ���� �Ҵ� ������ ����
			sscanf(temp, "%14[^,],%19[^,],%d", stlist[stateCnt].bookId, stlist[stateCnt].dateLending,
				&stlist[stateCnt].state);
			// link �� ������ �ּ� ã�Ƽ� �����ϱ�
			for (int i = 0; i < bookCnt; i++) {
				if (strcmp(stlist[stateCnt].bookId, blist[i].id) == 0) {
					stlist[stateCnt].link = blist + i;
					break;
				}
			}

			stateCnt++;
		}

		fclose(fp);
	}
	stat = stlist;
	return blist;
}
void file_save() { //book.txt ��  bookstate.txt ���� ���� 
	FILE* fp = NULL;

	fp = fopen("c:/test/book.txt", "w");
	if (fp != NULL) {
		for (int i = 0; i < bookCnt; i++) {
			fprintf(fp, "%s,%s,%s,%s,%d,%s\n", list[i].id, list[i].title, list[i].writer,
				list[i].publishing, list[i].yearOfPublication, list[i].sector);
		}
		fclose(fp);
	}
	fp = fopen("c:/test/bookstate.txt", "w");
	if (fp != NULL) {
		for (int i = 0; i < stateCnt; i++) {
			fprintf(fp, "%s,%s,%d\n", stat[i].bookId, stat[i].dateLending, stat[i].state);
		}
		fclose(fp);
	}
}
Member* member_load(int* size) {  // �α��� �ʿ��Ҷ��� ����
	FILE* fp = NULL;

	Member* memberlist = NULL;
	int count = 0;

	fp = fopen("c:/test/member.txt", "r");
	if (fp != NULL) {

		char temp[100];
		while (fgets(temp, sizeof(temp), fp) != NULL) {
			if (memberlist == NULL)
				memberlist = (Member*)malloc(sizeof(Member));
			else
				memberlist = (Member*)realloc(memberlist, sizeof(Member) * (count + 1));

			sscanf(temp, "%19[^,],%d", memberlist[count].name, &memberlist[count].id);
			// %19[^,]  , ���� ���ڿ� �ִ� 19�ڱ��� �б�
			count++;
		}
		*size = count; // ���� �о�� ����
		return memberlist; //���� �б� ����
		fclose(fp);
	}
	return NULL; //���� �б� ����
}


/*  https://github.com/kyerim1/cstudy   */