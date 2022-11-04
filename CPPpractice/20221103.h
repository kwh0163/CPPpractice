#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<list>
using namespace std;

int main()
{
	//STL리스트
	////각 노드가 데이터와 포인터를 가지고 한 줄로 연결된 방식으로
	////데이터를 저장하는 자료구조이다.
	//list<int> list1;

	//list1.push_front(5); //push_front : 맨 앞에 데이터를 추가
	//list1.push_back(10); //push_back : 맨 뒤에 데이터를 추가
	//list1.push_back(20);
	//list1.push_back(1);
	//list1.push_back(2);
	//list1.push_back(55);
	//list1.push_back(100);
	//list1.pop_back(); //맨 뒤에 데이터를 삭제
	//list1.pop_front(); //맨 앞에 데이터를 삭제

	//list1.sort(); // list에 있는 데이터를 오름차순으로 정렬한다.
	////[10]->[20]->[1]->[2]->[55]
	////=>[1]->[2]->[10]->[20]->[55]

	//list1.clear(); //list에 있는 모든 데이터를 삭제한다.
	//
	////list는 연속적인 메모리 공간이 아니기 때문에
	////인덱스로 접근이 불가능하다.
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