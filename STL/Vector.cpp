#include <stdio.h>
#include <iostream>
#include <vector> // c++ STL vector 라이브러리

using namespace std;

void Vecter_Print(vector<int> vec) {	// vec 출력 함수
	std::vector <int>::iterator iter;
	for (iter = vec.begin(); iter != vec.end(); iter++) {
		cout << "현재 vector 결과 : " << *iter << endl;
	}
}

int main(void) {

	vector <int> vector; // vector 선언 (동적배열, 임의의 위체이 있는 원소 접근과, 뒤에서 원소를 추가하는 연산은 빅오 표기법 O(1)을 보장한다.)
	vector.push_back(1);
	vector.push_back(2);
	vector.push_back(3);

	cout << "vector Size : " << vector.size() << endl; // vector 사이즈 
	Vecter_Print(vector);

	cout << endl;

	cout << "vector pop 결과" << endl; // vector pop
	vector.pop_back();

	Vecter_Print(vector);


	// algorithm 추가 내용 작성 필요

	return 0;
}

