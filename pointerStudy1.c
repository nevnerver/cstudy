#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void main() {
	char word1[20], word2[20], word3[20];
	printf("�� �ܾ� �Է� : ");
	scanf("%s %s %s", word1, word2, word3);
	char tmp[20];
	if (strcmp(word1, word2) > 0) {
		strcpy(tmp, word1);
		strcpy(word1, word2);
		strcpy(word2, tmp);
	}
	if (strcmp(word1, word3) > 0) {
		strcpy(tmp, word1);
		strcpy(word1, word3);
		strcpy(word3, tmp);
	}
	if (strcmp(word2, word3) > 0) {
		strcpy(tmp, word2);
		strcpy(word2, word3);
		strcpy(word3, tmp);
	}
	printf("%s %s %s", word1, word2, word3);
}



//void main() {
//	char word[16], visible[16];
//	int size = sizeof(word) / sizeof(char);
//	printf("�ܾ� �Է� : ");
//	gets(word);
//
//	strncpy(visible, word, 5);
//	visible[5] = NULL;
//	if (strlen(word) > 5) {
//		for (int i = 5; i < strlen(word); i++) {
//			strcat(visible, "*");
//		}
//	}
//
//
//	printf("�Է��� �ܾ� : %s, ������ �ܾ� : %s", word, visible);
//}


//char* my_strcpy(char* pd, char* ps);
//
//int main(void) {
//	char str[80] = "strawberry";
//
//	printf("�ٲٱ� �� ���ڿ� : %s\n", str);
//	my_strcpy(str, "apple");
//	printf("�ٲ� �� ���ڿ� : %s\n", str);
//	printf("�ٸ� ���ڿ� ���� : %s\n", my_strcpy(str, "kiwi"));
//
//	return 0;
//}
//
//char* my_strcpy(char* pd, char* ps) {
//	char* po = pd;;
//
//	while (*ps != '\0') {
//		*pd = *ps;
//		pd++;
//		ps++;
//	}
//	*pd = '\0';
//
//	return po;
//}


//void main() {
//	int num, result;
//	char word[10];
//	printf("���� �Է� : ");
//	result = scanf_s("%d",&num);
//
//	//printf("scanf ��ȯ�� : %d \n", result);
//	//scanf("%s",word); ���� - getchar(), getch() ���ڿ� - gets()
//
//	getchar();
//
//	gets(word);
//
//	printf("%d\n", num);
//	printf("%s\n", word);
//}

//void input_nums(int* lotto);
//void print_nums(int* lotto);
//
//
//void main() {
//	int lotto_nums[6];
//	input_nums(lotto_nums);
//	print_nums(lotto_nums);
//}
//
//void input_nums(int* lotto) {
//	int* start = lotto;
//	int* end = lotto + 6;
//	while (end != lotto) {
//		printf("��ȣ �Է� : ");
//		scanf_s("%d", lotto);
//		for (int* i = start; i != lotto; i++) {
//			if (*i == *lotto) {
//				printf("���� ��ȣ�� �ֽ��ϴ�!\n");
//				lotto -= 1; break;
//			}
//		}
//
//		lotto += 1;
//	}
//}
//
//void print_nums(int* lotto) {
//	printf("�ζǹ�ȣ : ");
//	for (int i = 0; i < 6; i++) {
//		printf("%d ", lotto[i]);
//		
//	}
//}

//int main(void) {
//	int ary[3];
//	int i;
//
//	*(ary + 0) = 10;
//	*(ary + 1) = *(ary + 0) + 10;
//
//	printf("�� ��° �迭 ��ҿ� Ű���� �Է� : ");
//	scanf_s("%d", ary + 2);
//
//	for (i = 0; i < 3; i++) {
//		printf("%5d", *(ary + i));
//	}
//
//}



//void swap(double* pa, double* pb);
//void line_up(double* maxp, double* midp, double* minp);
//
//int main(void) {
//	double max, mid, min;
//
//	printf("�Ǽ��� 3�� �Է� : ");
//	scanf_s("%lf%lf%lf", &max, &mid, &min);
//	line_up(&max, &mid, &min);
//	printf("���ĵ� �� ��� : %.1lf, %.1lf, %.1lf\n", max, mid, min);
//
//	return 0;
//}			
//
//void swap(double* pa, double* pb) {
//	double temp;
//	
//	temp = *pa;
//	*pa = *pb;
//	*pb = temp;
//}
//
//void line_up(double* maxp, double* midp, double* minp) {
//	if (*maxp < *midp)
//		swap(maxp, midp);
//	if (*maxp < *minp)
//		swap(maxp, minp);
//	if (*midp < *minp)
//		swap(midp, minp);
//}







//void input(int* p) {
//	int* end = p + 5;
//	do {
//		printf("���� �Է� : ");
//		scanf_s("%d", p);
//		if (*p % 2 == 1)p += 1;	
//	} while (end != p);
//}
//void total(int* p, int* sum) {
//	for (int i = 0; i < 5; i++) {
//		*sum = *sum + p[i];
//	}
//}
//
//void main() {
//
//	int arr[5], sum = 0;
//	input(arr);
//	total(arr, &sum);
//	printf("�Է��� ������ ������ %d \n", sum);
//
//
//}