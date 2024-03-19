#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

typedef struct {
    char title[40];
    int year;
    char director[40];
    char movierating[80];
} Movie;

Movie movies[10];

void init() {
    movies[0] = (Movie){ "�Ĺ�", 2024, "������", "15���̻������" };
    movies[1] = (Movie){ "��ī", 2024, "�� ŷ", "��ü������"};
    movies[2] = (Movie){ "�������̸�", 2023, "ũ�������� ���", "15���̻������" };
    movies[3] = (Movie){ "�м�", 2023, "���¿�", "15���̻������" };
    movies[4] = (Movie){ "���˵���2", 2022, "�̻��", "15���̻������" };
    movies[5] = (Movie){ "�̴Ͼ���2 ", 2022, "ī�� �ߴ�", "��ü������" };
    movies[6] = (Movie){ "ž��", 2022, "���� �ڽŽ�Ű", "12���̻������" };
    movies[7] = (Movie){ "������3", 2021, "����Ŭ ������", "15���̻������" };
    movies[8] = (Movie){ "ũ�翤��", 2021, "ũ���̱� �淹����", "12���̻������" };
    movies[9] = (Movie){ "�г�������", 2021, "����ƾ ��", "12�̻������" };
}

void findAll() {
    printf("��ü ��ȭ ���:\n");
    for (int i = 0; i < 10; i++) {
        printf("%s %d %s %s\n", movies[i].title, movies[i].year, movies[i].director, movies[i].movierating);
    }
    printf("\n\n");
}

void findByTitle() {
    char title[40];
    printf("��ȭ ���� �˻� : ");
    scanf("%s", title);

    int found = 0;
    for (int i = 0; i < 10; i++) {
        if (strcmp(movies[i].title, title) == 0) {
            printf("%s, %d, %s, %s\n", movies[i].title, movies[i].year, movies[i].director, movies[i].movierating);
            found = 1;
            break;
        }
    }
    if (found == 0);
    printf("��ȭ�� ã�� �� �����ϴ�.");
}

void main() {
    init();
    findAll();
    findByTitle();
}