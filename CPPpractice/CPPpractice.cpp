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
	//���� ����
	/*
	//�־��� ����Ʈ �߿��� �ּڰ��� ã�� ���� �� ���� �� �տ�
	//��ġ�� ���� ��ü�ϴ� �����̴�.

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

	//�Լ� ��ü
	//�Լ�ó�� �����ϴ� ��ü�̴�.
	User user;
	user();





	return 0;
}