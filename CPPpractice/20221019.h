#pragma once
#include <iostream>

using namespace std;

// ���۷��� �������� ��� 
/*
// �����͸� �̿��Ͽ� �޸� ������ ������� �ʽ��ϴ�.
void Function(int & x) // <- 1000 mb
{
    x = 100;
}
*/

// �ζ��� �Լ�
/*
// �Լ��� ȣ���ϴ� ��� �Լ��� ȣ��Ǵ� ��ġ����
// �Լ��� �ڵ带 �����Ͽ� �����ϴ� ����� �Լ��Դϴ�.
inline void Function()
{
    cout << "����" << endl;
}
*/

// ĸ��ȭ
/*
class cellPhone
{
private :
    int brightness;
    int volume;
    bool power;
public :
    // ���� �����ϴ� �Լ� (Setter)
    // ���� �д� �Լ� (Getter)
    // Setter() �Լ�
    void SetVolume(int x)
    {
        volume = x;
    }
    // Getter() �Լ�
    int GetVolume()
    {
        return volume;
    }
};
*/

int main()
{
    // �����ڶ�?
    /*
    // �ڽ��� �����ϴ� ������ ����� �� �ִ� �� �ϳ��� �̸��Դϴ�.
    // �ϳ��� �޸� ������ 2���� �̸��� �����ϴ� ���°� �Ǵ� ���Դϴ�.
    int a = 10;
    int & tvalue = a;
    int & ref = tvalue;
    // �����ڴ� �ʱ�ȭ�� ���� ������ ����� �� �����ϴ�.
    // �����ڴ� NULL�ε� �ʱ�ȭ�� �� �� �����ϴ�.
    // int & va = NULL;
    Function(a);
    cout << a << endl;
    */

    // �ζ��� �Լ�
    /*
    // �Լ� �ȿ� �ִ� ������ ������ �� ����ؾ� �մϴ�.
    // �Լ��� ���� �� ȣ��Ǵ� �Լ��� ��� �ζ��� �Լ��� ����ϸ�
    // ������ ũ�Ⱑ Ŀ���� �˴ϴ�.
    Function();
    */

    // ��ü ���� ���α׷����̶�?
    // ���� ���� ��ü�鳢�� ��ȣ�ۿ��� ���� 
    // ������ �����ϴ� ���α׷��� ����Դϴ�.

    // ĸ��ȭ
    /*
    // Ŭ������ �Ӽ�(����)�� ���(�Լ�)�� �ϳ��� ���� ����
    // ���� ���� ������ �Ϻθ� ���ο� ���߾� �����ϴ� �Ӽ��Դϴ�.
    cellPhone iPhone;
    iPhone.SetVolume(10);
    cout << iPhone.GetVolume() << endl;
    */

    return 0;
}