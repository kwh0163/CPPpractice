#include<iostream>
#define __next(x) ((x+1)%6)
using namespace std;

class Queue{
private:
	int __front = 5;
	int __rear = 5;
	int __buffer[6] = {0,};
public:
	bool Empty();
	void Push(int __value);
	int Pop();
	bool isFull();
};
bool Queue::Empty(){
	if (this->__front == this->__rear) {
		cout << "큐가 비었습니다. ";
		return true;
	}
	else return false;
}
void Queue::Push(int __value){
	if (!this->isFull()) {
		this->__rear = __next(this->__rear);
		this->__buffer[this->__rear] = __value;
	}
}
int Queue::Pop(){
	if (!(this->Empty())) {
		this->__front = __next(this->__front);
		int temp = this->__buffer[this->__front];
		__buffer[this->__front] = 0;
		return temp;
	}
	else return 0;
}
bool Queue::isFull(){
	if (__next(this->__rear) == this->__front) {
		cout << "데이터가 더이상 들어갈 수 없습니다." << endl;
		return true;
	}
	else return false;
}

int main(){
	Queue array;
	array.Push(1);
	array.Push(2);
	array.Push(3);
	array.Push(4);
	array.Push(5);
	cout << array.Pop() << endl;
	cout << array.Pop() << endl;
	cout << array.Pop() << endl;
	cout << array.Pop() << endl;
	cout << array.Pop() << endl;
	array.Push(4);
	array.Push(3);
	array.Push(5);
	cout << array.Pop() << endl;
	cout << array.Pop() << endl;
	cout << array.Pop() << endl;


	return 0;
}