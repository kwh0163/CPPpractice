#include<iostream>
using namespace std;

class User {
public:
	void operator() () {
		cout << "Function Object" << endl;
		cout << "signal : " << signal << endl;
	}
private:
	int signal = 0;
};

int main(){
	//선택 정렬
	/*
	//주어진 리스트 중에서 최솟값을 찾은 다음 그 값을 맨 앞에
	//위치한 값과 교체하는 정렬이다.

	int array[5] = {10,4,3,1,7};
	
	for (int i = 0; i < 5; i++) {
		int min = 999;
		int index= 100;
		for (int j = i; j < 5; j++) {
			if (min > array[j]) {
				min = array[j];
				index = j;
			}
		}
		if (!(index == i)){
			int temp = array[index];
			array[index] = array[i];
			array[i] = temp;
		}
	}
	for (int iter : array) {
		cout << iter << endl;
	}
	*/

	//함수 객체
	//함수처럼 동작하는 객체이다.
	User user;
	user();





	return 0;
}