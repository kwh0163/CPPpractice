#pragma once
#include<iostream>

//클래스
//특정 객체애 속성과 기능을 정의한 집합체
class Player
{
	//접근 지정자
	//클래스 외부에서 접근 가능 멤버(변수, 함수)와
	//클래스 외부에서 접근이 허용되지 않는 멤버를 구분하는 지정자

	//public
	//클래스 내부와 자기가 상속하고 있는 클래스 그리고
	//클래스 외부에서 접근을 허용할 수 있는 지정자
	//private
	//클래스 내부에서만 접근이 허용되고, 자기가 상속하는 클래스와
	//클래스 외부에서 접근할 수 없는 지정자
	//protected
	//클래스 내부와 자기가 상속하는 클래스까지만 접근을 허용하고
	//클래스 외부에서 접근할 수 없는 지정자

	//클래스의 경우 접근 지정자를 해주지 않으면 기본적으로 private로 설정
public:
	int health;
	float size;
	std::string name;

private:
	void Attack()
	{
		std::cout << "공격" << std::endl;
	}
};


int main()
{
	//C++ 입출력
	/*
	char alphabet = 'B';
	int value = 10;
	float variable = 10.5;

	//삽입 연산자(<<) : 출력 스트림 개체에 바이트로 보내는 연산자
	std::cout << "alphabet 변수의 값 : " << alphabet << std::endl;
	std::cout << "value 의 값 : " << value << std::endl;
	std::cout << "variable의 값 : " << variable << std::endl;

	//추출 연산자 (>>)
	//입력한 데이터를 입력 스트림에서 추출하여
	//오른쪽에 위치한 변수에 값을 저장합니다.

	//std::cin : 입력하기 위한 객체
	std::cin >> value;
	std::cout << "value 의 값 : " << value << std::endl;

	std::cout << "두 번째 안녕하세요.";

	//bool = 참과 거짓을 나타내는 자료형
	bool value = true;
	*/

	//범위 기반 for문
	/*
	//시작과 끝점을 알려주지 않아도 데이터의 크기에 따라
	//끝가지 순환해주는 반복문

	int array[] = { 1,2,3,4,5 };

	//element :: 변수 이름
	//array : 데이터 리스트 (배열, 벡터, 리스트)
	for (int element : array)
	{
		//범위 기반 for문 단점
		//1.for문 내에서 index 정보가 존재하지 않습니다.
		//2.for 문 안에서 배열의 요소를 변경할 수 없습니다.

		//값을 지정된 형태로 증가시키는 것은 가능합니다.
		//배열 안에 있는 값을 전체 초기화도 가능합니다.

		//element : call by value 형태로 값만 존재합니다.
		element = 10;
		std::cout << element << std::endl;
	}

	std::cout << "--------------" << std::endl;

	for (int element : array)
	{
		std::cout << element << std :: endl;
	}
	*/

	//자료형 추론
	/*
	//변수나 함수를 선언하고 연산이 이루어질 때 컴파일러가 자동으로
	//자료형을 추론해주는 기능

	//자료형 추론은 변수를 초기화하지 않으면 사용할 수 없습니다.
	auto value = 10;
	auto decimal = 20.6;

	std::cout <<"value 변수의 값 : " << value << std::endl;
	std::cout << "decimal 변수의 값 : " << decimal << std::endl;
	*/

	//클래스
	Player Kim;

	Kim.health = 100;
	Kim.size = 10.65;
	Kim.name = "kim";

	//Kim.Attack();

	std::cout << Kim.health << " " << Kim.size << " " << Kim.name << std::endl;


	return 0;
}