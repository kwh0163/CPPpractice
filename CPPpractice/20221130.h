#pragma once
#include<iostream>
using namespace std;

int main() {
	//과제 안 내신 분..?
	int n;
	int Array[30] = { 0, };
	for (int i = 0; i < 28; i++) {
		cin >> n;
		Array[n - 1]++;
	}
	for (int i = 0; i < 30; i++) {
		if (Array[i] == 0)cout << i + 1 << endl;
	}

	return 0;
}
