#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* Sleep(1000); */ 
┌─────┐   
│     │   
│  1  │   
│     │   
└─────┘   

void draw(); // 그림 그리는 함수
int game(); // 게임 시작 함수
void result(int select); //결과 출력 함수

void main() {
	game();
}



//int rec_func(int n);
//
//void main() {
//	int n = 0;
//	printf("수를 입력하세요 : ");
//	scanf_s("%d", &n);
//	printf("1부터 %d까지의 합은 %d입니다.\n", n , rec_func(n));
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











// 함수 이름은 함수의 기능에 맞는 이름으로 정한다. 네이밍표기법 따라서
// 매개변수는 함수의 내용을 실행 하는데 외부데이터가 필요한 경우 생성한다.
// 반환타입 함수이름 ( 매개변수 )

//재귀 함수 - 자신을 실행 시키는 함수

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
	printf("1부터 %d까지의 합은 %d입니다.\n", num, res);
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
//	printf("정수 입력 : ");
//	scanf_s("%d", &num);
//	printf("%d는 %d자리 수 숫자이다.\n", num, digit(num));
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
//	printf("두 정수의 합 : %d\n", add);
//}
//
//int total(int k, int e, int m) {
//	int add = k + e + m;
//	printf("총점은 : %d\n", add);
//	return add;
//}
//
//void avg(int tot) {
//	printf("평균은 %d\n", tot / 3);
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
