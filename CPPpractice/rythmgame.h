#pragma once
#include<iostream>
#include<vector>
#include<conio.h>
#include<Windows.h>

using namespace std;

#define UP 72
#define DOWN 80
#define LEFT 75
#define RIGHT 77
#define ENTER 13

void gotoxy(int x, int y)
{
	COORD pos = { 2 * x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}
int main()
{
	bool Game = true;
	char n;
	int a;
	int HP = 3;
	string s;
	srand(time(NULL));

	vector<string> data;

	while (Game)
	{
		system("cls");
		if (data.size() == 0)
		{
			for (int i = 0; i < 5; i++)
			{
				a = rand() % 4;
				switch (a)
				{
				case 0:
					data.push_back("ก่");
					break;
				case 1:
					data.push_back("ก้");
					break;
				case 2:
					data.push_back("กๆ");
					break;
				case 3:
					data.push_back("ก็");
					break;
				}
			}
		}
		if (HP == 0) Game = false;
		if (_kbhit()) {
			n = _getch();
			if (n == ENTER) Game = false;
			else if (n == -32) {
				n = _getch();
				switch (n)
				{
				case UP:
					if (data.back() == "ก่") data.pop_back();
					else HP--;
					break;
				case DOWN:
					if (data.back() == "ก้") data.pop_back();
					else HP--;
					break;
				case LEFT:
					if (data.back() == "ก็") data.pop_back();
					else HP--;
					break;
				case RIGHT:
					if (data.back() == "กๆ") data.pop_back();
					else HP--;
					break;
				}
			}
		}
		cout << "HP : " << HP << "\n";
		for (int i = data.size() - 1; i >= 0; i--)
		{
			cout << data[i] << "\t";
		}
		cout << "\n";
	}

	Sleep(100);

	return 0;
}