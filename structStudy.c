#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>





//
//enum menu { save=6, load, end };
//
//void main() {
//
//	enum menu m;
//	printf("1. 저장    2. 불러오기    3. 종료 :");
//	scanf("%d", (int*)&m);
//	//m = save;
//	
//	switch (m) {
//		case save:
//			printf("저장"); break;
//		case load:
//			printf("불러오기"); break;
//		case end:
//			printf("종료 "); break;
//	}
//
//
//
//
//	/*int m1 = 1;
//	switch (m1) {
//		case 1:
//			printf("저장"); break;
//		case 2:
//			printf("불러오기"); break;
//		case 3:
//			printf("종료 "); break;
//
//	}*/
//
//
//
//}



//
//union test {
//	int a;
//	char b;
//};
//void main() {
//	union test t1;
//	t1.a = 0x321;
//	if (t1.b == 35) {
//		printf("리틀 엔디안");
//	}
//	else {
//		printf("빅엔디안");
//	}
//	printf("%d  %d  \n", t1.a, t1.b);
//}
//



/*
	영화 검색
	1. 영화제목, 개봉년도, 감독, 관람등급
	2.  영화 10개 정도만 등록하기
		 영화등록하는 방법은  실행할때마다 직접 이력하거나
		 처음부터 코드작성할때  입력해놓거나
	3. 동적 할당으로 저장 될수 있게 한다.
	4. 함수는  init 저장 공간 생성및 데이터 저장
			  findAll  전체 영화 출력
			  findByTitle  영화 제목으로 검색하여 해당 영화 출력
	5. 완성 한 사람부터 검사 받기 ,  검사받고 시간 남으면 주무셔도됨
	6. 저 오늘 시간 많아요
	7. 파이팅!!!!

*/

//
//union info { //4byte
//	int num;
//	char ch;
//	float fnum;
//	금융인증
//		네이버인증
//		토스 인증
//		카카오 인증
//};
//
//struct test { //12byte
//	int num;
//	char ch;
//	float fnum;
//	금융인증
//	네이버인증
//	토스 인증
//	카카오 인증
//};
//
//void main() {
//	struct test t1;
//	t1.num = 20;   t1.ch = 'a';  t1.fnum = 3.14;
//	printf("%d %c %.2f \n", t1.num, t1.ch, t1.fnum);
//
//	union info u1;
//	u1.num = 20; u1.ch = 130;  u1.fnum = 3.14;
//	printf("%d  %c %.2f\n", u1.num, u1.ch, u1.fnum);
//}





//
//typedef struct item {
//	int num;
//	struct item* next; // 내부 참조구조체
//}item;
//
//
//void main() {
//	int num=0;
//	item* start = NULL, *cur=NULL;
//	do {
//		printf("정수 입력 (0-종료) : ");
//		scanf("%d", &num);
//		if (num != 0) {
//			item* temp = (item*)malloc(sizeof(item));
//			temp->num = num;
//			temp->next = NULL;
//			if (start == NULL) { start = temp;  cur = temp; }
//			else {
//				cur->next = temp;
//				cur = temp;
//			}
//		}
//
//	} while (num != 0);
//	
//	//지그까지 입력 한 정수 출력
//	cur = start;
//	for (int i = 0; cur!=NULL ; i++) {
//		if (i % 5 == 0 && i != 0)puts("");
//		printf("%d   ", cur->num );
//		cur = cur->next;
//	}
//	
//	
//	
//	
//	
//	/*item* p = (item*)malloc(  5*sizeof(struct item) );
//	p[0].num = 10;
//	p[1].num = 20;
//	p[2].num = 30;
//	p[3].num = 40;
//	p[4].num = 50;
//
//	for (int i = 0; i < 5; i++) {
//		printf("%d   ", p[i].num);
//	}*/
//}
//
//
//
//
////
//은행명과 이름
//은행 명  이름
//농협    김민수
//신한    김민수
//우리    김민수
//농협    노재홍
//국민    노재홍
//우리    서종우
//국민    서종우
//
//
//1   농협
//2.  신한
//3.  우리
//4. 국민
//
//
//김민수   1
//김민수   2
//김민수   3
//노재홍   1
//노재홍   4
//
//struct bank {
//	int id;
//	char name[20];
//};
//
//struct owner {
//	char name[20];
//	struct bank *b;
//};
//








//typedef struct cracker {
//	int price;
//	int calories;
//}cracker;
//
//void main() {
//	cracker crack;
//	printf("바사삭의 가격과 열량을 입력 하세요 :");
//	scanf("%d%d", &crack.price, &crack.calories);
//	printf("바사삭의 가격 : %d원\n바사삭의 열량 : %dkcal\n",
//		crack.price, crack.calories);
//}

//typedef struct member {
//	char name[20];
//	int age;
//	char blood[3];
//	
//}Member;
//
//typedef struct appleClub {
//	int club_id;
//	char language[20];
//	Member *p;
//}Club;
//
//void main() {
//	Club 종우;
//	종우.club_id = 1234;
//	strcpy(종우.language, "C언어");
//	
//	Member m1 = { "서종우",25,"FG" };
//	
//	종우.p = &m1;
//
//	printf("%d  %d %s \n", 종우.club_id, 종우.p->age, 종우.p->name);






	//Club 종우;
	//종우.club_id = 1234;
	//strcpy(종우.language, "C언어");

	//종우.m.age = 25;
	//strcpy(종우.m.name, "서종우");
	//strcpy(종우.m.blood, "HF");

	//printf("%d  .  %s \n", 종우.club_id, 종우.language);




	/*member m1 = { "이순신",34,"O" };
	printf("%s %d %s \n", m1.name, m1.age, m1.blood);

	struct member m2;
	strcpy(m2.name, "김말순");
	m2.age = 45;
	m2.blood[0] = 'A'; m2.blood[1] = NULL;
	printf("%s %d %s \n", m2.name, m2.age, m2.blood);

	struct member people[5];

	for (int i = 0; i < 5; i++) {
		printf("이름 : ");
		gets(people[i].name);
		printf("나이 : ");
		scanf("%d", &people[i].age);
		getchar();
		printf("혈액형 : ");
		gets(people[i].blood);
	}*/

	//}

	/*
		구조체 - 사용자 정의 데이터 타입
		i a=10;
		a=3.14;
		a="문자열";
		struct pos{
			int num;
			float fnum;
			char name[20];
		}

		class  aaa{  }
		interface bbb{  }

		aaa패키지
		aaaa.java
		class a implements ai{
			public a(){}
		}
		ai.java
		public interface ai{}



		bbb패키지
		bbbb.java
		class b{
			ai = new a();
		}
	*/