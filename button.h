#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <string>
#include <locale.h>
#include <conio.h>

using namespace std;

class Button
{
private:
    bool OnOff; //���� ������� ���������
public:
    // �����������
    Button();

    // ���-�� ��������� ������ �� �����
    int GetOnOff();

    // ����������
    ~Button();

    // ������������� ��������� 
    void SetButton(bool onofi);

    // �����  �� �����
    void DisplayButton();

    //������ �� ������
    void PressButton();
};
