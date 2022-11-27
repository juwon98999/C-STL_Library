#include <stdio.h>
#include <iostream>
#include <stack> // c++ STL stack 라이브러리

using namespace std;

int main(void) {

	stack <int> stack; // Stack 선언
	stack.push(1);
	stack.push(2);
	stack.push(3);
	
	cout << "Stack Size : " << stack.size() << endl; // Stack 사이즈 

	for (int i = 0; i < 3; i++) {
		cout << "현재 Stack의 탑 : " << stack.top() << endl;
		stack.pop();
	}

}