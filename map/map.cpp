#include <stdio.h>
#include <iostream>
#include <map> // c++ STL map 라이브러리

using namespace std;

map<int, string> map_Set; // map 선언 (딕셔너리 자료구조, 원소 삽입과 삭제, 탐색 등의 연산은 O(log n)을 보장한다.)

void map_Print(map<int, string> m) {		//map  출력 함수
	for (std::map<int, string>::iterator iter = m.begin(); iter != m.end(); iter++) {
		cout << "Key : " << iter->first << " Value : " << iter->second << endl;
	}
}

int main(void) {

	
	map_Set.insert({ 1, "사과"});
	map_Set.insert({ 2, "딸기" });
	map_Set.insert({ 3, "바나나" });

	map_Print(map_Set);

	cout << endl;
	cout << "map Size : " << map_Set.size() << endl; // map 사이즈 

	cout << endl;

	cout << "map 탐색" << endl; // map find
	if (map_Set.find(1) != map_Set.end()) {
		cout << "찾는 키 값 [ 1 ]  현재 찾는 값이 존재합니다." << endl;
	}
	else {
		cout << "현재 찾는 값이 존재합니다." << endl;
	}

	cout << endl;

	cout << "map 탐색 fail" << endl; // map find fail
	if (map_Set.find(4) != map_Set.end()) {
		cout << "현재 찾는 값이 존재합니다." << endl;
	}
	else {
		cout << "찾는 키 값 [ 4 ] 현재 찾는 값이 존재하지 않습니다." << endl;
	}

	return 0;
}

