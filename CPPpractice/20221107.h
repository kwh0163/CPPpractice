#pragma once
#include<iostream>
#include<map>
#include<set>

using namespace std;

int main()
{
	//STL vector, list (선형 컨테이너)
	//STL stack, queue (컨테이너 어댑터)
	//STL map, set (연관 컨테이너)

	//map이란
	/*
	//리스트나 배열처럼 순차적으로 해당 요소의 값을
	//구하지 않고 key 값을 통해서 value 값을 얻습니다.
	map<string, int> mapData;
	mapData.insert({"검", 1000});
	mapData.insert({ "총",4000 });
	mapData.insert({ "옷", 2500 });

	//(value)값은 중복될 수 있지만, key값은 고유한 값으로 중복이 되지 않습니다.

	//map은 키값을 기준으로 정렬하며, 오름차순으로 정렬합니다.
	//첫번째 주소를 가리키는 iterator가 mapData.end()까지 순회하면서
	//"신발"이라는 Key값이 있다면 조건문을 실행한다.

	if (mapData.find("신발") != mapData.end())
	{
		cout << "현재 Key값이 존재합니다." << endl;
	}
	else
	{
		cout << "현재 Key값이 존재하지 않습니다." << endl;
	}

	//중복된 키 값을 삽입하는 과정
	//map은 중복된 key값을 허용하지 않는다.
	mapData.insert({ "검" ,3000 });

	//value가 중복되면 mapData에 허용됩니다.
	mapData.insert({ "투구",1000 });

	mapData.erase("검");

	for (auto iter = mapData.begin(); iter != mapData.end(); iter++)
	{
		//Key : iter->first로 접근해야 한다.
		//Value : iter->second로 접근해야 한다.

		cout << "KEY : " << iter->first << " Value : " << iter->second << endl;
	}
	*/

	//SET이란
	//키값으로만 원소들의 집합으로 이루어진 컨테이너이다.
	//SET 자료구조도 키값에 중복을 허용하지 않습니다.
	set<int> setData;

	setData.insert(10);
	setData.insert(20);
	setData.insert(30);
	setData.insert(40);
	setData.insert(50);
	setData.insert(60);

	for (auto iter = setData.begin(); iter != setData.end(); iter++)
	{
		cout << *iter << endl;
	}

	//값이 중복되었는지, 안되었는지 판단
	//중복된 값을 넣지 않으면 같이 SET자료구조에 저장된다.
	pair<set<int>::iterator, bool> check = setData.insert(15);

	if (check.second)
	{
		cout << "삽입 완료" << endl;
	}
	else
	{
		cout << "삽입 실패 (중복된 값이 존재함)" << endl;
	}

	return 0;
}