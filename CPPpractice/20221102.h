#pragma once
#include<iostream>

using namespace std;

//��� �̴ϼȶ�����
//�������� ������ ����Ͽ� �ʱ�ȭ�� �� �ִ� ����̴�.

//static_cast
//�⺻ �ڷ����� ����ȯ �� ���� Ŭ�������� ���� Ŭ�������� ������ ��ȯ ���꿡
//���Ǵ� �������̴�.
//������ ������ ����ȯ�� �����Ѵ�.

class Person
{
public:
	int x = 10;

	void Count()
	{
		cout << "Count" << endl;
	}

	//��� �̴ϼȶ������� ����ϸ� �ʱ�ȭ�� ����� ��Ȯ�� �ν��� �� �ִ�.
	//�׸��� ����� ���ÿ� �ʱ�ȭ�� �̷������ ������ ���̳ʸ� �ڵ尡 �����ǹǷ�
	//�ӵ����� �鿡���� ������ ���� �� �ִ�.

	/*Person(int _x, int _y) : x(_x), y(_y)
	{
		cout << "x�� ���� : " << x << endl;
		cout << "y�� ���� : " << y << endl;
	}*/
};
class Child : public Person
{
public:
	float b = 3.65f;
	void ChildInfo()
	{
		cout << "Child Ŭ�����Դϴ�." << endl;
		cout << b << endl;
	}
};
class Child2 : public Person
{
public:
	int c = 5;
	void ChildInfo()
	{
		cout << "Child2 Ŭ�����Դϴ�." << endl;
		cout << c << endl;
	}
};

//dynamic_cast
//ĳ������ ������ ��� �ּҰ��� ��ȯ�ϰ�, ������ ��� nullptr�� ��ȯ�ϴ� ĳ�����̴�.

//dynamic_cast�� ������
//1. ��ü �����Ͱ��� �� ��ȯ�� �����ϴ�.
//2. vertual Ű���尡 �� �ϳ��� �����ϴ� ��Ӱ��迡���� �����ϴ�.

class A
{
public:
	virtual void Function()
	{
		cout << "A Ŭ����" << endl;
	}
};

class B : public A
{
public:
	void Function()
	{
		cout << "B Ŭ����" << endl;
	}
};

int main()
{
	//��� �̴ϼ� ������
	//Person person1(10, 20);

	//static_cast
	/*
	//Person* ptr1 = new Child();<--����ȯ�� �߸������� �޸�ũ�Ⱑ
								  //���� ������ �߸� ������
	Person* ptr1 = new Child2();
	//static_cast�� �߸��� ��Ӱ����� ����ȯ�� ������ ������� �ʴ´�.
	Child2* cptr1 = static_cast<Child2*>(ptr1);
	cptr1->ChildInfo();

	//�������� ��ȯ ������ Ÿ���� ��ȯ�Ѵ�.
	//static_cast<�ٲٷ��� �ϴ� Ÿ��>(���);
	//������ ������ ����ȯ�� ���� Ÿ�� ������ ǥ���Ѵ�.

	//static_cast�� ���ٸ� �⺻ �ڷ����� Ŭ������ ����ȯ�Ǵ� ������ �߻��Ѵ�.
	//-->Child* c = (Child*)value;

	delete ptr1;
	*/

	//dynamic_cast
	A* aptr = new A();
	A* bptr = new B();
	B* bptr2 = new B();
	B* bptr3 = nullptr;

	//������ ���� : Ÿ�Ժ�ȯ �Ұ�
	//bptr3 = aptr;

	//������ ���� : ��Ÿ�ӿ� Ÿ�Ժ�ȯ�� �����ϸ� NULL�� ��ȯ�Ѵ�.
	bptr3 = dynamic_cast<B*>(aptr);


	delete aptr;
	delete bptr;
	delete bptr2;
	delete bptr3;


	return 0;
}