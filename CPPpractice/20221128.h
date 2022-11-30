#pragma once
#include<iostream>

using namespace std;

struct Node {
	int data;
	Node* next;
};

Node* FrontInsert(Node* head, int _value) {
	Node* NewNode = new Node;
	NewNode->data = _value;
	if (head == NULL) {
		head = NewNode;
		NewNode->next = head;
	}
	else {
		NewNode->next = head->next;
		head->next = NewNode;
	}

	return head;
}
Node* BackInsert(Node* head, int _value) {
	Node* NewNode = new Node;
	NewNode->data = _value;
	if (head == NULL) {
		head = NewNode;
		NewNode->next = head;
	}
	else {
		NewNode->next = head->next;
		head->next = NewNode;
		head = NewNode;
	}



	return head;
}
int main() {
	//원형 연결 리스트
	Node* head = NULL;

	head = FrontInsert(head, 100);
	head = FrontInsert(head, 200);
	head = FrontInsert(head, 300);

	Node* cur = head->next;

	while (cur != head) {
		cout << cur->data << endl;
		cur = cur->next;
	}
	cout << head->data << endl;


	Node* del = head;
	do {
		Node* iter = del;
		del = del->next;
		delete iter;
	} while (del != head);


}