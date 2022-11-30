#include<iostream>

using namespace std;

struct Node {
	int data;
	Node* left;
	Node* right;
};

Node * CreateNode(int _value, Node* leftptr, Node* rightptr) {
	Node* NewNode = new Node;
	NewNode->data = _value;
	NewNode->left = leftptr;
	NewNode->right = rightptr;

	return NewNode;
}
//전위 순회
//1.자기 자신부터 출력
//2.왼쪽의 자식 노드를 출력
//3.오른쪽의 자식 노드를 출력
void Preorder(Node* root) {
	cout << root->data << endl;
	if (root->left != NULL)
	{
		Preorder(root->left);
	}
	if (root->right != NULL)
	{
		Preorder(root->right);
	}
}

//중위 순회
//1.왼쪽 자식 노드를 출력
//2.자기 자신의 노드 출력
//3.오른쪽 자식 노드를 출력


//후위 순회
//1.왼쪽 자식 노드를 출력
//2.오른쪽 자식 노드를 출력
//3.자기 자신의 노드를 출력


int main() {
	//트리 구조
	//한 노드에서 시작해서 다른 정점들을 순회하여 
	//자기 자신에게 돌아오는 순환이 없는 연결 그래프이다.

	//이진 트리
	//최대 2개의 자식 노드를 가지는 트리
	Node* node7 = CreateNode(7, NULL, NULL);
	Node* node6 = CreateNode(6, NULL, NULL);
	Node* node5 = CreateNode(5, NULL, NULL);
	Node* node4 = CreateNode(4, NULL, NULL);
	Node* node3 = CreateNode(3, node6, node7);
	Node* node2 = CreateNode(2,node4,node5);
	Node* node1 = CreateNode(1,node2,node3);
	Preorder(node1);





















	delete node1;
	delete node2;
	delete node3;
	delete node4;
	delete node5;
	delete node6;
	delete node7;
	return 0;
}