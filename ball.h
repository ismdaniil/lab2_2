#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <string>
#include <locale.h>
#include <conio.h>

using namespace std;

class Ball
{
private:
    int x;
    int y;
    string Name = "";
public:
    // �����������
    Ball();

    // ���-�� ��������� ������ �� �����
    int GetX();
    int GetY();
    string GetName();

    // ����������
    ~Ball();

    // ������������� ��������� 
    void SetBall(int x, int y, string Name);

    // ���� 
    void InpBallData();

    // �����  �� �����
    void DisplayBall();

    //������� ���
    void MoveBall();
};
