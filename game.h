#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <Windows.h>
#include <stdbool.h>


void color(int);
char startScreen(); // ���� ȭ��
void menu(char); // �޴� ���� ���� 
void saveFile();//����
void loadFile();//�ҷ�����

void game();// ���ӽ���
void gameInit(void**); //���� �ʱ�ȭ
void gameStory(void**); // ����