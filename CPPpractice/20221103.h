#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<list>
using namespace std;

int main()
{
	//STL����Ʈ
	////�� ��尡 �����Ϳ� �����͸� ������ �� �ٷ� ����� �������
	////�����͸� �����ϴ� �ڷᱸ���̴�.
	//list<int> list1;

	//list1.push_front(5); //push_front : �� �տ� �����͸� �߰�
	//list1.push_back(10); //push_back : �� �ڿ� �����͸� �߰�
	//list1.push_back(20);
	//list1.push_back(1);
	//list1.push_back(2);
	//list1.push_back(55);
	//list1.push_back(100);
	//list1.pop_back(); //�� �ڿ� �����͸� ����
	//list1.pop_front(); //�� �տ� �����͸� ����

	//list1.sort(); // list�� �ִ� �����͸� ������������ �����Ѵ�.
	////[10]->[20]->[1]->[2]->[55]
	////=>[1]->[2]->[10]->[20]->[55]

	//list1.clear(); //list�� �ִ� ��� �����͸� �����Ѵ�.
	//
	////list�� �������� �޸� ������ �ƴϱ� ������
	////�ε����� ������ �Ұ����ϴ�.
	////cout << list1[0] << endl;

	//for (int element : list1)
	//{
	//	cout << element << endl;
	//}

	int result = 0;
	int N;
	cin >> N;
	int array[100] = { 0, };
	for (int i = 0; i < N; i++)
	{
		scanf("%1d", &array[i]);
	}
	for (int element : array)
	{
		result += element;
	}

	cout << result;





	return 0;
}