#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>


void main() {

	float kg = 0, cm = 0, bmi = 0;
	printf("ü��(kg)�� �Է��ϼ��� : ");
	scanf_s("%f", &kg);
	printf("Ű(cm)�� �Է��ϼ��� : ");
	scanf_s("%f", &cm);

	cm = cm / 100;
	bmi = kg / (cm * cm);
	20.0 < bmi && bmi < 25.0 ? printf("ǥ���Դϴ�.") : printf("ü�߰����� �ʿ��մϴ�.")





	/*int hour, min, sec;
	double time = 3.76;

	hour = (int)time;
	time = time - hour;
	time = time * 60;
	min = (int)time;
	time = time - min;
	time = time * 60;
	sec = (int)time;
	printf("3.76�ð��� %d�ð� %d�� %d�� �Դϴ�.", hour, min, sec);*/


	/*int seats = 70;
	int audience = 65;
	double rate = 0;

	rate = (double)audience / seats * 100;

	printf("������� %.1lf%%�̴�", rate);*/


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




	// ��Ʈ ������ - ��Ʈ �� ������ , ��Ʈ ����Ʈ ������
	// ��Ʈ �� ������ - and ( & ) �Ѵ� 1�϶��� 1 , or ( | ) �Ѱ��� 1�� ������ 1 , not ( ~ ) 1�� 0,  0�� 1, xor ( ^ ) ���� �ٸ��� 1 ������ 0
	// ��Ʈ ����Ʈ ������ - left ( << ) , right ( >> ); 
	// �����ʹ���
	// bit - byte - kbyte - mbyte - gbyte - tbyte
	// bit -> 0 , 1
	// 1byte (8bit) -> ���� , ���ڴ� �ִ� 255���� ����
	// 1kbyte (1024byte) -> ������� ����
	// 1mbyte (1024kbyte) -> mp3 ���� 1��
	// 1gbyte (1024mbyte) -> hd�� ��ȭ 30��






	// (���ǽ�) ? ���ϰ�� : �����ϰ�� 
	
	/*int result = 0;
	int a=0, b=0;
	result = (10 > 5) ? 1000 : 55;
	printf("%d\n", result);
	printf("%s\n", (3 > 5) ? "5����ũ��" : "5�����۴�");

	(3 > 5) ? printf("5���� �۴�") : printf("5���� ũ��");
	(3 > 5) ? scanf_s("%d", &a) : scanf("%d", &b);
	printf("%d %d\n", a,b);*/


	/*int hum = 0;
	printf("���� ���� : ");
	scanf_s("%d", &hum);
	printf("%s\n", hum>=60? "������ ����" : hum<=50 ? "������ ����" : "������ ������");*/

	/*int num = 10;
	float fnum = 4.53;
	double dnum = 5.44;
	char ch = 'r';

	printf("intŸ���� �޸� ũ�� : %d\n", sizeof(num));
	printf("% d\n", sizeof(fnum));
	printf("% d\n", sizeof(dnum));
	printf("% d\n", sizeof(ch));	*/


	/*int r;
	int kh;
	float cir = 0;
	float pi = 3.14;
	float res = 0;

	printf("���� Ʈ�� ���������� : ");
	scanf("%d", &r);
	printf("�ڵ����� �ü� : ");
	scanf("%d", &kh);

	cir = (r * 2) * pi;
	res = (2 * cir) / (kh * 1000) * 60;
	printf("�ι����� �����ϴµ� �ɸ��� �ð��� %f�� �Դϴ�.\n", res);*/


	
	
	//���� Ʈ���� �������� r�̰�
	//Ʈ������ �ڵ����� �޸���.
	//�ڵ����� �ӵ��� k/h�̴�.
	//�ι����� �����ϴµ� �� �� �ɸ��°�?


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
	// and�� �ΰ� �ǿ����ڰ� ��� ���ϰ�쿡�� ��
	// or�� �ΰ� �ǿ����ڰ� ��� ������ ��쿡�� ����
	// not�� ���� ( �� -> ����, ���� -> ��)

	//int money = 5300;
	//int ���뱹�� = 6500;
	//int ��������� = 1800;

	//int a = 23;
	////���� a�� 10�� 50 ������ ���̳�?
	//printf("%d\n", 10 < a && a < 50);

	//printf("%d\n", (money >= ���뱹��) && (money >= ���������));
	//printf("%d\n", (money >= ���뱹��) || (money >= ���������));
	//printf("%d\n", !(money <= ���뱹��));
}