#pragma once
#include<iostream>
#include<Windows.h>
#include<time.h>
#include<conio.h>
#include<vector>

using namespace std;

//����Ҹ���
/*
//�������� ������ �Ҹ����̴�
//���� �Ҹ��ڴ� ����������, ���� �����ڴ� �������� �ʴ´�.

class A
{
public:
	A()
	{
		cout << "A Ŭ���� ����" << endl;
	}

	virtual ~A()
	{
		cout << "A Ŭ���� �Ҹ�" << endl;
	}
};

class B : public A
{
public:
	B()
	{
		cout << "B Ŭ���� ����" << endl;
	}

	virtual ~B()
	{
		cout << "B Ŭ���� �Ҹ�" << endl;
	}
};
*/

//������
/*
//Ŭ������ ��� �Լ��� �ƴ�����, Ŭ������ friend ��� �����ϰ� �Ǹ�
//Ŭ������ ��� �Լ�ó�� private ����� ������ �� �ִ� ����̴�.

class PeopleA
{
private:
	int age;

	friend void Information(PeopleA a)
	{
		cout << "PeopleA Ŭ���� ����" << endl;
	}

	//ģ���� ������ Ŭ������ �̸��� �����Ѵ�.

	//friend Ű����� public, private, protected
	//��𿡼��� ��밡���ϴ�.
	friend class PeopleB;


public:
	int height = 170;
	PeopleA(int age)
	{
		this->age = age;
	}
};

class PeopleB
{
public:
	void FriendInformation(PeopleA people)
	{
		cout << people.age << endl;
	}
};
*/

int main()
{
	//���� �Ҹ���
	/*
	//���� �Ҹ��ڰ� ȣ��Ǹ� ��� ������ �� �Ʒ��� �ִ� ���� Ŭ������
	//�Ҹ��ڰ� ��� ȣ��Ǹ鼭 ���� Ŭ������ �Ҹ��ڰ� ������� ȣ��ȴ�.
	A * aptr = new B();

	delete aptr;
	*/

	//������
	/*
	PeopleA a(20);
	Information(a);
	PeopleB b;
	b.FriendInformation(a);
	*/

	//����
	/*
	int a,b;
	cin >> a >> b;
	cout << a * (b % 10) << endl << a * ((b / 10) % 10) << endl << a * (b / 100) << endl << a * b;
	*/
	//���μ�����
	/*
	int a;
	cin >> a;
	for (int i = 2; a > 1 ;i++)
	{
		if (a % i == 0)
		{
			a /= i;
			cout << i << endl;
			i--;
		}
	}
	*/

	//�ߺ����� �ʴ� ������

	srand(time(NULL));

	vector<int> array;

	int value = rand() % 10 + 1;
	array.push_back(value);
	cout << value << endl;

	for (int i = 1; i < 10; i++)
	{
		value = rand() % 10 + 1;

		for (int j = 0; j < array.size(); j++)
		{
			if (array[j] == value)
			{
				i--;
			}
			else
			{
				array.push_back(value);
				cout << value << endl;
				break;
			}
		}



	}



	return 0;
}

