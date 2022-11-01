#include<iostream>

using namespace std;

//업 캐스팅

//하위 클래스가 상위 클래스로부터 암묵적으로 형변환되는 캐스팅이다.

//상위 클래스 타입의 포인터로 하위 클래스를 가리킬 수 있다.

class Parent
{
public:
	int x = 10;
	int y = 200;
};

class Child : public Parent
{
public:
	int z = 99;
};


//클래스에 대한 정보를 검색하는 함수
void Search(Parent * ptr)
{
	for (int i = 0; i < 5; i++)
	{
		cout << "클래스 x의 값 : " << ptr[i].x << endl;
		cout << "클래스 y의 값 : " << ptr[i].y << endl;
	}
}

int main()
{
	//업캐스팅
	/*
	Parent* parentPtr = new Child();
	parentPtr->x = 10;
	parentPtr->y = 20;
	static_cast<Child*>(parentPtr)->z = 20;
	*/

	//Parent* ptr1 = new Parent[5];
	Child* chPtr1 = new Child[5];

	Search(chPtr1);

	delete chPtr1;
	//다운 캐스팅
	/*
	//상속관계에서 업캐스팅했던 상위 클래스 인스턴스가
	//하위 클래스로 형 변환하는 과정이다.

	//하위 클래스의 포인터로 부모 클래스에 접근할  수 없다.
	Child* childPtr = (Child*) new Parent();
	childPtr->x = 10;
	childPtr->y = 20;
	childPtr->z = 30;
	*/

	return 0;
}