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
//���� ��ȸ
//1.�ڱ� �ڽź��� ���
//2.������ �ڽ� ��带 ���
//3.�������� �ڽ� ��带 ���
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

//���� ��ȸ
//1.���� �ڽ� ��带 ���
//2.�ڱ� �ڽ��� ��� ���
//3.������ �ڽ� ��带 ���


//���� ��ȸ
//1.���� �ڽ� ��带 ���
//2.������ �ڽ� ��带 ���
//3.�ڱ� �ڽ��� ��带 ���


int main() {
	//Ʈ�� ����
	//�� ��忡�� �����ؼ� �ٸ� �������� ��ȸ�Ͽ� 
	//�ڱ� �ڽſ��� ���ƿ��� ��ȯ�� ���� ���� �׷����̴�.

	//���� Ʈ��
	//�ִ� 2���� �ڽ� ��带 ������ Ʈ��
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