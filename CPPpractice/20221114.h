#pragma once
#include<iostream>
using namespace std;

template<typename __T>
class Queue
{
private:
	int __rear = -1;
	int __front = -1;
	__T __array[5] = { 0, };
public:
	bool Empty();
	bool IsFull();
	void Push(__T __value);
	__T Pop();
};
template<typename __T>
bool Queue<__T>::Empty()
{
	if (this->__front == this->__rear)
	{
		cout << "ť�� ������ϴ�." << endl;
		return true;
	}
	else return false;
}
template<typename __T>
bool Queue<__T>::IsFull()
{
	if (this->__rear == 4)
	{
		cout << "�����͸� ���� �� �����ϴ�." << endl;
		return true;
	}
	else return false;
}
template<typename __T>
void Queue<__T>::Push(__T __value)
{
	if (!this->IsFull())this->__array[++this->__rear] = __value;
}
template<typename __T>
__T Queue<__T>::Pop()
{
	if (!this->Empty())
	{
		__T temp = this->__array[++this->__front];
		return temp;
	}
	return 0;
}

int main()
{
	//ť
	//FIFO(first in first out)
	//���� ���� �����Ͱ� ���� ������ ����

	Queue<int> queue;
	queue.Push(1);
	queue.Push(2);
	queue.Push(3);
	queue.Push(4);
	queue.Push(5);
	queue.Push(6);
	cout << queue.Pop() << endl;
	cout << queue.Pop() << endl;
	cout << queue.Pop() << endl;
	cout << queue.Pop() << endl;
	cout << queue.Pop() << endl;
	cout << queue.Pop() << endl;


	//���� ť
	//���� ť�� ������
	//�����͸� �߰��� �� index�� ���� �������� �ʰ� ������ ��Ű�� ������
	//������ �տ� �ִ� �����Ͱ� ���� ���� ť�� �����͸� ������ �� ���� ���°� ��Ÿ���ϴ�.


	//���� ť



	return 0;
}