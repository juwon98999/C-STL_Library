#include <stdio.h>
#include <iostream>
#include <map> // c++ STL map ���̺귯��

using namespace std;

map<int, string> map_Set; // map ���� (��ųʸ� �ڷᱸ��, ���� ���԰� ����, Ž�� ���� ������ O(log n)�� �����Ѵ�.)

void map_Print(map<int, string> m) {		//map  ��� �Լ�
	for (std::map<int, string>::iterator iter = m.begin(); iter != m.end(); iter++) {
		cout << "Key : " << iter->first << " Value : " << iter->second << endl;
	}
}

int main(void) {

	
	map_Set.insert({ 1, "���"});
	map_Set.insert({ 2, "����" });
	map_Set.insert({ 3, "�ٳ���" });

	map_Print(map_Set);

	cout << endl;
	cout << "map Size : " << map_Set.size() << endl; // map ������ 

	cout << endl;

	cout << "map Ž��" << endl; // map find
	if (map_Set.find(1) != map_Set.end()) {
		cout << "ã�� Ű �� [ 1 ]  ���� ã�� ���� �����մϴ�." << endl;
	}
	else {
		cout << "���� ã�� ���� �����մϴ�." << endl;
	}

	cout << endl;

	cout << "map Ž�� fail" << endl; // map find fail
	if (map_Set.find(4) != map_Set.end()) {
		cout << "���� ã�� ���� �����մϴ�." << endl;
	}
	else {
		cout << "ã�� Ű �� [ 4 ] ���� ã�� ���� �������� �ʽ��ϴ�." << endl;
	}

	return 0;
}

