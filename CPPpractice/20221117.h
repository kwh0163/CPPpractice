#pragma once
#include<iostream>
using namespace std;

void Plus(int x, int y)
{
	cout << x + y << endl;
}

void Effect(int x, int y)
{
	cout << x * y << endl;
}

void Count(int x, int y)
{
	cout << x / y << endl;
}

int main() {
	//��ǰ ����(bubble sort)
	/*
	//���� ������ �� ������ ��Ҹ� ���ϰ�, ���ǿ� ����
	//�ʴٸ� �ڸ��� ��ȯ�ϴ� ���� �˰����̴�.

	//��ǰ ������ �ð� ���⵵
	//O(n^2)

	//��ǰ ���Đl ���� ���⵵
	// O(n)
	//������ �޸� ������ �ʿ����� ���� ���ڸ� �����̴�.

	int data[5] = { 2,5,4,1,3 };
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4 - i; j++) {
			if (data[j] > data[j + 1]) {
				int temp = data[j];
				data[j] = data[j + 1];
				data[j + 1] = temp;
			}
		}
	}
	for (int iter : data)cout << iter << endl;
	*/

	//������ �켱����
	/*
	//���� �� ��ǻ�� ���α׷��ֿ��� ������ �켱������
	//��ȣ�ϰ� �ؼ������� ���Ŀ��� ��� ������
	//���� ����� ������ �����ϴ� ��Ģ�̴�.

	char charArray[6] = { "Korea" };
	char* charPtr = charArray;

	cout << (char)(*(charPtr + 1))<< endl;

	//1����
	//����++, ����-- : ���� ���� ������
	//() : �Լ� ȣ�� ������
	//[] : �迭 ÷��
	//. : ��� ������
	//-> : ��� ������ ������

	//2����
	//++����, --���� : ���� ���� ������
	//+,- : ���� ������
	//! : �� ������
	//~ : ��Ʈ������
	//*������ ���� : ������ ������
	//&���� : ������ �ּ�

	//3����
	//* : ����
	// / : ������
	//% : ������

	//4����
	//+ : ����
	//- : ����

	//5����
	//<<,>> ����Ʈ ������

	//6����
	//<,<=,>=,> �񱳿�����
	*/

	//�Լ� ������ �迭
	void(*funcPtr[3])(int, int);
	funcPtr[0] = Plus;
	funcPtr[1] = Effect;
	funcPtr[2] = Count;

	for (int i = 0; i < 3; i++)
	{
		funcPtr[i](10, 20);
	}



	return 0;
}