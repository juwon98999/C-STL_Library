#include <stdio.h>
#include <iostream>
#include <set> // c++ STL set 라이브러리

using namespace std;

void set_Print(set<int> set) {	// set 출력 함수
	std::set <int>::iterator iter;
	for (iter = set.begin(); iter != set.end(); iter++) {
		cout << "현재 set 결과 : " << *iter << endl;
	}
}

int main(void) {

	set <int> set; // set 선언 (균형잡힌 이진트리, 원소 삽입과 삭제, 탐색 등의 연산은 O(log n)을 보장한다.)
	set.insert(1);
	set.insert(2);
	set.insert(3);

	cout << "set Size : " << set.size() << endl; // set 사이즈 
	set_Print(set);

	cout << endl;

	cout << "set 탐색" << endl; // set find
	if (set.find(3) != set.end()) {
		cout << "찾는 수 [ 3 ] : 현재 찾는 값이 존재합니다." << endl;
	}
	else {
		cout << "현재 찾는 값이 존재하지 않습니다." << endl;
	}
	
	cout << endl;

	cout << "set 탐색 해당 값이 존재하지 않는 경우" << endl; // set find fail
	if (set.find(4) != set.end()) {
		cout << "현재 찾는 값이 존재합니다." << endl;
	}
	else {
		cout << "찾는 수 [ 4 ] 현재 찾는 값이 존재하지 않습니다." << endl;
	}

	return 0;
}

