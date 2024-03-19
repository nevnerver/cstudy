#include <stdio.h>
#include <stdlib.h>

void scoreInput(); //국어, 영어, 수학 세과목
int total(int kor, int eng, int mat); // 총점
int average(int kor, int eng, int mat); // 평균
void grade(int avg); // 평점 A(~90), B(~80) , C(~70) D(~60), F

void main() {
	scoreInput();

}

void scoreInput() {
	int kor = 0, eng = 0, mat = 0, avg = 0;
	printf("국어 점수를 입력하세요 : ");
	scanf_s("%d", &kor);
	printf("영어 점수를 입력하세요 : ");
	scanf_s("%d", &eng);
	printf("수학 점수를 입력하세요 : ");
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
		printf("평점 : F");
	}
	else if (avg >= 90) {
		printf("평점 : A");
	}
	else if (avg >= 80) {
		printf("평점 : B");
	}
	else if (avg >= 70) {
		printf("평점 : C");
	}
	else{
		printf("평점 : D");
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
//	printf("좌표 X축 설정 : ");
//	scanf_s("%d", &x);
//	return x;
//}
//
//int posSetY() {
//	int y = 0;
//	printf("좌표 Y축 설정 : ");
//	scanf_s("%d", &y);
//	return y;
//}
//
//int pointSet() {
//	int pCnt = 0;
//	printf("도형의 꼭지점 갯수 입력 : ");
//	scanf_s("%d", &pCnt);
//	return pCnt;
//}
//
//void draw(int posX, int posY, int point) {
//	int width = 0, height = 0;
//
//	if (point == 1) {
//		printf("반지름 입력 : ");
//		scanf_s("%d", &width);
//	}
//	else {
//		printf("너비 높이 입력 : ");
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
////원
//void circle(posX, posY, width) {
//		printf("(%d,%d)좌표에서 반지름%d\n", posX, posY, width);
//}
////삼각형
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
//	printf("삼각형 그리는중\n\n");
//}
////사각형
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
//	printf("사각형 그리는 중 \n\n");
//
//}