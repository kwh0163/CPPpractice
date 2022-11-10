#pragma once
#include<iostream>
#include<map>
#include<set>

using namespace std;

int main()
{
	//STL vector, list (���� �����̳�)
	//STL stack, queue (�����̳� �����)
	//STL map, set (���� �����̳�)

	//map�̶�
	/*
	//����Ʈ�� �迭ó�� ���������� �ش� ����� ����
	//������ �ʰ� key ���� ���ؼ� value ���� ����ϴ�.
	map<string, int> mapData;
	mapData.insert({"��", 1000});
	mapData.insert({ "��",4000 });
	mapData.insert({ "��", 2500 });

	//(value)���� �ߺ��� �� ������, key���� ������ ������ �ߺ��� ���� �ʽ��ϴ�.

	//map�� Ű���� �������� �����ϸ�, ������������ �����մϴ�.
	//ù��° �ּҸ� ����Ű�� iterator�� mapData.end()���� ��ȸ�ϸ鼭
	//"�Ź�"�̶�� Key���� �ִٸ� ���ǹ��� �����Ѵ�.

	if (mapData.find("�Ź�") != mapData.end())
	{
		cout << "���� Key���� �����մϴ�." << endl;
	}
	else
	{
		cout << "���� Key���� �������� �ʽ��ϴ�." << endl;
	}

	//�ߺ��� Ű ���� �����ϴ� ����
	//map�� �ߺ��� key���� ������� �ʴ´�.
	mapData.insert({ "��" ,3000 });

	//value�� �ߺ��Ǹ� mapData�� ���˴ϴ�.
	mapData.insert({ "����",1000 });

	mapData.erase("��");

	for (auto iter = mapData.begin(); iter != mapData.end(); iter++)
	{
		//Key : iter->first�� �����ؾ� �Ѵ�.
		//Value : iter->second�� �����ؾ� �Ѵ�.

		cout << "KEY : " << iter->first << " Value : " << iter->second << endl;
	}
	*/

	//SET�̶�
	//Ű�����θ� ���ҵ��� �������� �̷���� �����̳��̴�.
	//SET �ڷᱸ���� Ű���� �ߺ��� ������� �ʽ��ϴ�.
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

	//���� �ߺ��Ǿ�����, �ȵǾ����� �Ǵ�
	//�ߺ��� ���� ���� ������ ���� SET�ڷᱸ���� ����ȴ�.
	pair<set<int>::iterator, bool> check = setData.insert(15);

	if (check.second)
	{
		cout << "���� �Ϸ�" << endl;
	}
	else
	{
		cout << "���� ���� (�ߺ��� ���� ������)" << endl;
	}

	return 0;
}