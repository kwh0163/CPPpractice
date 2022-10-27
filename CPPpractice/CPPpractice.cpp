#include<iostream>
#include<memory>

using namespace std;

//����Ʈ �����Ͷ�
/*
//������ó�� �����ϴ� Ŭ���� ���ø����� 
//����� ���� �޸𸮸� �ڵ����� �����ϴ� ������
class Player
{
public:
	Player()
	{
		cout << "Player Ŭ���� ����" << endl;
	}
	~Player()
	{
		cout << "Player Ŭ���� �Ҹ�" << endl;
	}
};
*/

class Person
{
public:
	//shared_ptr�� ������ ��� ��ȯ ������ �߻��Ѵ�.
	//��ȯ ���� �߻��� �ڵ����� ���� ���� �ʴ´�.
	//weak_ptr�� ������ ��� ��ȯ ������ ������ �� �ִ�.

	weak_ptr<Person> person;


	Person()
	{
		cout << "Person Ŭ���� ����" << endl;
	}
	~Person()
	{
		cout << "Person Ŭ���� �Ҹ�" << endl;
	}
};

int main()
{
	//shared_ptr ������
	/*
	//� �ϳ��� ��ü�� �����ϴ� ����Ʈ �������� ������ �����ϴ� ������
	//�����ϰ� �ִ� ����Ʈ �������� ������ ���� ī��Ʈ��� �Ѵ�.

	//���� ī��Ʈ��
	//�ش� �޸𸮸� �����ϴ� �����Ͱ� ��� �ִ��� ��Ÿ���� ��
	//�����ϴ� �����Ͱ� �߰��Ǹ� 1�� �����ϰ� �����ϴ� �����Ͱ� �������� 1�� �����Ѵ�.

	//ù��° �ʱ�ȭ �ϴ� ���
	shared_ptr<int> ptr1(new int(5));
	//�ι�° �ʱ�ȭ �ϴ� ���
	shared_ptr<int> ptr = make_shared<int>(10);

	cout << "ptr1 : " << *ptr1 << endl;
	cout << "ptr1 ���� ī��Ʈ : " << ptr1.use_count() << endl;

	shared_ptr<int> ptr2 = ptr1;

	cout << "ptr1 ���� ī��Ʈ : " << ptr1.use_count() << endl;

	cout << "ptr : " << *ptr << endl;
	cout << "ptr ���� ī��Ʈ : " << ptr.use_count() << endl;

	shared_ptr<Player> player = make_shared<Player>();
	*/

	//unique_ptr ������
	/*
	//�ϳ��� ����Ʈ �����͸� ����ų �� �ִ� ������
	//shared_ptr ���� ī��Ʈ�� 1�� �ѱ� �� ����.


	unique_ptr<int> ptr1 = make_unique<int>(10);

	cout << "ptr1 : " << *ptr1 << endl;

	//ptr1�� ������ �ִ� �޸� ������(�������� �Ҵ��� �޸�)��
	//ptr2���� �޸��� �������� �Ѱ��ִ� �����̴�.
	unique_ptr<int> ptr2 = move(ptr1);
	*ptr2 = 100;

	cout << "ptr2 : " << *ptr2 << endl;

	//reset : �޸� ������ ������ �� �ִ� �Լ�
	unique_ptr<Player> player = make_unique<Player>();
	player.reset();

	unique_ptr<Player> player2 = move(player);
	player2.reset();
	*/

	//weak_ptr ������
	
	//�ϳ� �̻��� shared_ptr �ν��Ͻ��� �����ϴ� ��ü�� ���� ������
	//����������, ���� ī��Ʈ�� ���Ե��� �ʴ� ����Ʈ �������̴�.
	
	//���࿡ ���ΰ� ��븦 ����Ű�� shared_ptr�� ������ �ִٸ�,
	//���� Ƚ���� ���� 1 ���Ϸ� �������� �ʴ´�.
	//shared_ptr�� ������ ���� �ʴ� ������ �߻��Ѵ�.
	
	//��ȯ ����
	//���� ��븦 �����ϴ� ��Ȳ

	//shared_ptr �ν��Ͻ� ���̿� ��ȯ ������ �����ϱ� ���� ����ϴ�
	//����Ʈ �������̴�.

	shared_ptr<Person> obj1 = make_shared<Person>();
	shared_ptr<Person> obj2 = make_shared<Person>();

	cout << "obj1�� ���� ī��Ʈ : " << obj1.use_count() << endl;
	cout << "obj2�� ���� ī��Ʈ : " << obj2.use_count() << endl;

	obj1->person = obj2;
	obj2->person = obj1;

	cout << "obj1�� ���� ī��Ʈ : " << obj1.use_count() << endl;
	cout << "obj2�� ���� ī��Ʈ : " << obj2.use_count() << endl;

	return 0;
}