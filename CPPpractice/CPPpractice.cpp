#include<iostream>
using namespace std;

struct Node {
	int _data;
	Node* _next;

};
void insert(Node* _targetnode, int _value) {
	Node* _NewNode = new Node;
	_NewNode->_data = _value;
	_NewNode->_next = _targetnode->_next;
	_targetnode->_next = _NewNode;
}
void remove(Node* _originNode) {
	Node* _pointer = _originNode->_next;
	_originNode->_next = _originNode->_next->_next;
	delete _pointer;
}

int main(){
	//연결리스트

	//1. 단방향 연결 리스트
	
	Node* _head = new Node;
	_head->_next = NULL;
	insert(_head, 10);
	insert(_head, 20);
	insert(_head, 30);
	remove(_head);

	Node* currentNode = _head->_next;

	while (currentNode != NULL) {
		cout << currentNode->_data << endl;
		currentNode = currentNode->_next;
	}

	Node* _pointer = _head;
	while (_pointer != NULL) {

		Node* _iter = _pointer;
		_pointer = _pointer->_next;
		delete _iter;
	}
	
	//2. 원형 연결 리스트
	

	//3. 양방향 연결 리스트






	return 0;
}