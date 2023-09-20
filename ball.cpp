#include "Ball.h"

// �����������
Ball::Ball()
{
    x = 0;
    y = 0;
    Name = "";
}

// ���-�� ��������� ������ �� �����
int Ball::GetX()
{
    return x;
}

int Ball::GetY()
{
    return y;
}

string Ball::GetName()
{
    return this->Name;
}


// ������������� ��������� 
void Ball::SetBall(int xi, int yi, string Namei)
{
    x = xi;
    y = yi;
    this->Name = Namei;
}

// ���� 
void Ball::InpBallData()
{
    cout << "������� x-���������� ����: ";
    cin >> x;
    cout << "������� y-���������� ����: ";
    cin >> y;
    cout << "������� ��� ����: ";
    cin >> Name;

}

// ����� 
void Ball::DisplayBall()
{
    cout << "������ ����: \n  x = " << x << "\n  y = " << y << "\n  Name -  " << Name << endl;

}

void Ball::MoveBall() {
    cout << "Press \n  'D' to increase the x value \n  'A' to decrease the x value\n  'W' to increase the y value\n  'S' to decrease the y value\n" << endl;
    char key = _getch();
    if (key == 'a')
        x--;
    if (key == 'd')
        x++;
    if (key == 'w')
        y++;
    if (key == 's')
        y--;
}

// ����������
Ball::~Ball()
{
    ;
}
