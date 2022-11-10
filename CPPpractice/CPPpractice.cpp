#include<iostream>
#include<deque>
#include<set>
#include<stack>
using namespace std;

int main()
{
	//deque
	/*
	//데이터가 들어오고 나가는 위치가 앞,뒤에 있는 선형 컨테이너이다.

	deque<int> dequeData;
	dequeData.push_back(2);
	dequeData.push_front(1);
	dequeData.push_back(3);
	dequeData.push_back(4);
	dequeData.push_front(10);

	//insert : 내가 삽입하고자 하는 위치, 들어갈 값
	dequeData.insert(dequeData.begin() + 2, 500);

	//erease : 내가 삭제하고 싶은 원소의 위치
	dequeData.erase(dequeData.begin());

	//for (int iter : dequeData) cout << iter << endl;
	for (int i = 0; i < dequeData.size(); i++)
	{
		cout << dequeData.at(i) << endl;

		//[]인덱스로 접근하여 출력하는 부분이 성능상 유리하다.
		cout << dequeData[i] << endl;
	}
	*/

	//multi_set
	/*
	//set과 다르게 중복된 원소를 컨테이너에 저장할 수 있는 자료구조이다.
	multiset<int>mset;
	mset.insert(7);
	mset.insert(4);
	mset.insert(1);
	mset.insert(2);
	mset.insert(3);
	mset.insert(6);
	mset.insert(7);
	mset.insert(5);
	

	for (auto iter = mset.begin(); iter != mset.end(); iter++)
	{
		cout << *iter << endl;
	}
	//count(?) : 현재 컨테이너에 ?라는 값이 몇개 존재하는지 출력해주는 함수
	cout << "mset에 7이라는 값은 현재 " << mset.count(7) << "개 있습니다." << endl;

	//4가 처음으로 나온 부분은 어디일까요?
	multiset<int>::iterator start;

	start = mset.lower_bound(4);
	cout << "4가 처음으로 나온 부분은 " << *start << "이다." << endl;
	*/

	//node(struct)

	//stack, queue
	stack<int> Stack;




	return 0;
}