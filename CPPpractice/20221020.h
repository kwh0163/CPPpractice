#pragma once
#include <iostream>

using namespace std;

// ���� ����
// �������� �ƴ� �ν��Ͻ��� ���� �����Ͽ� �������� �����ϴ� ����Դϴ�.
/*
class Object
{
// �Ӽ�
private :
    // m(���)_�����̸�
    int m_position;
    float m_size;
    int * m_memory;
public :
   // �����ڴ� public���� ���ּž� �մϴ�.
    Object(int postion, float size)
    {
        m_position = postion;
        m_size = size;
        m_memory = new int(10);
        cout << "memory �� : " << *m_memory << endl;
        cout << "position �� : " << m_position << endl;
        cout << "size �� : " << m_size << endl;
    }
    // ���� ������
    // ���� Ŭ������ ��ü�κ��� '����'�ؼ� ���ο� ��ü��
    // �����ϴ� �������Դϴ�.
    // ���� �����ڿ� �μ��� &(���۷���)�� �޴� ����
    // ���ο� ��ü�� ������ �� ����� ������� ������
    // �����ϱ� ���� �����մϴ�.
    // const ����� �����͸� ��ȣ�ϱ� ���� ���ȭ�� �մϴ�.
    Object(const Object & copyObject)
    {
        m_memory = new int(*copyObject.m_memory);
        m_position = copyObject.m_position;
        m_size = copyObject.m_size;
        cout << "memory �� : " << *m_memory << endl;
        cout << "position �� : " << m_position << endl;
        cout << "size �� : " << m_size << endl;
    }
    // ��ü�� �Ҹ�� �� �������� �Ҵ��� �޸� ������
    // �����մϴ�.
    ~Object()
    {
        delete m_memory;
    }
};
*/

// �⺻ ������
// ���α׷��Ӱ� ������ �����ڰ� ���� ���
// �����Ϸ��� �ڵ����� �����ϴ� �������Դϴ�.
class Book
{
public:
    int page;
    string name;

    // �⺻ �������� ��� �����ڰ� �ϳ��� ����Ǿ� �ִٸ�
    // �⺻ �����ڰ� �ڵ����� �������� �ʽ��ϴ�.
    // Book() {}; <- �����ڰ� ���� �⺻ �����ڸ� �����մϴ�.

    Book()
    {
        cout << "������ ȣ��" << endl;
    }
};

class Cover : Book
{

};

int main()
{
    // ���� �����?
    /*
    // ���� �����ϴµ� �ν��Ͻ��� �޸𸮿� ���� �������� �ʴ� �����Դϴ�.
    // �׷��� ������ �� ��ü�� �����ϴ� ���� �ƴ϶� �ּҰ��� �����Ͽ�
    // ���� �޸𸮸� ����Ű�� �ϴ� �����Դϴ�.

    int * a = new int(10); // �������� �޸� ������ �Ҵ��մϴ�.
    int * b = new int(20);
    cout << "a�� �� : " << *a << endl;
    cout << "b�� �� : " << *b << endl;
    // ���� ���簡 �߻��մϴ�.
    a = b;

    *b = 100;
    cout << "a�� �� : " << *a << endl;
    cout << "b�� �� : " << *b << endl;
    delete a;
    delete b;

    // �����ڿ� �Ű������� �ִٸ� Ŭ������ �ν��Ͻ�(�޸� �Ҵ�)�� ��
    // Ŭ������ �μ��� �־��־�� �մϴ�.
    Object cat1(10,5.5);
    Object cat2 = cat1;
    */

    Book book1;
    Cover cover;

    return 0;
}