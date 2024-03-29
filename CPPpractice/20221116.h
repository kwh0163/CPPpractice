#pragma once
#include<iostream>
using namespace std;

//클래스의 메모리 구조
class Object {
	//클래스 오프셋
	//동일한 오브젝트 안에서 처음부터 주어진 요소나
	//지점까지의 변위차를 정수형으로 나타내는 값이다.

	//ex) A[6] = "ABCDE";
	//C라는 값은 A 시작점에서 2의 오프셋을 가지는 값이다.

public:
	char charData;
	int intData;
	double doubleData;

	//static 변수는 클래스 내부에 메모리가 잡히지 않는다.
	static int staticData;

	void StaticDataFunction()
	{
		staticData++;
	}


};

//클래스 내부에 있는 static 변수는 클래스 외부에서 전역 변수처럼 초기화를 해야한다.
int Object::staticData = 0;

int main() {
	//Object object;
	Object object1;
	Object object2;
	Object object3;

	object1.StaticDataFunction();
	object2.StaticDataFunction();
	object3.StaticDataFunction();
	cout << Object::staticData << endl;



	//클래스의 메모리
	/*
	object.charData = 'A';
	object.intData = 10;
	object.doubleData = 30.5;

	//클래스의 메모리 크기를 결정하는 것은 멤버 변수 중에서
	//가장 큰 자료형의 배수가 되도록 설정한다.
	cout << "Object 클래스의 크기 : " << sizeof(Object) << endl;
	*/

	//클래스의 오프셋
	/*
	cout << (int)(&(((Object*)0)->charData)) << endl;
	cout << (int)(&(((Object*)0)->intData)) << endl;
	cout << (int)(&(((Object*)0)->doubleData)) << endl;
	*/






	return 0;
}