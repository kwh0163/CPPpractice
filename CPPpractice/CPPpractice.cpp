#include<iostream>
using namespace std;

struct Node {
	int _data;
	Node* _next;

};



int main(){
	//���Ḯ��Ʈ

	//1. �ܹ��� ���� ����Ʈ

	Node* _head = NULL;
	Node* node1 = new Node;
	node1->_data = 10;
	_head = node1;

	Node* node2 = new Node;
	node2->_data = 20;
	_head->_next = node2;

	Node* node3 = new Node;
	node3->_data = 30;
	node2->_next = node3;
	node3->_next = NULL;

	Node*ptr = _head;
	while (ptr != NULL)
	{
		cout << ptr->_data << endl;
		ptr = ptr->_next;
	}

	


	delete node1;
	delete node2;
	delete node3;


	//2. ���� ���� ����Ʈ

	//3. ����� ���� ����Ʈ

	return 0;
}