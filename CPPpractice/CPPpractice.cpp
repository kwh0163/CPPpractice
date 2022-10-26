#include<iostream>
#include<vector>
#include<string>

using namespace std;

//다이아몬드 상속
/*
class A
{
public:
	A()
	{
		cout << "A 클래스 호출" << endl;
	}
};

class B : virtual public A
{
public:
	B()
	{
		cout << "B 클래스 호출" << endl;
	}
};

class C : virtual public A
{
public:
	C()
	{
		cout << "C 클래스 호출" << endl;
	}
};

class D : public B, public C
{
public:
	
	D()
	{
		cout << "D 클래스 호출" << endl;
	}
};
*/

int main()
{
	//다이아몬드 상속
	/*
	//하나의 자식 클래스가 상속받는 서로 다른 부모 클래스들이
	//같은 조부모 클래스를 상속받는 구조이다.

	D d;
	*/

	//나머지
	/*
	int a;
	int count = 10;
	vector<int> array;
	for (int i = 0; i < 10; i++)
	{
		cin >> a;
		a %= 42;
		array.push_back(a);
	}

	for (int i = 0; i < 9; i++)
	{
		for (int j = i + 1; j < 10; j++)
		{
			if (array[i] == array[j])
			{
				count--;
				break;
			}
		}
	}
	cout << count;
	*/

	



	return 0;
}