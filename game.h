#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <Windows.h>
#include <stdbool.h>


void color(int);
char startScreen(); // 시작 화면
void menu(char); // 메뉴 선택 실행 
void saveFile();//저장
void loadFile();//불러오기

void game();// 게임시작
void gameInit(void**); //게임 초기화
void gameStory(void**); // 내용