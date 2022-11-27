#include <stdio.h>
#include <iostream>
#include <bitset>// c++ STL bitset 라이브러리

using namespace std;


int main(void) {

	bitset<10> a(3), b(5);  // 비트연산 라이브러리 bitset
	cout << "(a & b) 결과 : " << (a & b) << endl;
	cout << "(a | b) 결과 : " << (a | b) << endl;
	cout << "(a ^ b) 결과 : " << (a ^ b) << endl;
	cout << "(~a) 결과 : " << (~a) << endl;
	cout << "(~b) 결과 : " << (~b) << endl;

	return 0;
}

