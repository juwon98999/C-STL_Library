#include <stdio.h>
#include <iostream>
#include <vector> // c++ STL vector ���̺귯��

using namespace std;

void Vecter_Print(vector<int> vec) {	// vec ��� �Լ�
	std::vector <int>::iterator iter;
	for (iter = vec.begin(); iter != vec.end(); iter++) {
		cout << "���� vector ��� : " << *iter << endl;
	}
}

int main(void) {

	vector <int> vector; // vector ���� (�����迭, ������ ��ü�� �ִ� ���� ���ٰ�, �ڿ��� ���Ҹ� �߰��ϴ� ������ ��� ǥ��� O(1)�� �����Ѵ�.)
	vector.push_back(1);
	vector.push_back(2);
	vector.push_back(3);

	cout << "vector Size : " << vector.size() << endl; // vector ������ 
	Vecter_Print(vector);

	cout << endl;

	cout << "vector pop ���" << endl; // vector pop
	vector.pop_back();

	Vecter_Print(vector);


	// algorithm �߰� ���� �ۼ� �ʿ�

	return 0;
}

