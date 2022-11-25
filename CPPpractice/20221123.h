#pragma once
#include<iostream>
using namespace std;

struct Node {
	Node* _next;
	Node* _prev;
	int _data;
};
Node* _head = NULL;
Node* _tail = NULL;
void Insert(Node* targetNode, int _value) {
	Node* newNode = new Node;
	targetNode->_next->_prev = newNode;
	newNode->_next = targetNode->_next;
	targetNode->_next = newNode;
	newNode->_prev = targetNode;
	newNode->_data = _value;
}
void Clear() {
	Node* pointer = _head;
	while (pointer != NULL) {
		Node* _iter = pointer;
		pointer = pointer->_next;
		delete _iter;
	}
}
void FrontOutput() {
	Node* pointer = _head->_next;
	while (pointer != _tail) {
		cout << pointer->_data << endl;
		pointer = pointer->_next;
	}
}
void BackOutput() {
	Node* pointer = _tail->_prev;
	while (pointer != _head) {
		cout << pointer->_data << endl;
		pointer = pointer->_prev;
	}
}
void Remove(Node* targetNode) {
	Node* deleteNode = targetNode->_next;
	if (deleteNode == NULL) return;
	targetNode->_next = targetNode->_next->_next;
	targetNode->_next->_prev = targetNode;
	delete deleteNode;
}
int main() {
	_head = new Node;
	_tail = new Node;
	_head->_next = _tail;
	_head->_prev = NULL;
	_tail->_prev = _head;
	_tail->_next = NULL;

	Insert(_head, 10);
	Insert(_head, 20);
	Insert(_head, 30);
	Remove(_head);
	FrontOutput();
	BackOutput();


	Clear();
	return 0;
}