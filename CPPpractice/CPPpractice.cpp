#include<iostream>

//Ŭ����
//Ư�� ��ü�� �Ӽ��� ����� ������ ����ü
class Player
{
//���� ������
//Ŭ���� �ܺο��� ���� ���� ���(����, �Լ�)��
//Ŭ���� �ܺο��� ������ ������ �ʴ� ����� �����ϴ� ������

//public
//Ŭ���� ���ο� �ڱⰡ ����ϰ� �ִ� Ŭ���� �׸���
//Ŭ���� �ܺο��� ������ ����� �� �ִ� ������
//private
//Ŭ���� ���ο����� ������ ���ǰ�, �ڱⰡ ����ϴ� Ŭ������
//Ŭ���� �ܺο��� ������ �� ���� ������
//protected
//Ŭ���� ���ο� �ڱⰡ ����ϴ� Ŭ���������� ������ ����ϰ�
//Ŭ���� �ܺο��� ������ �� ���� ������

//Ŭ������ ��� ���� �����ڸ� ������ ������ �⺻������ private�� ����
public:
	int health;
	float size;
	std::string name;

private:
	void Attack()
	{
		std::cout << "����" << std::endl;
	}
};


int main()
{
	//C++ �����
	/*
	char alphabet = 'B';
	int value = 10;
	float variable = 10.5;

	//���� ������(<<) : ��� ��Ʈ�� ��ü�� ����Ʈ�� ������ ������
	std::cout << "alphabet ������ �� : " << alphabet << std::endl;
	std::cout << "value �� �� : " << value << std::endl;
	std::cout << "variable�� �� : " << variable << std::endl;

	//���� ������ (>>)
	//�Է��� �����͸� �Է� ��Ʈ������ �����Ͽ�
	//�����ʿ� ��ġ�� ������ ���� �����մϴ�.
	
	//std::cin : �Է��ϱ� ���� ��ü
	std::cin >> value;
	std::cout << "value �� �� : " << value << std::endl;

	std::cout << "�� ��° �ȳ��ϼ���.";

	//bool = ���� ������ ��Ÿ���� �ڷ���
	bool value = true;
	*/

	//���� ��� for��
	/*
	//���۰� ������ �˷����� �ʾƵ� �������� ũ�⿡ ���� 
	//������ ��ȯ���ִ� �ݺ���

	int array[] = { 1,2,3,4,5 };

	//element :: ���� �̸�
	//array : ������ ����Ʈ (�迭, ����, ����Ʈ)
	for (int element : array)
	{
		//���� ��� for�� ����
		//1.for�� ������ index ������ �������� �ʽ��ϴ�.
		//2.for �� �ȿ��� �迭�� ��Ҹ� ������ �� �����ϴ�.

		//���� ������ ���·� ������Ű�� ���� �����մϴ�.
		//�迭 �ȿ� �ִ� ���� ��ü �ʱ�ȭ�� �����մϴ�.

		//element : call by value ���·� ���� �����մϴ�.
		element = 10;
		std::cout << element << std::endl;
	}
	
	std::cout << "--------------" << std::endl;

	for (int element : array)
	{
		std::cout << element << std :: endl;
	}
	*/

	//�ڷ��� �߷�
	/*
	//������ �Լ��� �����ϰ� ������ �̷���� �� �����Ϸ��� �ڵ�����
	//�ڷ����� �߷����ִ� ���

	//�ڷ��� �߷��� ������ �ʱ�ȭ���� ������ ����� �� �����ϴ�.
	auto value = 10;
	auto decimal = 20.6;

	std::cout <<"value ������ �� : " << value << std::endl;
	std::cout << "decimal ������ �� : " << decimal << std::endl;
	*/

	//Ŭ����
	Player Kim;

	Kim.health = 100;
	Kim.size = 10.65;
	Kim.name = "kim";

	//Kim.Attack();

	std::cout << Kim.health << " " << Kim.size << " " << Kim.name << std::endl;


	return 0;
}