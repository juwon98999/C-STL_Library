#include <stdio.h>
#include <iostream>
#include <algorithm>// c++ STL algorithm ���̺귯��
#include <vector>

using namespace std;


void Vecter_Print(vector<int> vec) {	// vec ��� �Լ�
	std::vector <int>::iterator iter;
	for (iter = vec.begin(); iter != vec.end(); iter++) {
		cout << "���� vector ��� : " << *iter << endl;
	}
}

int main(void) {

	vector <int> vec;
	cout << "vector �迭 �� �߰�" << endl; 
	vec.push_back(6);
	vec.push_back(3);
	vec.push_back(1);

	Vecter_Print(vec);

	cout << endl;

	cout << "vector �������� ����" << endl;
	sort(vec.begin(), vec.end()); // �������� ����
	Vecter_Print(vec);

	cout << endl;

	cout << "vector �������� ����" << endl;
	sort(vec.begin(), vec.end(), greater<int>()); // �������� ����
	Vecter_Print(vec);

	return 0;
}

