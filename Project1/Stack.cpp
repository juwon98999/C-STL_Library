#include <stdio.h>
#include <iostream>
#include <stack> // c++ STL stack ���̺귯��

using namespace std;

int main(void) {

	stack <int> stack; // Stack ����
	stack.push(1);
	stack.push(2);
	stack.push(3);
	
	cout << "Stack Size : " << stack.size() << endl; // Stack ������ 

	for (int i = 0; i < 3; i++) {
		cout << "���� Stack�� ž : " << stack.top() << endl;
		stack.pop();
	}

}