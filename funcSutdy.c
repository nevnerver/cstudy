#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* Sleep(1000); */ 
��������������   
��     ��   
��  1  ��   
��     ��   
��������������   

void draw(); // �׸� �׸��� �Լ�
int game(); // ���� ���� �Լ�
void result(int select); //��� ��� �Լ�

void main() {
	game();
}



//int rec_func(int n);
//
//void main() {
//	int n = 0;
//	printf("���� �Է��ϼ��� : ");
//	scanf_s("%d", &n);
//	printf("1���� %d������ ���� %d�Դϴ�.\n", n , rec_func(n));
//}
//
//int rec_func(int n) {
//	if (n == 1) return n;
//	return n + rec_func(n - 1);
//}
//



//int fac(int num) {
//	if (num == 1) return num;
//	return num * fac(num - 1);
//}
//
//void main() {
//	printf("%d\n",fac(5));
//	
//}











// �Լ� �̸��� �Լ��� ��ɿ� �´� �̸����� ���Ѵ�. ���̹�ǥ��� ����
// �Ű������� �Լ��� ������ ���� �ϴµ� �ܺε����Ͱ� �ʿ��� ��� �����Ѵ�.
// ��ȯŸ�� �Լ��̸� ( �Ű����� )

//��� �Լ� - �ڽ��� ���� ��Ű�� �Լ�

//int n = 4;
//
//void out(int num) {
//	printf("%d * %d = %d\n", n , num , n * num );
//	if (num == 9) return;
//	out(++num);
//}
//
//
//void main() {
//	out(1);
//}


//void out(int num) {
//	printf("%d\n", num);
//	if (num < 10)
//		out(++num);
//	return;
//}
//
//void main() {
//	out(1);
//}


/*void sum(int num);

void main() {
	sum(10);
	sum(100);
	return 0;
}

void sum(int num) {
	int res = 0;
	for (int i = 1; i <= num; i++) {
		res += i;
	}
	printf("1���� %d������ ���� %d�Դϴ�.\n", num, res);
}*/




//double centi_to_meter(int cm);
//
//int main(void) {
//	double res;
//
//	res = centi_to_meter(187);
//	printf("%.2lfm\n", res);
//
//	return 0;
//}
//
//double centi_to_meter(int cm) {
//	double m = 0;
//	m = cm / 100.0;
//	return m;
//}







//int digit(int num) {
//	int mul = 10;
//	for (int i = 1; i <= 6; i++) {
//		if (num / mul == 0) return i;
//		mul *= 10;
//	}
//	return 0;
//}
//
//
//void main() {
//	int num = 0;
//	printf("���� �Է� : ");
//	scanf_s("%d", &num);
//	printf("%d�� %d�ڸ� �� �����̴�.\n", num, digit(num));
//}
//
//








//int sum(int x, int y);
//
//int main(void) {
//	int a = 10, b = 20;
//	int result;
//
//	result = sum(a, b);
//	printf("result : %d\n", result);
//
//	return 0;
//}
//
//int sum(int x, int y)
//{
//	int temp;
//	temp = x + y;
//	return temp;
//}










//void sum(int a, int b) {
//	int add = a + b;
//	printf("�� ������ �� : %d\n", add);
//}
//
//int total(int k, int e, int m) {
//	int add = k + e + m;
//	printf("������ : %d\n", add);
//	return add;
//}
//
//void avg(int tot) {
//	printf("����� %d\n", tot / 3);
//}
//
//void main() {
//	int kor = 80, eng = 88, mat = 90;
//	int tot = total(kor, eng, mat);
//	avg(tot);
//
//	//int a1 = 10, b1 = 20;
//	//sum(a1, b1);
//}
