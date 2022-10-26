#pragma once
#include<iostream>
#include<Windows.h>
#include<time.h>
#include<conio.h>
#include<vector>

using namespace std;

//가상소멸자
/*
//가상으로 선언한 소멸자이다
//가상 소멸자는 존재하지만, 가상 생성자는 존재하지 않는다.

class A
{
public:
	A()
	{
		cout << "A 클래스 생성" << endl;
	}

	virtual ~A()
	{
		cout << "A 클래스 소멸" << endl;
	}
};

class B : public A
{
public:
	B()
	{
		cout << "B 클래스 생성" << endl;
	}

	virtual ~B()
	{
		cout << "B 클래스 소멸" << endl;
	}
};
*/

//프렌드
/*
//클래스의 멤버 함수는 아니지만, 클래스에 friend 라고 선언하게 되면
//클래스의 멤버 함수처럼 private 멤버에 접근할 수 있는 기능이다.

class PeopleA
{
private:
	int age;

	friend void Information(PeopleA a)
	{
		cout << "PeopleA 클래스 정보" << endl;
	}

	//친구로 선언할 클래스의 이름을 선언한다.

	//friend 키워드는 public, private, protected
	//어디에서든 사용가능하다.
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
	//가상 소멸자
	/*
	//가상 소멸자가 호출되면 상속 구조의 맨 아래에 있는 하위 클래스의
	//소멸자가 대신 호출되면서 상위 클래스의 소멸자가 순서대로 호출된다.
	A * aptr = new B();

	delete aptr;
	*/

	//프렌드
	/*
	PeopleA a(20);
	Information(a);
	PeopleB b;
	b.FriendInformation(a);
	*/

	//곱셈
	/*
	int a,b;
	cin >> a >> b;
	cout << a * (b % 10) << endl << a * ((b / 10) % 10) << endl << a * (b / 100) << endl << a * b;
	*/
	//소인수분해
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

	//중복되지 않는 랜덤값

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

