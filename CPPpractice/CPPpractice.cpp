#include<iostream>
#include<queue>
#include<stack>
using namespace std;

int main()
{
	//큐 FIFO(First In First Out)
	/*
	//먼저 들어온 데이터가 가장 먼저 나가는 구조의 컨테이너
	queue<int> Queue;

	//push : 큐 컨테이너에 데이터를 넣어주는 함수이다.
	Queue.push(10);
	Queue.push(20);
	Queue.push(30);
	Queue.push(50);
	Queue.push(40);
	Queue.push(90);
	//pop : 큐 컨테이너에서 데이터를 꺼내는 함수이다.
	Queue.pop();

	//front : 큐 컨테이너의 저장되어 있는 원소 중에서 가장 앞에 있는 값을 리턴한다.
	cout << Queue.front() << endl;

	//size : 큐 컨테이너의 크기를 출력하는 함수이다.
	cout << Queue.size() << endl;

	//empty : 큐 컨테이너가 비어있는지 확인하는 함수이다.
	cout << Queue.empty() << endl;

	//queue 모든원소 출력
	while (!Queue.empty())
	{
		cout << Queue.front() << endl;
		Queue.pop();
	}
	*/

	//스택 LIFO(Last In First Out)
	/*
	//가장 마지막에 들어온 데이터가 가장 먼저 나가는 구조의 컨테이너
	stack<int> Stack;
	stack<int> otherStack;

	otherStack.push(-100);
	otherStack.push(-200);
	otherStack.push(-300);

	Stack.push(10);
	Stack.push(20);
	Stack.push(30);

	//top : 가장 위에 있는 원소를 출력하는 함수이다.
	cout << Stack.top() << endl;

	//pop : 가장 위에 있는 원소를 빼는 함수이다.
	Stack.pop();

	//size : 스택 컨테이너에 들어있는 크기를 반환하는 함수이다.
	cout << Stack.size() << endl;

	//swap : 두 스택의 내용을 바꾸는 함수
	swap(Stack, otherStack);
	cout << Stack.top() << endl;
	*/

	
	


	return 0;
}