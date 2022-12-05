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

	//방금 생성한 새로운 노드의 주소가 반환됨
	struct Node* newNode = CreateNode(_key, _value);
	
	//버켓(hash)의 인덱스의 size가 0이라면
	if (Hash[HashIndex].size == 0) {
		//사이즈 값 증가
		Hash[HashIndex].size++;
		//head 포인터를 새로 처음 들어온 newNode 가리킴
		Hash[HashIndex].head->next = newNode;
	}
	else {
		
	}
}

int main() {
	//해시 테이블
	//해시함수를 사용해서 변환한 값을 index로 삼아서 key와 value를
	//저장하는 자료구조이다.

	



	return 0;
}