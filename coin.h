#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <string>
#include <locale.h>
#include <conio.h>

using namespace std;

class Coin
{
private:
    int x;
    int y;
public:
    // �����������
    Coin();

    // ���-�� ��������� ������ �� �����
    int GetX();
    int GetY();

    // ����������
    ~Coin();

    // ������������� ��������� 
    void SetCoin(int x, int y);

    // ���� 
    void InpCoinData();

    // �����  �� �����
    void DisplayCoin();

    //��������� ����� �������� ������ (����� ��������� � �)
    void RandXYCoin();
};

