#include <stdio.h>
#include <iostream>
#include <set> // c++ STL set ���̺귯��

using namespace std;

void set_Print(set<int> set) {	// set ��� �Լ�
	std::set <int>::iterator iter;
	for (iter = set.begin(); iter != set.end(); iter++) {
		cout << "���� set ��� : " << *iter << endl;
	}
}

int main(void) {

	set <int> set; // set ���� (�������� ����Ʈ��, ���� ���԰� ����, Ž�� ���� ������ O(log n)�� �����Ѵ�.)
	set.insert(1);
	set.insert(2);
	set.insert(3);

	cout << "set Size : " << set.size() << endl; // set ������ 
	set_Print(set);

	cout << endl;

	cout << "set Ž��" << endl; // set find
	if (set.find(3) != set.end()) {
		cout << "ã�� �� [ 3 ] : ���� ã�� ���� �����մϴ�." << endl;
	}
	else {
		cout << "���� ã�� ���� �������� �ʽ��ϴ�." << endl;
	}
	
	cout << endl;

	cout << "set Ž�� �ش� ���� �������� �ʴ� ���" << endl; // set find fail
	if (set.find(4) != set.end()) {
		cout << "���� ã�� ���� �����մϴ�." << endl;
	}
	else {
		cout << "ã�� �� [ 4 ] ���� ã�� ���� �������� �ʽ��ϴ�." << endl;
	}

	return 0;
}

