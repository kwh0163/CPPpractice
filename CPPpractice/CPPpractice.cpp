#include<iostream>
#include<queue>
#include<stack>
using namespace std;

int main()
{
	//ť FIFO(First In First Out)
	/*
	//���� ���� �����Ͱ� ���� ���� ������ ������ �����̳�
	queue<int> Queue;

	//push : ť �����̳ʿ� �����͸� �־��ִ� �Լ��̴�.
	Queue.push(10);
	Queue.push(20);
	Queue.push(30);
	Queue.push(50);
	Queue.push(40);
	Queue.push(90);
	//pop : ť �����̳ʿ��� �����͸� ������ �Լ��̴�.
	Queue.pop();

	//front : ť �����̳��� ����Ǿ� �ִ� ���� �߿��� ���� �տ� �ִ� ���� �����Ѵ�.
	cout << Queue.front() << endl;

	//size : ť �����̳��� ũ�⸦ ����ϴ� �Լ��̴�.
	cout << Queue.size() << endl;

	//empty : ť �����̳ʰ� ����ִ��� Ȯ���ϴ� �Լ��̴�.
	cout << Queue.empty() << endl;

	//queue ������ ���
	while (!Queue.empty())
	{
		cout << Queue.front() << endl;
		Queue.pop();
	}
	*/

	//���� LIFO(Last In First Out)
	/*
	//���� �������� ���� �����Ͱ� ���� ���� ������ ������ �����̳�
	stack<int> Stack;
	stack<int> otherStack;

	otherStack.push(-100);
	otherStack.push(-200);
	otherStack.push(-300);

	Stack.push(10);
	Stack.push(20);
	Stack.push(30);

	//top : ���� ���� �ִ� ���Ҹ� ����ϴ� �Լ��̴�.
	cout << Stack.top() << endl;

	//pop : ���� ���� �ִ� ���Ҹ� ���� �Լ��̴�.
	Stack.pop();

	//size : ���� �����̳ʿ� ����ִ� ũ�⸦ ��ȯ�ϴ� �Լ��̴�.
	cout << Stack.size() << endl;

	//swap : �� ������ ������ �ٲٴ� �Լ�
	swap(Stack, otherStack);
	cout << Stack.top() << endl;
	*/

	
	


	return 0;
}