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
//	printf("1. ����    2. �ҷ�����    3. ���� :");
//	scanf("%d", (int*)&m);
//	//m = save;
//	
//	switch (m) {
//		case save:
//			printf("����"); break;
//		case load:
//			printf("�ҷ�����"); break;
//		case end:
//			printf("���� "); break;
//	}
//
//
//
//
//	/*int m1 = 1;
//	switch (m1) {
//		case 1:
//			printf("����"); break;
//		case 2:
//			printf("�ҷ�����"); break;
//		case 3:
//			printf("���� "); break;
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
//		printf("��Ʋ �����");
//	}
//	else {
//		printf("�򿣵��");
//	}
//	printf("%d  %d  \n", t1.a, t1.b);
//}
//



/*
	��ȭ �˻�
	1. ��ȭ����, �����⵵, ����, �������
	2.  ��ȭ 10�� ������ ����ϱ�
		 ��ȭ����ϴ� �����  �����Ҷ����� ���� �̷��ϰų�
		 ó������ �ڵ��ۼ��Ҷ�  �Է��س��ų�
	3. ���� �Ҵ����� ���� �ɼ� �ְ� �Ѵ�.
	4. �Լ���  init ���� ���� ������ ������ ����
			  findAll  ��ü ��ȭ ���
			  findByTitle  ��ȭ �������� �˻��Ͽ� �ش� ��ȭ ���
	5. �ϼ� �� ������� �˻� �ޱ� ,  �˻�ް� �ð� ������ �ֹ��ŵ���
	6. �� ���� �ð� ���ƿ�
	7. ������!!!!

*/

//
//union info { //4byte
//	int num;
//	char ch;
//	float fnum;
//	��������
//		���̹�����
//		�佺 ����
//		īī�� ����
//};
//
//struct test { //12byte
//	int num;
//	char ch;
//	float fnum;
//	��������
//	���̹�����
//	�佺 ����
//	īī�� ����
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
//	struct item* next; // ���� ��������ü
//}item;
//
//
//void main() {
//	int num=0;
//	item* start = NULL, *cur=NULL;
//	do {
//		printf("���� �Է� (0-����) : ");
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
//	//���ױ��� �Է� �� ���� ���
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
//������ �̸�
//���� ��  �̸�
//����    ��μ�
//����    ��μ�
//�츮    ��μ�
//����    ����ȫ
//����    ����ȫ
//�츮    ������
//����    ������
//
//
//1   ����
//2.  ����
//3.  �츮
//4. ����
//
//
//��μ�   1
//��μ�   2
//��μ�   3
//����ȫ   1
//����ȫ   4
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
//	printf("�ٻ���� ���ݰ� ������ �Է� �ϼ��� :");
//	scanf("%d%d", &crack.price, &crack.calories);
//	printf("�ٻ���� ���� : %d��\n�ٻ���� ���� : %dkcal\n",
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
//	Club ����;
//	����.club_id = 1234;
//	strcpy(����.language, "C���");
//	
//	Member m1 = { "������",25,"FG" };
//	
//	����.p = &m1;
//
//	printf("%d  %d %s \n", ����.club_id, ����.p->age, ����.p->name);






	//Club ����;
	//����.club_id = 1234;
	//strcpy(����.language, "C���");

	//����.m.age = 25;
	//strcpy(����.m.name, "������");
	//strcpy(����.m.blood, "HF");

	//printf("%d  .  %s \n", ����.club_id, ����.language);




	/*member m1 = { "�̼���",34,"O" };
	printf("%s %d %s \n", m1.name, m1.age, m1.blood);

	struct member m2;
	strcpy(m2.name, "�踻��");
	m2.age = 45;
	m2.blood[0] = 'A'; m2.blood[1] = NULL;
	printf("%s %d %s \n", m2.name, m2.age, m2.blood);

	struct member people[5];

	for (int i = 0; i < 5; i++) {
		printf("�̸� : ");
		gets(people[i].name);
		printf("���� : ");
		scanf("%d", &people[i].age);
		getchar();
		printf("������ : ");
		gets(people[i].blood);
	}*/

	//}

	/*
		����ü - ����� ���� ������ Ÿ��
		i a=10;
		a=3.14;
		a="���ڿ�";
		struct pos{
			int num;
			float fnum;
			char name[20];
		}

		class  aaa{  }
		interface bbb{  }

		aaa��Ű��
		aaaa.java
		class a implements ai{
			public a(){}
		}
		ai.java
		public interface ai{}



		bbb��Ű��
		bbbb.java
		class b{
			ai = new a();
		}
	*/