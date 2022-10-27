#include<iostream>
#include<memory>

using namespace std;

//스마트 포인터란
/*
//포인터처럼 동작하는 클래스 템플릿으로 
//사용이 끝난 메모리를 자동으로 해제하는 포인터
class Player
{
public:
	Player()
	{
		cout << "Player 클래스 생성" << endl;
	}
	~Player()
	{
		cout << "Player 클래스 소멸" << endl;
	}
};
*/

class Person
{
public:
	//shared_ptr로 선언할 경우 순환 참조가 발생한다.
	//순환 참조 발생시 자동으로 해제 되지 않는다.
	//weak_ptr로 선언할 경우 순환 참조를 예방할 수 있다.

	weak_ptr<Person> person;


	Person()
	{
		cout << "Person 클래스 생성" << endl;
	}
	~Person()
	{
		cout << "Person 클래스 소멸" << endl;
	}
};

int main()
{
	//shared_ptr 포인터
	/*
	//어떤 하나의 객체를 참조하는 스마트 포인터의 갯수를 참조하는 포인터
	//참조하고 있는 스마트 포인터의 갯수를 참조 카운트라고 한다.

	//참조 카운트란
	//해당 메모리를 참조하는 포인터가 몇개가 있는지 나타내는 값
	//참조하는 포인터가 추가되면 1씩 증가하고 참조하는 포인터가 끊어지면 1씩 감소한다.

	//첫번째 초기화 하는 방법
	shared_ptr<int> ptr1(new int(5));
	//두번째 초기화 하는 방법
	shared_ptr<int> ptr = make_shared<int>(10);

	cout << "ptr1 : " << *ptr1 << endl;
	cout << "ptr1 참조 카운트 : " << ptr1.use_count() << endl;

	shared_ptr<int> ptr2 = ptr1;

	cout << "ptr1 참조 카운트 : " << ptr1.use_count() << endl;

	cout << "ptr : " << *ptr << endl;
	cout << "ptr 참조 카운트 : " << ptr.use_count() << endl;

	shared_ptr<Player> player = make_shared<Player>();
	*/

	//unique_ptr 포인터
	/*
	//하나의 스마트 포인터만 가리킬 수 있는 포인터
	//shared_ptr 참조 카운트를 1을 넘길 수 없다.


	unique_ptr<int> ptr1 = make_unique<int>(10);

	cout << "ptr1 : " << *ptr1 << endl;

	//ptr1이 가지고 있던 메모리 소유권(동적으로 할당한 메모리)를
	//ptr2에게 메모리의 소유권을 넘겨주는 과정이다.
	unique_ptr<int> ptr2 = move(ptr1);
	*ptr2 = 100;

	cout << "ptr2 : " << *ptr2 << endl;

	//reset : 메모리 영역을 삭제할 수 있는 함수
	unique_ptr<Player> player = make_unique<Player>();
	player.reset();

	unique_ptr<Player> player2 = move(player);
	player2.reset();
	*/

	//weak_ptr 포인터
	
	//하나 이상의 shared_ptr 인스턴스가 소유하는 객체에 대한 접근을
	//제공하지만, 참조 카운트에 포함되지 않는 스마트 포인터이다.
	
	//만약에 서로가 상대를 가리키는 shared_ptr을 가지고 있다면,
	//참조 횟수는 절대 1 이하로 떨어지지 않는다.
	//shared_ptr이 해제가 되지 않는 문제가 발생한다.
	
	//순환 참조
	//서로 상대를 참조하는 상황

	//shared_ptr 인스턴스 사이에 순환 참조를 제거하기 위해 사용하는
	//스마트 포인터이다.

	shared_ptr<Person> obj1 = make_shared<Person>();
	shared_ptr<Person> obj2 = make_shared<Person>();

	cout << "obj1의 참조 카운트 : " << obj1.use_count() << endl;
	cout << "obj2의 참조 카운트 : " << obj2.use_count() << endl;

	obj1->person = obj2;
	obj2->person = obj1;

	cout << "obj1의 참조 카운트 : " << obj1.use_count() << endl;
	cout << "obj2의 참조 카운트 : " << obj2.use_count() << endl;

	return 0;
}