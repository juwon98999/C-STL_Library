#include <stdio.h>
#include <iostream>
#include <bitset>// c++ STL bitset ���̺귯��

using namespace std;


int main(void) {

	bitset<10> a(3), b(5);  // ��Ʈ���� ���̺귯�� bitset
	cout << "(a & b) ��� : " << (a & b) << endl;
	cout << "(a | b) ��� : " << (a | b) << endl;
	cout << "(a ^ b) ��� : " << (a ^ b) << endl;
	cout << "(~a) ��� : " << (~a) << endl;
	cout << "(~b) ��� : " << (~b) << endl;

	return 0;
}

