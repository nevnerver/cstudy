#include <stdio.h>
#include <stdlib.h>

void scoreInput(); //����, ����, ���� ������
int total(int kor, int eng, int mat); // ����
int average(int kor, int eng, int mat); // ���
void grade(int avg); // ���� A(~90), B(~80) , C(~70) D(~60), F

void main() {
	scoreInput();

}

void scoreInput() {
	int kor = 0, eng = 0, mat = 0, avg = 0;
	printf("���� ������ �Է��ϼ��� : ");
	scanf_s("%d", &kor);
	printf("���� ������ �Է��ϼ��� : ");
	scanf_s("%d", &eng);
	printf("���� ������ �Է��ϼ��� : ");
	scanf_s("%d", &mat);

	avg = average(kor, eng, mat);
	grade(avg);
}

int average(int kor, int eng, int mat) {
	int tot = 0, avg = 0;
	tot = total(kor, eng, mat);
	avg = tot / 3;
	return avg;
}

int total(int kor, int eng, int mat) {
	return kor + eng + mat;
}

void grade(int avg) {
	if (avg < 60) {
		printf("���� : F");
	}
	else if (avg >= 90) {
		printf("���� : A");
	}
	else if (avg >= 80) {
		printf("���� : B");
	}
	else if (avg >= 70) {
		printf("���� : C");
	}
	else{
		printf("���� : D");
	}
}


//int posSetX();
//int posSetY();
//int pointSet();
//void draw(int posX, int posY, int point);
//void circle(posX, posY, width);
//void triangle(posX, posY, width, height);
//void rect(posX, posY, width, height);
//void main() {
//	int posX = 0, posY = 0, point = 0;
//	posX = posSetX();
//	posY = posSetY();
//	point = pointSet();
//	draw(posX, posY, point);
//}
//
//int posSetX() {
//	int x = 0;
//	printf("��ǥ X�� ���� : ");
//	scanf_s("%d", &x);
//	return x;
//}
//
//int posSetY() {
//	int y = 0;
//	printf("��ǥ Y�� ���� : ");
//	scanf_s("%d", &y);
//	return y;
//}
//
//int pointSet() {
//	int pCnt = 0;
//	printf("������ ������ ���� �Է� : ");
//	scanf_s("%d", &pCnt);
//	return pCnt;
//}
//
//void draw(int posX, int posY, int point) {
//	int width = 0, height = 0;
//
//	if (point == 1) {
//		printf("������ �Է� : ");
//		scanf_s("%d", &width);
//	}
//	else {
//		printf("�ʺ� ���� �Է� : ");
//		scanf_s("%d %d", &width, &height);
//	}
//	
//	if (point == 1)
//		circle(posX, posY, width);
//
//	if (point == 3)
//		triangle(posX, posY, width, height);
//
//	if (point == 4)
//		rect(posX, posY, width, height);
//}
////��
//void circle(posX, posY, width) {
//		printf("(%d,%d)��ǥ���� ������%d\n", posX, posY, width);
//}
////�ﰢ��
//void triangle(posX, posY, width, height) {
//	int p1x = 0, p1y = 0, p2x = 0, p2y = 0;
//	int p3x = 0, p3y = 0, p4x = 0, p4y = 0;
//
//	p1x = posX;
//	p1y = posY - height / 2;
//
//	p2x = posX - width / 2;
//	p2y = posY + height / 2;
//	p3x = posX + width / 2;
//	p3y = p2y;
//
//	printf("---(%d,%d)---\n", p1x, p1y);
//	printf("(%d,%d)---(%d,%d)\n", p2x, p2y, p3x, p3y);
//	printf("�ﰢ�� �׸�����\n\n");
//}
////�簢��
//void rect(posX, posY, width, height) {
//	int p1x = 0, p1y = 0, p2x = 0, p2y = 0;
//	int p3x = 0, p3y = 0, p4x = 0, p4y = 0;
//
//	p1x = posX - width / 2;
//	p1y = posY - height / 2;
//
//	p2x = posX + width / 2;
//	p2y = posY - width / 2;
//
//	p3x = posX - width / 2;
//	p3y = posY + height / 2;
//
//	p4x = posX + width / 2;
//	p4y = posY + width / 2;
//
//	printf("(%d,%d)-(%d,%d)\n", p1x, p1y, p2x, p2y);
//	printf("(%d,%d)-(%d,%d)\n", p3x, p3y, p4x, p4y);
//	printf("�簢�� �׸��� �� \n\n");
//
//}