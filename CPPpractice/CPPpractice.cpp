#include<iostream>

using namespace std;

//�� ĳ����

//���� Ŭ������ ���� Ŭ�����κ��� �Ϲ������� ����ȯ�Ǵ� ĳ�����̴�.

//���� Ŭ���� Ÿ���� �����ͷ� ���� Ŭ������ ����ų �� �ִ�.

class Parent
{
public:
	int x = 10;
	int y = 200;
};

class Child : public Parent
{
public:
	int z = 99;
};


//Ŭ������ ���� ������ �˻��ϴ� �Լ�
void Search(Parent * ptr)
{
	for (int i = 0; i < 5; i++)
	{
		cout << "Ŭ���� x�� �� : " << ptr[i].x << endl;
		cout << "Ŭ���� y�� �� : " << ptr[i].y << endl;
	}
}

int main()
{
	//��ĳ����
	/*
	Parent* parentPtr = new Child();
	parentPtr->x = 10;
	parentPtr->y = 20;
	static_cast<Child*>(parentPtr)->z = 20;
	*/

	//Parent* ptr1 = new Parent[5];
	Child* chPtr1 = new Child[5];

	Search(chPtr1);

	delete chPtr1;
	//�ٿ� ĳ����
	/*
	//��Ӱ��迡�� ��ĳ�����ߴ� ���� Ŭ���� �ν��Ͻ���
	//���� Ŭ������ �� ��ȯ�ϴ� �����̴�.

	//���� Ŭ������ �����ͷ� �θ� Ŭ������ ������  �� ����.
	Child* childPtr = (Child*) new Parent();
	childPtr->x = 10;
	childPtr->y = 20;
	childPtr->z = 30;
	*/

	return 0;
}