#pragma once
#include<iostream>

using namespace std;

//멤버 이니셜라이저
//생성자의 역할을 대신하여 초기화할 수 있는 목록이다.

//static_cast
//기본 자료형의 형변환 및 상위 클래스에서 하위 클래스로의 포인터 변환 연산에
//사용되는 연산자이다.
//컴파일 시점에 형변환을 검토한다.

class Person
{
public:
	int x = 10;

	void Count()
	{
		cout << "Count" << endl;
	}

	//멤버 이니셜라이저를 사용하면 초기화의 대상을 명확히 인식할 수 있다.
	//그리고 선언과 동시에 초기화가 이루어지기 때문에 바이너리 코드가 생성되므로
	//속도적인 면에서도 이점을 가질 수 있다.

	/*Person(int _x, int _y) : x(_x), y(_y)
	{
		cout << "x의 값은 : " << x << endl;
		cout << "y의 값은 : " << y << endl;
	}*/
};
class Child : public Person
{
public:
	float b = 3.65f;
	void ChildInfo()
	{
		cout << "Child 클래스입니다." << endl;
		cout << b << endl;
	}
};
class Child2 : public Person
{
public:
	int c = 5;
	void ChildInfo()
	{
		cout << "Child2 클래스입니다." << endl;
		cout << c << endl;
	}
};

//dynamic_cast
//캐스팅을 성공할 경우 주소값을 반환하고, 실패할 경우 nullptr을 반환하는 캐스팅이다.

//dynamic_cast의 주의점
//1. 객체 포인터간의 형 변환만 가능하다.
//2. vertual 키워드가 단 하나라도 존재하는 상속관계에서만 가능하다.

class A
{
public:
	virtual void Function()
	{
		cout << "A 클래스" << endl;
	}
};

class B : public A
{
public:
	void Function()
	{
		cout << "B 클래스" << endl;
	}
};

int main()
{
	//멤버 이니셜 라이저
	//Person person1(10, 20);

	//static_cast
	/*
	//Person* ptr1 = new Child();<--형변환은 잘못됬지만 메모리크기가
								  //같아 변수가 잘못 지정됨
	Person* ptr1 = new Child2();
	//static_cast는 잘못된 상속관계의 형변환을 오류를 잡아주지 않는다.
	Child2* cptr1 = static_cast<Child2*>(ptr1);
	cptr1->ChildInfo();

	//논리적으로 변환 가능한 타입을 변환한다.
	//static_cast<바꾸려고 하는 타입>(대상);
	//컴파일 시점에 형변환에 대한 타입 오류를 표시한다.

	//static_cast가 없다면 기본 자료형이 클래스로 형변환되는 과정이 발생한다.
	//-->Child* c = (Child*)value;

	delete ptr1;
	*/

	//dynamic_cast
	A* aptr = new A();
	A* bptr = new B();
	B* bptr2 = new B();
	B* bptr3 = nullptr;

	//컴파일 오류 : 타입변환 불가
	//bptr3 = aptr;

	//컴파일 성공 : 런타임에 타입변환에 실패하면 NULL을 반환한다.
	bptr3 = dynamic_cast<B*>(aptr);


	delete aptr;
	delete bptr;
	delete bptr2;
	delete bptr3;


	return 0;
}