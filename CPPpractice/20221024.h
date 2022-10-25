#pragma once
#include<iostream>
using namespace std;

//�Լ��� �������̵�
/*
//�̹� ���ǵ� �Լ��� �����ϰ�, ���� �̸��� �Լ��� ���Ӱ� �����ϴ� ���

class Parent
{
public:
	void Information()
	{
		cout << "Parent Ŭ�����Դϴ�." << endl;
	}

	virtual void Talk()
	{
		cout << "Parent Ŭ���� Talk �Լ�" << endl;
	}
};

class Child : public Parent
{
public:
	//�������̵��� �� ���� Ŭ������ �Լ� �̸��� �����ϰ� ������־�� �Ѵ�.
	void Information()
	{
		cout << "Child Ŭ�����Դϴ�." << endl;
	}

	void Talk()
	{
		cout << "Child Ŭ���� Talk �Լ�" << endl;
	}
};
*/

//��� ������ �� �����ڿ� �Ҹ��� ȣ�� ����
/*
class Fruit
{
public:
	Fruit()
	{
		cout << "Fruit Ŭ���� ����" << endl;
	}
	~Fruit()
	{
		cout << "Fruit Ŭ���� �Ҹ�" << endl;
	}

};

class Apple : public Fruit
{
public:
	Apple()
	{
		cout << "Apple Ŭ���� ����" << endl;
	}
	~Apple()
	{
		cout << "Apple Ŭ���� �Ҹ�" << endl;
	}
};
*/

//���� ���� �Լ�
//���� �ְ� ������ ���� ���� �Լ�
class Pen
{
public:
	//���� ���� �Լ��� �Լ��� 0�� �־��ش�.
	//���� Ŭ�������� ������ �� ������ ����Ǵ� �Լ��� ����
	//�̸� ȣ�� ��ȹ�� ���� �α� ���� �����Ѵ�.
	virtual void Draw() = 0;
	virtual void Color() = 0;
};

class Circle : public Pen
{
public:
	//���� ���� �Լ��¹����� ���� Ŭ�������� �����Ǹ� �ؾ��Ѵ�.
	void Draw()
	{
		cout << "���׶��" << endl;
	}
	void Color()
	{
		cout << "������" << endl;
	}
};

class Rectangle : public Pen
{
public:
	void Draw()
	{
		cout << "�׸�" << endl;
	}
	void Color()
	{
		cout << "�Ķ���" << endl;
	}
};

int main()
{
	//���� �Լ� ���̺�
	/*
	Parent* parent = new Parent;
	Child* child = new Child;

	parent->Talk(); //���� �Լ�
	parent->Information(); //�Ϲ� �Լ�

	parent = child;
	//parent �������� ������ child�� �޸� ������ ����Ű���� ����

	//���� �Լ� ���̺��̶�
	//�Լ� ������ �迭�̸�, �� �����͸� ���󰡼� ���� �Լ��� �����
	//��� �Լ����� �ּҿ� �迭 ���·� �����Ͽ� ȣ���ϴ� ���̺��̴�.

	//���� �Լ� ���̺��� ���� ȣ��Ǿ�� �� �Լ��� ��ġ�� �����ϰ� �ִ�.

	parent->Talk(); //���� �Լ�
	parent->Information(); //�Ϲ� �Լ�

	delete child;
	*/

	//��� ������ �� �����ڿ� �Ҹ��� ȣ�� ����
	/*
	Apple apple;

	//��� ���迡�� ���� Ŭ������ ����Ŭ������ �����ڸ� ���� ȣ���� ��
	//�� ������ ���� Ŭ������ �����ڸ� ȣ���մϴ�.

	//�Ҹ��ڴ� �������� �������� ȣ��˴ϴ�.
	*/

	//�߻� Ŭ����
	//�Ϻ� �Լ��� �������� �ʰ�, ���� �Ǿ��ִ� Ŭ�����̴�.
	//�߻� Ŭ������ ��ü�� ������ �� ����.

	//��ӹ��� Ŭ���������� ���� ���� �Լ����� 
	//��� �� ������ �ؾ߸� ������ �� �ִ�.

	//�ʿ��� ��� Ŭ������ ������ �� �ֵ����Ͽ�
	//�������� ���̴µ� ū ȿ���� �ݴϴ�.

	Circle circle;
	circle.Draw();
	circle.Color();
	Rectangle rectangle;
	rectangle.Draw();
	rectangle.Color();

	return 0;
}