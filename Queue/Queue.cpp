#include <stdio.h>
#include <iostream>
#include <queue> // c++ STL queue ���̺귯��

using namespace std;

int main(void) {

	queue <int> queue; // queue ����
	queue.push(1);
	queue.push(2);
	queue.push(3);

	cout << "Queue Size : " << queue.size() << endl; // queue ������ 

	for (int i = 0; i < 3; i++) {
		cout << "���� Queue�� �Ǿ� : " << queue.front() << endl;
		queue.pop();
	}

	cout << endl;

	// Priority Queue 
	priority_queue <int, vector<int>, less<int> > pri_queue; //�� ������ ������� �켱������ ���� �����Ͱ� ���� ���´�.
	pri_queue.push(1);
	pri_queue.push(2);
	pri_queue.push(3);

	cout << "Priority_Queue Size : " << pri_queue.size() << endl;

	for (int i = 0; i < 3; i++) {
		cout << "���� Priority_Queue�� �Ǿ� : " << pri_queue.top() << endl;
		pri_queue.pop();
	}

}