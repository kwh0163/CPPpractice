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
#pragma region string���ڿ�
	/*
	string name = "MyName";
	string * name1 = new string(name);

	cout << "name ������ �� : " << name << endl;
	cout << "name1 ������ �� : " << *name1 << endl;

	//append : string ��ü�� ���� ���� �ִ� �޸𸮿� �����͸� �߰��Ѵ�
	name.append("11");

	delete name1;

	name1 = nullptr;

	//nullptr Null�����Ͷ�
	//�� �̻� �ƹ� ��ġ�� �������� �ʴ� �������̴�.
	if (name1 == nullptr)
	{
		name1 = new string("YourName");
	}

	cout << "name ������ �� : " << name << endl;
	cout << "name1 ������ �� : " << *name1 << endl;
	*/
#pragma endregion

	//���� 1byte
	//�ѱ� 2byte
	//Ư����ȣ 3byte
	vector<string> data = {"��", "��", "��", "��","��" };
	data.push_back("��");

	//resize : vector �޸��� ũ�⸦ �����Ѵ�.
	//data.resize(10);

	//size()
	//������ ������ ������ ��ȯ�մϴ�.
	cout << "size() : " << data.size() << endl;

	//capacity()
	//�Ҵ�� �޸� ������ ũ�⸦ ��ȯ�մϴ�.
	//���� �޸��� 1.5�踦 ������Ű�� �ȴ�.
	//�̷��� �޸𸮸� �Ҵ��ϴ� ������ push_back�� �Ͼ ������ �����Ҵ���
	//�ϰ� �Ǹ� ��ȿ�����̱� ������ �̸� ���ص� ��ŭ �����Ҵ��� �ѹ��� �ϴ� ���̴�.
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