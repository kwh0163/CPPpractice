#include<iostream>
#include<deque>
#include<set>
#include<stack>
using namespace std;

int main()
{
	//deque
	/*
	//�����Ͱ� ������ ������ ��ġ�� ��,�ڿ� �ִ� ���� �����̳��̴�.

	deque<int> dequeData;
	dequeData.push_back(2);
	dequeData.push_front(1);
	dequeData.push_back(3);
	dequeData.push_back(4);
	dequeData.push_front(10);

	//insert : ���� �����ϰ��� �ϴ� ��ġ, �� ��
	dequeData.insert(dequeData.begin() + 2, 500);

	//erease : ���� �����ϰ� ���� ������ ��ġ
	dequeData.erase(dequeData.begin());

	//for (int iter : dequeData) cout << iter << endl;
	for (int i = 0; i < dequeData.size(); i++)
	{
		cout << dequeData.at(i) << endl;

		//[]�ε����� �����Ͽ� ����ϴ� �κ��� ���ɻ� �����ϴ�.
		cout << dequeData[i] << endl;
	}
	*/

	//multi_set
	/*
	//set�� �ٸ��� �ߺ��� ���Ҹ� �����̳ʿ� ������ �� �ִ� �ڷᱸ���̴�.
	multiset<int>mset;
	mset.insert(7);
	mset.insert(4);
	mset.insert(1);
	mset.insert(2);
	mset.insert(3);
	mset.insert(6);
	mset.insert(7);
	mset.insert(5);
	

	for (auto iter = mset.begin(); iter != mset.end(); iter++)
	{
		cout << *iter << endl;
	}
	//count(?) : ���� �����̳ʿ� ?��� ���� � �����ϴ��� ������ִ� �Լ�
	cout << "mset�� 7�̶�� ���� ���� " << mset.count(7) << "�� �ֽ��ϴ�." << endl;

	//4�� ó������ ���� �κ��� ����ϱ��?
	multiset<int>::iterator start;

	start = mset.lower_bound(4);
	cout << "4�� ó������ ���� �κ��� " << *start << "�̴�." << endl;
	*/

	//node(struct)

	//stack, queue
	stack<int> Stack;




	return 0;
}