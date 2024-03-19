#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <Windows.h>

typedef struct score {
	int num;
	char name[20];
	int kor, eng, mat;
	int total;
	float avg;
	char grade;
}score;

void total_avg_grade(score* student);
void findAll(score* all);
void sort(score* std, char orderBy);

void main() {
	char n[5][20] = { "ȫ�浿","�̼���","������","������","�ڽ���" };
	score* std = (score*)malloc(sizeof(score) * 5);
	for (int i = 0; i < 5; i++) {
		std[i].num = 315 + i;
		printf("�й� : %d\n", std[i].num);
		//scanf("%d", &std[i].num);
		//getchar();
		strcpy(std[i].name, n[i]);
		printf("�̸� : %s \n", std[i].name);
		//gets(std[i].name);
		std[i].kor = rand() % 61 + 40;
		std[i].eng = rand() % 61 + 40;
		std[i].mat = rand() % 61 + 40;
		printf("���� ���� ���� ���� : %d %d %d \n", std[i].kor, std[i].eng, std[i].mat);
		//scanf("%d %d %d", &std[i].kor, &std[i].eng, &std[i].mat);
		total_avg_grade(std + i);
	}
	printf("���� ��\n");
	findAll(std);
	sort(std, 'A');
	printf("\n������\n");
	findAll(std);
}
void sort(score* std, char orderBy) {
	int dir = 0;
	if (orderBy == 'a' || orderBy == 'A') dir = -1;

	for (int i = 0; i < 5 - 1; i++) {
		for (int k = 0; k < 5 - i - 1; k++) {
			if ((std[k].total < std[k + 1].total) + dir) {
				score temp = std[k];
				std[k] = std[k + 1];
				std[k + 1] = temp;
			}
		}
	}
}

void findAll(score* all) {
	for (int i = 0; i < 5; i++) {
		printf("%3d %s %3d %3d %3d %3d   %3.1f   %c\n", all[i].num,
			all[i].name, all[i].kor, all[i].eng, all[i].mat,
			all[i].total, all[i].avg, all[i].grade);
	}
}

void total_avg_grade(score* student) {
	student->total = student->kor + student->eng + student->mat;
	student->avg = student->total / 3.0;
	switch ((int)student->avg / 10) {
	case 10:case 9:
		student->grade = 'A'; break;
	case 8:
		student->grade = 'B'; break;
	case 7:
		student->grade = 'C'; break;
	default:
		student->grade = 'F';
	}
}

/*
���� ����  n-1 ����ŭ  �ݺ� ��  n-i�� �ݺ� , n�� ������ �� ����
for(int i=0;i <n-1; i++){
	for(int k=0; k< n-i-1; k++){
		if( ) {  ������ �ε����� ��ȯ }
	}
}

*/