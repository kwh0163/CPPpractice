#pragma once
#include<iostream>


//���
//������ ���ǵǾ� �ִ�(����)Ŭ���� ��� ��� ������
//��� �Լ��� ���� �޾�, ���� Ŭ������ ����� �� �ִ� ��

//���� Ŭ������ ����� �����ִ� Ŭ����
//���� Ŭ������ ����� ���� �޴� Ŭ����

class Phone
{
public:
	//�����ڴ� �ڽ��� Ŭ���� �̸����� ����� �ش�.
	//�����ڴ� ��ȯ���� �������� �ʽ��ϴ�.
	Phone()
	{
		std::cout << "�ڵ����� �����Ǿ����ϴ�." << std::endl;
	}

	//�Ҹ��ڴ� �ڽ��� Ŭ���� �̸��տ� ~�� ����ؼ� ����� �ش�.
	~Phone()
	{
		std::cout << "�ڵ����� �Ҹ�Ǿ����ϴ�." << std::endl;
	}

	std::string name;

	void Message()
	{
		std::cout << "���� ������" << std::endl;

		//���� Ŭ������ ���� Ŭ�������� ������ �Լ��� ����� �� ����.
		//Touch();
	}

protected:

	void Call()
	{
		std::cout << "��ȭ �ɱ�" << std::endl;
	}

};

//����ϴ� ���
//class (���� Ŭ���� �̸�) : (���� Ŭ���� �̸�)
class Smartphone : Phone
{
public:
	void Touch()
	{
		Call();
	}
};

int main()
{
	//C++ ���� �Ҵ�
	/*
	//new (�� ������ �Ҵ��� �޸� ������ ũ��)
	int* ptr = new int;

	*ptr = 100;

	std::cout << *ptr << std::endl;
	std::cout << ptr << std::endl;

	//C++ ���� �Ҵ� ���� : delete
	delete ptr;

	int* arrptr = new int[5];

	arrptr[0] = 20; arrptr[1] = 30; arrptr[2] = 40; arrptr[3] = 50; arrptr[4] = 60;

	for (int i = 0; i < 5; i++)
	{
		std::cout << arrptr[i] << std::endl;
	}

	delete [] arrptr;
	*/

	//Phone phone;  // <- ����

	//Phone* phone = new Phone();  // <- ��
	//delete phone;

	//Smartphone* sphone = new Smartphone();
	//delete sphone;

	//���� ���ε�
	//�迭�� ũ��� ������ ������ �޸� ũ�Ⱑ �����˴ϴ�.
	//�迭[100]; <- �޸� ���� ��������
	//Ư�� ������ �迭�� ũ�⸦ 100�� ����ؾ� ������,
	//�� Ư�� ������ �Ѿ�� ���̻� ����� �ʿ䰡 ���� ��
	//���� �Ҵ��� ���� �ð��� �޸� ���� Ȯ���ϰ� ���̰� �� �� ����

	//������
	//Ŭ������ ��ü�� �����Ǿ��� �� ��ü�� �ʱ�ȭ�ϴ�
	//�������� �ڵ����� ����Ǵ� �Լ�

	//�Ҹ���
	//Ŭ������ ��ü�� �Ҹ�Ǿ��� �� �ڵ����� ȣ��Ǵ� �Լ�


	return 0;
}