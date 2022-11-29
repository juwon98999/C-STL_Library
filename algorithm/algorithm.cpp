#include <stdio.h>
#include <iostream>
#include <algorithm>// c++ STL algorithm 라이브러리
#include <vector>

using namespace std;


void Vecter_Print(vector<int> vec) {	// vec 출력 함수
	std::vector <int>::iterator iter;
	int count = 0;
	for (iter = vec.begin(); iter != vec.end(); iter++) {
		cout << count <<"번째 vector 결과 : " << *iter << "   ";
		count += 1;
	}
	cout << endl;
}

int main(void) {


	// ------------------------------------------------------ sort 정렬 관련 ------------------------------------------------------------

	vector <int> vec;
	cout << "vector 배열 값 추가" << endl; 
	vec.push_back(6);
	vec.push_back(3);
	vec.push_back(1);

	Vecter_Print(vec);

	cout << endl;

	cout << "vector 내림차순 정렬" << endl;
	sort(vec.begin(), vec.end(), greater<int>()); // Sort와 greater를 사용하여 내림차순 정렬
	Vecter_Print(vec);

	cout << endl;

	cout << "vector 오름차순 정렬" << endl;
	sort(vec.begin(), vec.end()); // Sort 사용하여 오름차순 정렬
	Vecter_Print(vec);


	// ------------------------------------------------------ 이진 탐색 관련 ------------------------------------------------------------

	cout << endl;
	cout << "binary_search 탐색" << endl;
	for (int i = 1; i <= 3; i++) {
		if (binary_search(vec.begin(), vec.end(), i)) { // 이진 탐색 Binary_search를 활용하여 찾을 값을 탐색 O(log2n)
			cout << "찾는 수 "  << i << " : " << " Vec 배열에 값이 존재합니다." << endl;
		}
		else {
			cout << "찾는 수 " << i << " : " << " Vec 배열에 값이 존재하지 않습니다." << endl;
		}
	}

	cout << endl;

	vector<int> arr = { 2,3,4,5,6,7 };
	cout << "lower_bound 이진 탐색" << endl;
	Vecter_Print(arr);
	cout << "값이 6 이상인 Index번호 : " << lower_bound(arr.begin(), arr.end(), 6) - arr.begin() << endl; 
	//lower_bound 를 사용하여 arr의 처음부터 끝까지 탐색하면서 6이상의 숫자가 처음으로 나오는 위치의 인덱스 번호를 반환한다.


	// ------------------------------------------------------ merge 관련 ------------------------------------------------------------
	cout << endl;

	cout << "merge 병합" << endl;
	vector<int> vec2;
	merge(vec.begin(), vec.end(), arr.begin(), arr.end(), back_inserter(vec2)); //정렬된 배열의 두범위를 지정하여 새로운 배열에 병합합니다.
	Vecter_Print(vec2);


	// ------------------------------------------------------ set 관련 ------------------------------------------------------------
	cout << endl;

	cout << "set_union 합집합" << endl; // 두 정렬된 원소들의 합집합을 구한다.
	vector<int> vec3;
	set_union(vec.begin(), vec.end(), arr.begin(), arr.end(), back_inserter(vec3));
	Vecter_Print(vec3);
	
	cout << endl;

	cout << "set_intersection 교집합" << endl; // 두 정렬된 원소들의 교집합을 구한다.
	vector<int> vec4;
	set_intersection(vec.begin(), vec.end(), arr.begin(), arr.end(), back_inserter(vec4));
	Vecter_Print(vec4);

	cout << endl;

	cout << "set_difference 차집합" << endl; // 두 정렬된 원소들의 차집합을 구한다.
	vector<int> vec5;
	set_difference(vec.begin(), vec.end(), arr.begin(), arr.end(), back_inserter(vec5));
	Vecter_Print(vec5);


	// ------------------------------------------------------ 힙 관련 ------------------------------------------------------------
	cout << endl;

	cout << "make_heap 힙 생성" << endl; // 특정 원소들을 힙으로 생성하며 push_heap, pop_heap을 사용하여 원소를 삽입 삭제 할 수 있다.
	vector<int> vec6 = { 1,2,3,4,5,6,7,8,9,10 };
	make_heap(vec6.begin(), vec6.end());
	Vecter_Print(vec6);

	cout << endl;

	cout << "sort_heap 힙 정렬" << endl;
	sort_heap(vec6.begin(), vec6.end());
	Vecter_Print(vec6);


	// ------------------------------------------------------ 최대 최소 관련 ------------------------------------------------------------
	cout << endl;

	vector<int> vec7 = { 3,6,7,12,1,5,2,4 };
	int _min = vec7[0];
	int _max = vec7[0];

	cout << "최대 최소 관련 배열 출력" << endl;
	Vecter_Print(vec7);

	for (int i = 1; i < vec7.size(); ++i) {
		_min = min(_min, vec7[i]);  // min 최소 원소를 찾는다.
		_max = max(_max, vec7[i]); // max 최대 원소를 찾는다.
	}

	cout << endl;

	cout << "Min 최솟값 탐색 결과 : " << _min << endl;
	cout << "Max 최대값 탐색 결과 : " << _max << endl;

	return 0;
}

