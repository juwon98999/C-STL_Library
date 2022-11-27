#include <stdio.h>
#include <iostream>
#include <deque> // c++ STL deque ���̺귯��

using namespace std;

void deque_Print(deque<int> deque) {	// deque ��� �Լ�
	std::deque <int>::iterator iter;
	for (iter = deque.begin(); iter != deque.end(); iter++) {
		cout << "���� deque ��� : " << *iter << endl;
	}
}

int main(void) {

	deque <int> deque; // deque ���� (�����迭, ������ ��ü�� �ִ� ���� ���ٰ�, �հ� �ڿ��� ���Ҹ� �߰��ϴ� ������ ��� ǥ��� O(1)�� �����Ѵ�.)
	deque.push_back(1);
	deque.push_back(2);
	deque.push_back(3);

	cout << "deque Size : " << deque.size() << endl; // deque ������ 
	deque_Print(deque);

	cout << endl;

	cout << "deque pop ���" << endl; // deque pop
	deque.pop_back();

	deque_Print(deque);


	return 0;
}

