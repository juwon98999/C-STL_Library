#include <stdio.h>
#include <iostream>
#include <deque> // c++ STL deque 라이브러리

using namespace std;

void deque_Print(deque<int> deque) {	// deque 출력 함수
	std::deque <int>::iterator iter;
	for (iter = deque.begin(); iter != deque.end(); iter++) {
		cout << "현재 deque 결과 : " << *iter << endl;
	}
}

int main(void) {

	deque <int> deque; // deque 선언 (동적배열, 임의의 위체이 있는 원소 접근과, 앞과 뒤에서 원소를 추가하는 연산은 빅오 표기법 O(1)을 보장한다.)
	deque.push_back(1);
	deque.push_back(2);
	deque.push_back(3);

	cout << "deque Size : " << deque.size() << endl; // deque 사이즈 
	deque_Print(deque);

	cout << endl;

	cout << "deque pop 결과" << endl; // deque pop
	deque.pop_back();

	deque_Print(deque);


	return 0;
}

