#pragma once
#include<iostream>

using namespace std;

struct Node {
	int key;
	int value;
	Node* next;
};

struct Bucket {
	Node* head;
	int size;
};

Bucket* Hash = new Bucket[5];

int HashFunction(int _key) {
	return _key % 5;
}

void Insert(int _key, int _value) {
	int HashIndex = HashFunction(_key);

	//��� ������ ���ο� ����� �ּҰ� ��ȯ��
	struct Node* NewNode = new Node;
	NewNode->next = NULL;
	NewNode->key = _key;
	NewNode->value = _value;

	//����(hash)�� �ε����� size�� 0�̶��
	if (Hash[HashIndex].size == 0) {
		//������ �� ����
		Hash[HashIndex].size++;
		//head �����͸� ���� ó�� ���� newNode ����Ŵ
		Hash[HashIndex].head = NewNode;
	}
	else {
		NewNode->next = Hash[HashIndex].head;
		Hash[HashIndex].head = NewNode;
		Hash[HashIndex].size++;
	}
}
void Remove(int _key) {
	int HashIndex = HashFunction(_key);
	Node* currentNode = Hash[HashIndex].head;
	Node* prevNode = NULL;
	bool check = false;
	while (currentNode != NULL) {
		if (currentNode->key == _key) {
			if (currentNode == Hash[HashIndex].head) {
				Hash[HashIndex].head = currentNode->next;
			}
			else {
				prevNode->next = currentNode->next;
			}
			Hash[HashIndex].size--;
			check = true;
			delete currentNode;
		}
		else {
			currentNode = currentNode->next;
		}
		prevNode = currentNode;
		currentNode = currentNode->next;
	}
	if (check == true) {
		cout << "KEY : " << _key << "�����Ǿ����ϴ�." << endl;
	}
	else {
		cout << "KEY�� �������� �ʾ� ������ ������� �ʾҽ��ϴ�." << endl;
	}

}


int main() {
	//�ؽ� ���̺�
	//�ؽ��Լ��� ����ؼ� ��ȯ�� ���� index�� ��Ƽ� key�� value��
	//�����ϴ� �ڷᱸ���̴�.
	for (int i = 0; i < 5; i++) {
		Hash[i].head = NULL;
		Hash[i].size = 0;
	}

	Insert(10, 3);
	Insert(20, 12);
	Insert(3, 6);
	Insert(2, 1);

	struct Node* currentNode;
	for (int i = 0; i < 5; i++) {
		currentNode = Hash[i].head;
		cout << "Bucket[" << i << "]";
		while (currentNode != NULL) {
			cout << "[KEY : " << currentNode->key << " Value : " << currentNode->value << "]";
			currentNode = currentNode->next;
		}
		cout << endl;
	}




	return 0;
}