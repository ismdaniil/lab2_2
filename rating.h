#pragma once

#include "Coin.h"

class Rating
{
private:
    int points;
    Coin ArrayCoins[5];
public:
    // �����������
    Rating();

    // ���-�� ��������� ������ �� �����
    int GetPoints();

    // ����������
    ~Rating();

    // ������������� ��������� 
    void SetRating(int pointsi, Coin array[5]);

    // �����  �� �����
    void DisplayRating();

    //��������� �������
    void PlusRating();
};
