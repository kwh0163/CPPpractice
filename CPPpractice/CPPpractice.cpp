#include<iostream>
using namespace std;

template<typename __T>
class Queue
{
private:
	int __rear = -1;
	int __front = -1;
	__T __array[5] = { 0, };
	bool Empty();
	bool IsFull();
public:
	void Push(__T __value);
	__T Pop();
};
template<typename __T>
bool Queue<__T>::Empty()
{
	if (this->__front == this->__rear)
	{
		cout << "큐가 비었습니다." << endl;
		return true;
	}
	else return false;
}
template<typename __T>
bool Queue<__T>::IsFull()
{
	if (this->__rear == 4)
	{
		cout << "데이터를 넣을 수 없습니다." << endl;
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
		int temp = this->__array[++this->__front];
		return temp;
	}
	return 0;
}

int main()
{
	//큐
	//FIFO(first in first out)
	//먼저 들어온 데이터가 먼저 나가는 구조
	
	Queue<char> queue;
	queue.Push('T');
	queue.Push('A');
	queue.Push('B');
	queue.Push('C');
	queue.Push('D');
	queue.Push('Q');
	cout << queue.Pop() << endl;
	cout << queue.Pop() << endl;
	cout << queue.Pop() << endl;
	cout << queue.Pop() << endl;
	cout << queue.Pop() << endl;
	cout << queue.Pop() << endl;


	//선형 큐
	//선형 큐의 문제점
	//데이터를 추가할 때 index의 값을 감소하지 않고 증가만 시키기 때문에
	//실제로 앞에 있는 데이터가 없을 때도 큐에 데이터를 저장할 수 없는 형태가 나타납니다.


	//원형 큐
	


	return 0;
}