#include<iostream>
#include<vector>
#include<conio.h>
#include<Windows.h>

using namespace std;

#define UP 72
#define DOWN 80
#define LEFT 75
#define RIGHT 77

void gotoxy(int x, int y)
{
	COORD pos = { 2*x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

int GetKey()
{
	int c;

	if (_kbhit()) {
		c = _getch();
		if (c == -32) {
			c = _getch();
			return c;
		}
	}
	else return 0;
}

int main()
{
	//std::string
#pragma region string문자열
	/*
	string name = "MyName";
	string * name1 = new string(name);

	cout << "name 변수의 값 : " << name << endl;
	cout << "name1 변수의 값 : " << *name1 << endl;

	//append : string 객체에 가장 끝에 있는 메모리에 데이터를 추가한다
	name.append("11");

	delete name1;

	name1 = nullptr;

	//nullptr Null포인터란
	//더 이상 아무 위치를 참조하지 않는 포인터이다.
	if (name1 == nullptr)
	{
		name1 = new string("YourName");
	}

	cout << "name 변수의 값 : " << name << endl;
	cout << "name1 변수의 값 : " << *name1 << endl;
	*/
#pragma endregion

	//영어 1byte
	//한글 2byte
	//특수기호 3byte
	vector<string> data = {"←", "→", "↑", "↓","↑" };
	data.push_back("←");

	//resize : vector 메모리의 크기를 변경한다.
	//data.resize(10);

	//size()
	//현재의 원소의 갯수를 반환합니다.
	cout << "size() : " << data.size() << endl;

	//capacity()
	//할당된 메모리 공간의 크기를 반환합니다.
	//기존 메모리의 1.5배를 증가시키게 된다.
	//이렇게 메모리를 할당하는 이유는 push_back이 일어날 때마다 동적할당을
	//하게 되면 비효율적이기 때문에 미리 정해둔 만큼 동적할당을 한번에 하는 것이다.
	cout << "capacity() : " << data.capacity() << endl;

	int x = 0;

	/*while (true)
	{
		for (string element : data)
		{
			cout << element << " ";
		}

		x = GetKey();

		if (x == UP)
		{
			data.pop_back();
		}
		else if (x == DOWN)
		{
			data.pop_back();
		}
		else if (x == LEFT)
		{

		}
		else if (x == RIGHT)
		{

		}
		system("cls");

	}*/

	
	
	return 0;
}