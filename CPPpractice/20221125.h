#pragma once
#include<iostream>
#include<string>
using namespace std;

int main() {
	//���� ����
	/*
	//�迭�� ��� ��Ҹ� �տ������� ���ʴ�� �̹� ���ĵ� �迭�κа�
	//���Ͽ�, �ڽ��� ��ġ�� ã�� ���������ν� ������ �ϼ��ϴ� �˰����̴�.

	int array[5] = { 5,3,7,1,2 };

	for (int i = 1; i < 5; i++) {
		int key = array[i];
		for (int j = i - 1; j >= 0; j--) {
			if (array[j] > key) {
				array[j+1] = array[j];
				array[j] = key;
			}
			else break;
		}
	}
	for (int iter : array) {
		cout << iter << endl;
	}
	*/

	//�ܾ����
	int Array[26] = { 0, };
	string str;
	getline(cin, str);

	for (int i = 0; i < str.size(); i++) {
		if (str[i] > 96) {
			Array[(int)str[i] - 97]++;
		}
		else Array[(int)str[i] - 65]++;
	}
	int Max = 0;
	int MaxA;
	bool Same = false;
	for (int i = 0; i < 26; i++) {
		if (Max < Array[i]) {
			Max = Array[i];
			MaxA = i;
			Same = false;
		}
		else if (Max == Array[i]) Same = true;
	}
	if (Same) cout << "?" << endl;
	else cout << (char)(MaxA + 65) << endl;


	return 0;
}