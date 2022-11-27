#include <stdio.h>
#include <iostream>
#include <algorithm>// c++ STL algorithm 라이브러리
#include <vector>

using namespace std;


void Vecter_Print(vector<int> vec) {	// vec 출력 함수
	std::vector <int>::iterator iter;
	for (iter = vec.begin(); iter != vec.end(); iter++) {
		cout << "현재 vector 결과 : " << *iter << endl;
	}
}

int main(void) {

	vector <int> vec;
	cout << "vector 배열 값 추가" << endl; 
	vec.push_back(6);
	vec.push_back(3);
	vec.push_back(1);

	Vecter_Print(vec);

	cout << endl;

	cout << "vector 오름차순 정렬" << endl;
	sort(vec.begin(), vec.end()); // 오름차순 정렬
	Vecter_Print(vec);

	cout << endl;

	cout << "vector 내림차순 정렬" << endl;
	sort(vec.begin(), vec.end(), greater<int>()); // 내림차순 정렬
	Vecter_Print(vec);

	return 0;
}

