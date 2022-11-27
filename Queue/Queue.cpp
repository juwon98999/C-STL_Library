#include <stdio.h>
#include <iostream>
#include <queue> // c++ STL queue 라이브러리

using namespace std;

int main(void) {

	queue <int> queue; // queue 선언
	queue.push(1);
	queue.push(2);
	queue.push(3);

	cout << "Queue Size : " << queue.size() << endl; // queue 사이즈 

	for (int i = 0; i < 3; i++) {
		cout << "현재 Queue의 맨앞 : " << queue.front() << endl;
		queue.pop();
	}

	cout << endl;

	// Priority Queue 
	priority_queue <int, vector<int>, less<int> > pri_queue; //들어간 순서와 상관없이 우선순위가 높은 데이터가 먼저 나온다.
	pri_queue.push(1);
	pri_queue.push(2);
	pri_queue.push(3);

	cout << "Priority_Queue Size : " << pri_queue.size() << endl;

	for (int i = 0; i < 3; i++) {
		cout << "현재 Priority_Queue의 맨앞 : " << pri_queue.top() << endl;
		pri_queue.pop();
	}

}