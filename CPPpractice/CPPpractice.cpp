#include<iostream>
#include<vector>

using namespace std;

//템플릿 (클래스와 함수)

//함수 템플릿
/*
//데이터의 형식에 의존하지 않고, 하나의 값이 여러 다른 데이터
//타입을 가질 수 있는 기능이다.

//컴파일러는 미리 함수의 형틀을 기억한 다음 함수가 호출될 때
//실제 함수를 호출한다.

//함수 템플릿은 선언이기 때문에 메모리 할당과 구체화되어 있지
//않은 상태이다.

template <typename T>
void Calculator(T x, T y)
{
	cout << "x의 값 : " << x << endl << "y의 값 : " << y << endl;
}
*/

//클래스 템플릿
/*
template<class T>
class Game
{
private:
	T num1;
	T num2;

public:
	Game(T _num1, T _num2)
	{
		num1 = _num1;
		num2 = _num2;
	}

	T GetNumber1()
	{
		return num1;
	}

	T GetNumber2()
	{
		return num2;
	}
};
*/

//템플릿 특수화
/*
//템플릿에서 미리 지정해놓은 타입이 들어왔을 경우
//따로 처리하고 싶을 때 사용하는 템플릿 기능이다.
template<typename T>
void Add(T x, T y)
{
	cout << "x의 값 : " << x << endl;
	cout << "y의 값 : " << y << endl;

}

template<> // <= 템플릿의 특수화
void Add(int x, int y) // <= int매개변수 처리함수
{

}
*/

int main()
{
	//함수 템플릿
	/*
	Calculator(10, 20);

	Calculator(10.5f, 6.7f);

	Calculator('A', 'B');
	*/

	//클래스 템플릿
	/*
	Game<int> game1(10,20);
	cout << game1.GetNumber1() << endl;
	cout << game1.GetNumber2() << endl;

	Game<float> game2(8.5f, 9.6f);
	cout << game2.GetNumber1() << endl;
	cout << game2.GetNumber2() << endl;
	*/

	//템플릿 특수화
	/*
	Add(10.5f, 6.7f);
	*/

	//STL(Standard Template Library)
	//표준 템플릿 라이브러리
	//자료구조와 알고리즘을 Template 형태로 제공하는 라이브러리

	//STL의 구성

	//Vector
	//동적으로 원소를 추가할 수 있으며, 크기가 자동으로 늘어나는
	//컨테이너이다.
	vector<int> data;

	//vector의 push_back은 뒤에서부터 데이터를 넣어준다.
	data.push_back(10);
	data.push_back(5);
	
	//vector의 pop_back은 뒤에서부터 데이터를 뺀다.
	data.pop_back();

	cout << "data의 크기 : " << data.size() << endl;
	//vector의 front는 맨 앞에 있는 원소를 출력한다.
	cout << data.front() << endl;

	//vector 같은 경우에는 맨 앞에 원소를 추가할 수 없습니다.

	for (int i = 0; i < data.size(); i++)
	{
		cout << data[i] << endl;
	}





	return 0;
}