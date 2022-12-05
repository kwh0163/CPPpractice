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

Node* CreateNode(int _key, int _value) {
	Node * NewNode = new Node;
	NewNode->next = NULL;
	NewNode->key = _key;
	NewNode->value = _value;

	return NewNode;
}

int HashFunction(int _key) {
	return _key % 5;
}

void Insert(int _key, int _value) {
	int HashIndex = HashFunction(_key);

	//��� ������ ���ο� ����� �ּҰ� ��ȯ��
	struct Node* newNode = CreateNode(_key, _value);
	
	//����(hash)�� �ε����� size�� 0�̶��
	if (Hash[HashIndex].size == 0) {
		//������ �� ����
		Hash[HashIndex].size++;
		//head �����͸� ���� ó�� ���� newNode ����Ŵ
		Hash[HashIndex].head->next = newNode;
	}
	else {
		
	}
}

int main() {
	//�ؽ� ���̺�
	//�ؽ��Լ��� ����ؼ� ��ȯ�� ���� index�� ��Ƽ� key�� value��
	//�����ϴ� �ڷᱸ���̴�.

	



	return 0;
}