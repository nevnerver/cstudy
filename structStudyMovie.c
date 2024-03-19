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
    movies[0] = (Movie){ "파묘", 2024, "장재현", "15세이상관람가" };
    movies[1] = (Movie){ "웡카", 2024, "폴 킹", "전체관람가"};
    movies[2] = (Movie){ "오펜하이머", 2023, "크리스토퍼 놀란", "15세이상관람가" };
    movies[3] = (Movie){ "밀수", 2023, "류승완", "15세이상관람가" };
    movies[4] = (Movie){ "범죄도시2", 2022, "이상용", "15세이상관람가" };
    movies[5] = (Movie){ "미니언즈2 ", 2022, "카일 발다", "전체관람가" };
    movies[6] = (Movie){ "탑건", 2022, "조셉 코신스키", "12세이상관람가" };
    movies[7] = (Movie){ "컨저링3", 2021, "마이클 차베스", "15세이상관람가" };
    movies[8] = (Movie){ "크루엘라", 2021, "크레이그 길레스피", "12세이상관람가" };
    movies[9] = (Movie){ "분노의질주", 2021, "저스틴 린", "12이상관람가" };
}

void findAll() {
    printf("전체 영화 목록:\n");
    for (int i = 0; i < 10; i++) {
        printf("%s %d %s %s\n", movies[i].title, movies[i].year, movies[i].director, movies[i].movierating);
    }
    printf("\n\n");
}

void findByTitle() {
    char title[40];
    printf("영화 제목 검색 : ");
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
    printf("영화를 찾을 수 없습니다.");
}

void main() {
    init();
    findAll();
    findByTitle();
}