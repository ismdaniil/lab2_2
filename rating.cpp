#include "Rating.h"

// �����������
Rating::Rating()
{
    points = 0;
    Coin C;
    for (int i = 0; i < 5; i++)
        ArrayCoins[i] = C;
}

// ���-�� ��������� ������ �� �����
int Rating::GetPoints()
{
    return points;
}

// ������������� ��������� 
void Rating::SetRating(int pointsi, Coin array[5])
{
    points = pointsi;
    Coin C;
    for (int i = 0; i < 5; i++)
        ArrayCoins[i] = array[i];
}

// ����� 
void Rating::DisplayRating()
{
    cout << "������� = " << points << endl;
    cout << "������: \n" << endl;
    for (int i = 0; i < 5; i++)
        ArrayCoins[i].DisplayCoin();

}

void Rating::PlusRating() {
    points++;
}

// ����������
Rating::~Rating()
{
    ;
}

