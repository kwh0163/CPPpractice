#include<iostream>
using namespace std;

//가상함수
/*
class Animal
{
private: //속성
	float weight;


public:
	//가상 함수란
	//상속하는 클래스 내에 같은 함수로 재정의될 수 있는 함수

	//가상 함수 규칙
	//-> 가상 함수는 public으로 선언되어야 한다.
	//-> 가상 함수는 static(정적)으로 선언될 수 없다.
	//-> 가상 함수는 실행 시간에 다형성을 형성하기 위해
	//   기본 클래스의 포인터 또는 참조를 통해 접근해야 한다.
	//-> 가상 함수는 상위 클래스와 하위 클래스의 함수의 형태가
	//   동일해야 한다.

	virtual void Sound() // <- 가상 함수 선언
	{
		cout << "동물의 소리" << endl;
	}
	virtual void Attack()
	{
		cout << "동물의 공격" << endl;
	}
};

class Cat : public Animal
{
	//상위 클래스에 있는 Sound() 함수를 사용하기 위해서는
	//같은 이름으로 정의해주어야 합니다.
public:
	void Sound()
	{
		cout << "meow" << endl;
	}
	void Attack()
	{
		cout << "scratch" << endl;
	}
};

class Dog : public Animal
{
public:
	void Sound()
	{
		cout << "woof" << endl;
	}
	void Attack()
	{
		cout << "bite" << endl;
	}

};
*/

//오버로딩
//같은 이름의 함수를 여러 개 만들 수 있는 기능

//함수의 오버로딩은 매개변수의 갯수와 매개변수의 타입(자료형)으로
//설정할 수 있습니다.
void Calculator(int x)
{
	cout << "int 계산기(매개 변수 1개)" << endl;
	cout << x << endl;
}

int Calculater(int x, int y)
{
	cout << "int 계산기" << endl;
	cout << x + y << endl;
}

void Calculater(float x, float y)
{
	cout << "float 계산기" << endl;
	cout << x + y << endl;
}


int main()
{
	//다형성
	/*
	//객체가 여러 형태를 받아들일 수 있는 성질
	//상황에 따라 다른 의미를 부여할 수 있는 속성

	//바인딩
	//프로그램 소스에 사용된 이름이나 식별자 그리고 함수들에 대해 
	//값 또는 속성을 확정하는 과정

	//컴파일 시점에 주소값이랑 10이라는 값을 확정하는 과정
	int a = 10;

	//정적 바인딩
	//컴파일 시점에 이루어지는 바인딩
	//컴파일이 끝나면 결정된 속성들은 변경이 불가능합니다.

	//동적 바인딩
	//실행시간에 이루어지는 바인딩
	//실행시간에 필요한 객체의 함수를 호출할 수 있으며, 유연성을
	//가질 수 있습니다.

	//일반 함수는 정적 바인딩으로 컴파일 시점에 호출할 함수가 결정됩니다.

	//가상 함수는 실행 시간에 원하는 함수를 호출할 수 있습니다.
	//가상 함수는 컴파일 시점에 함수를 결정하지 않고 호출되는 시점에
	//함수를 호출합니다.

	Animal* animal1 = new Cat; // <- 실행 시간에 컴파일러가 인식
	Animal* animal2 = new Dog; // <- 실행 시간에 컴파일러가 인식

	animal1->Sound();
	animal1->Attack();

	animal1 = animal2;

	animal1->Sound();
	animal1->Attack();
	animal2->Sound();
	*/

	//함수의 오버로딩
	Calculater(29, 14);
	Calculater(12.45f, 36.12f);

	return 0;
}