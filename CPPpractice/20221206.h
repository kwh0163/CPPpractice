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

	//방금 생성한 새로운 노드의 주소가 반환됨
	struct Node* NewNode = new Node;
	NewNode->next = NULL;
	NewNode->key = _key;
	NewNode->value = _value;

	//버켓(hash)의 인덱스의 size가 0이라면
	if (Hash[HashIndex].size == 0) {
		//사이즈 값 증가
		Hash[HashIndex].size++;
		//head 포인터를 새로 처음 들어온 newNode 가리킴
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
		cout << "KEY : " << _key << "삭제되었습니다." << endl;
	}
	else {
		cout << "KEY가 존재하지 않아 삭제가 진행되지 않았습니다." << endl;
	}

}


int main() {
	//해시 테이블
	//해시함수를 사용해서 변환한 값을 index로 삼아서 key와 value를
	//저장하는 자료구조이다.
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