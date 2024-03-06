#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>


void main() {

	float kg = 0, cm = 0, bmi = 0;
	printf("체중(kg)을 입력하세요 : ");
	scanf_s("%f", &kg);
	printf("키(cm)를 입력하세요 : ");
	scanf_s("%f", &cm);

	cm = cm / 100;
	bmi = kg / (cm * cm);
	20.0 < bmi && bmi < 25.0 ? printf("표준입니다.") : printf("체중관리가 필요합니다.")





	/*int hour, min, sec;
	double time = 3.76;

	hour = (int)time;
	time = time - hour;
	time = time * 60;
	min = (int)time;
	time = time - min;
	time = time * 60;
	sec = (int)time;
	printf("3.76시간은 %d시간 %d분 %d초 입니다.", hour, min, sec);*/


	/*int seats = 70;
	int audience = 65;
	double rate = 0;

	rate = (double)audience / seats * 100;

	printf("입장률은 %.1lf%%이다", rate);*/


	//printf("%d\n", 24 & 19);	
	//printf("%d\n", 20 | 12);
	//printf("%d\n", ~14);

	//int num = 14;
	//int res = 0;

	//res = (~num) + 1;
	//printf("%d %d\n", ~num, res);
	//printf("%d\n", 43 ^ 15);
	//printf("%d\n", 4 << 2);
	//printf("%d\n", 16 >> 3);
	//printf("%d\n", 11 * 9);
	//printf("%d\n", (11 << 3) + 11);




	// 비트 연산자 - 비트 논리 연산자 , 비트 시프트 연산자
	// 비트 논리 연산자 - and ( & ) 둘다 1일때만 1 , or ( | ) 한개라도 1이 잇으면 1 , not ( ~ ) 1은 0,  0은 1, xor ( ^ ) 서로 다를때 1 같으면 0
	// 비트 시프트 연산자 - left ( << ) , right ( >> ); 
	// 데이터단위
	// bit - byte - kbyte - mbyte - gbyte - tbyte
	// bit -> 0 , 1
	// 1byte (8bit) -> 문자 , 숫자는 최대 255까지 가능
	// 1kbyte (1024byte) -> 몇개정도의 문단
	// 1mbyte (1024kbyte) -> mp3 음악 1분
	// 1gbyte (1024mbyte) -> hd급 영화 30분






	// (조건식) ? 참일경우 : 거짓일경우 
	
	/*int result = 0;
	int a=0, b=0;
	result = (10 > 5) ? 1000 : 55;
	printf("%d\n", result);
	printf("%s\n", (3 > 5) ? "5보다크다" : "5보다작다");

	(3 > 5) ? printf("5보다 작다") : printf("5보다 크다");
	(3 > 5) ? scanf_s("%d", &a) : scanf("%d", &b);
	printf("%d %d\n", a,b);*/


	/*int hum = 0;
	printf("현재 습도 : ");
	scanf_s("%d", &hum);
	printf("%s\n", hum>=60? "가습기 중지" : hum<=50 ? "가습기 가동" : "가습기 운행중");*/

	/*int num = 10;
	float fnum = 4.53;
	double dnum = 5.44;
	char ch = 'r';

	printf("int타입의 메모리 크기 : %d\n", sizeof(num));
	printf("% d\n", sizeof(fnum));
	printf("% d\n", sizeof(dnum));
	printf("% d\n", sizeof(ch));	*/


	/*int r;
	int kh;
	float cir = 0;
	float pi = 3.14;
	float res = 0;

	printf("원형 트랙 반지름길이 : ");
	scanf("%d", &r);
	printf("자동차의 시속 : ");
	scanf("%d", &kh);

	cir = (r * 2) * pi;
	res = (2 * cir) / (kh * 1000) * 60;
	printf("두바퀴를 완주하는데 걸리는 시간은 %f분 입니다.\n", res);*/


	
	
	//원형 트랙의 반지름이 r이고
	//트랙위를 자동차가 달린다.
	//자동차의 속도는 k/h이다.
	//두바퀴를 완주하는데 몇 분 걸리는가?


	/*int kor = 3, eng = 5, mat = 4;
	int credits = 0;
	int res;
	double kscore = 3.8, escore = 4.4, mscore = 3.9;
	double grade = 0;

	credits = kor + eng + mat;
	grade = (kscore + escore + mscore) / 3;
	res = (credits >= 10) && (grade > 4.0);

	printf("%d\n", res);*/



	// and(&&) , or(||) , not(!)
	// and는 두개 피연산자가 모두 참일경우에만 참
	// or은 두개 피연산자가 모두 거짓일 경우에만 거짓
	// not은 부정 ( 참 -> 거짓, 거짓 -> 참)

	//int money = 5300;
	//int 순대국밥 = 6500;
	//int 편의점라면 = 1800;

	//int a = 23;
	////변수 a는 10과 50 사이의 값이냐?
	//printf("%d\n", 10 < a && a < 50);

	//printf("%d\n", (money >= 순대국밥) && (money >= 편의점라면));
	//printf("%d\n", (money >= 순대국밥) || (money >= 편의점라면));
	//printf("%d\n", !(money <= 순대국밥));
}