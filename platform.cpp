#include "platform.h"

// �����������
Platform::Platform()
{
    angle = 0;
    height = 0;
}

// ���-�� ��������� ������ �� �����
int Platform::GetAngle()
{
    return angle;
}

int Platform::GetHeight()
{
    return height;
}

// ������������� ��������� 
void Platform::SetPlatform(int anglei, int heighti)
{
    angle = anglei;
    height = heighti;
}

// ���� 
void Platform::InpPlatformData()
{
    cout << "������� ���� ������� ���������: ";
    cin >> angle;
    cout << "������� ����� ���������: ";
    cin >> height;
}

// ����� 
void Platform::DisplayPlatform()
{
    cout << "������ ���������: \n  x = " << angle << "\n  y = " << height << endl;

}

void Platform::RandRotatePlatform() {
    angle = rand() % 15;
}

// ����������
Platform::~Platform()
{
    ;
}
