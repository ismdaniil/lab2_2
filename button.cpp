#include "Button.h"

// �����������
Button::Button()
{
    OnOff = 0;
}

// ���-�� ��������� ������ �� �����
int Button::GetOnOff()
{
    return OnOff;
}

// ������������� ��������� 
void Button::SetButton(bool onoffi)
{
    OnOff = onoffi;
}

// ����� 
void Button::DisplayButton()
{
    if (OnOff)
        cout << "������ ������ " << endl;
    else
        cout << "������ �� ������ " << endl;
}

void Button::PressButton() {
    if (OnOff)
        OnOff = 0;
    else
        OnOff = 1;
}

// ����������
Button::~Button()
{
    ;
}
