#include<iostream>
using namespace std;

//Ŭ������ �޸� ����
class Object {
//Ŭ���� ������
//������ ������Ʈ �ȿ��� ó������ �־��� ��ҳ�
//���������� �������� ���������� ��Ÿ���� ���̴�.

//ex) A[6] = "ABCDE";
//C��� ���� A ���������� 2�� �������� ������ ���̴�.

public:
	char charData;
	int intData;
	double doubleData;

	//static ������ Ŭ���� ���ο� �޸𸮰� ������ �ʴ´�.
	static int staticData;

	void StaticDataFunction()
	{
		staticData++;
	}


};

//Ŭ���� ���ο� �ִ� static ������ Ŭ���� �ܺο��� ���� ����ó�� �ʱ�ȭ�� �ؾ��Ѵ�.
int Object::staticData = 0;

int main(){
	//Object object;
	Object object1;
	Object object2;
	Object object3;

	object1.StaticDataFunction();
	object2.StaticDataFunction();
	object3.StaticDataFunction();
	cout << Object::staticData << endl;



	//Ŭ������ �޸�
	/*
	object.charData = 'A';
	object.intData = 10;
	object.doubleData = 30.5;

	//Ŭ������ �޸� ũ�⸦ �����ϴ� ���� ��� ���� �߿��� 
	//���� ū �ڷ����� ����� �ǵ��� �����Ѵ�.
	cout << "Object Ŭ������ ũ�� : " << sizeof(Object) << endl;
	*/

	//Ŭ������ ������
	/*
	cout << (int)(&(((Object*)0)->charData)) << endl;
	cout << (int)(&(((Object*)0)->intData)) << endl;
	cout << (int)(&(((Object*)0)->doubleData)) << endl;
	*/






	return 0;
}