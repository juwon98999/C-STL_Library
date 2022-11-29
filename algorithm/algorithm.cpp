#include <stdio.h>
#include <iostream>
#include <algorithm>// c++ STL algorithm ���̺귯��
#include <vector>

using namespace std;


void Vecter_Print(vector<int> vec) {	// vec ��� �Լ�
	std::vector <int>::iterator iter;
	int count = 0;
	for (iter = vec.begin(); iter != vec.end(); iter++) {
		cout << count <<"��° vector ��� : " << *iter << "   ";
		count += 1;
	}
	cout << endl;
}

int main(void) {


	// ------------------------------------------------------ sort ���� ���� ------------------------------------------------------------

	vector <int> vec;
	cout << "vector �迭 �� �߰�" << endl; 
	vec.push_back(6);
	vec.push_back(3);
	vec.push_back(1);

	Vecter_Print(vec);

	cout << endl;

	cout << "vector �������� ����" << endl;
	sort(vec.begin(), vec.end(), greater<int>()); // Sort�� greater�� ����Ͽ� �������� ����
	Vecter_Print(vec);

	cout << endl;

	cout << "vector �������� ����" << endl;
	sort(vec.begin(), vec.end()); // Sort ����Ͽ� �������� ����
	Vecter_Print(vec);


	// ------------------------------------------------------ ���� Ž�� ���� ------------------------------------------------------------

	cout << endl;
	cout << "binary_search Ž��" << endl;
	for (int i = 1; i <= 3; i++) {
		if (binary_search(vec.begin(), vec.end(), i)) { // ���� Ž�� Binary_search�� Ȱ���Ͽ� ã�� ���� Ž�� O(log2n)
			cout << "ã�� �� "  << i << " : " << " Vec �迭�� ���� �����մϴ�." << endl;
		}
		else {
			cout << "ã�� �� " << i << " : " << " Vec �迭�� ���� �������� �ʽ��ϴ�." << endl;
		}
	}

	cout << endl;

	vector<int> arr = { 2,3,4,5,6,7 };
	cout << "lower_bound ���� Ž��" << endl;
	Vecter_Print(arr);
	cout << "���� 6 �̻��� Index��ȣ : " << lower_bound(arr.begin(), arr.end(), 6) - arr.begin() << endl; 
	//lower_bound �� ����Ͽ� arr�� ó������ ������ Ž���ϸ鼭 6�̻��� ���ڰ� ó������ ������ ��ġ�� �ε��� ��ȣ�� ��ȯ�Ѵ�.


	// ------------------------------------------------------ merge ���� ------------------------------------------------------------
	cout << endl;

	cout << "merge ����" << endl;
	vector<int> vec2;
	merge(vec.begin(), vec.end(), arr.begin(), arr.end(), back_inserter(vec2)); //���ĵ� �迭�� �ι����� �����Ͽ� ���ο� �迭�� �����մϴ�.
	Vecter_Print(vec2);


	// ------------------------------------------------------ set ���� ------------------------------------------------------------
	cout << endl;

	cout << "set_union ������" << endl; // �� ���ĵ� ���ҵ��� �������� ���Ѵ�.
	vector<int> vec3;
	set_union(vec.begin(), vec.end(), arr.begin(), arr.end(), back_inserter(vec3));
	Vecter_Print(vec3);
	
	cout << endl;

	cout << "set_intersection ������" << endl; // �� ���ĵ� ���ҵ��� �������� ���Ѵ�.
	vector<int> vec4;
	set_intersection(vec.begin(), vec.end(), arr.begin(), arr.end(), back_inserter(vec4));
	Vecter_Print(vec4);

	cout << endl;

	cout << "set_difference ������" << endl; // �� ���ĵ� ���ҵ��� �������� ���Ѵ�.
	vector<int> vec5;
	set_difference(vec.begin(), vec.end(), arr.begin(), arr.end(), back_inserter(vec5));
	Vecter_Print(vec5);


	// ------------------------------------------------------ �� ���� ------------------------------------------------------------
	cout << endl;

	cout << "make_heap �� ����" << endl; // Ư�� ���ҵ��� ������ �����ϸ� push_heap, pop_heap�� ����Ͽ� ���Ҹ� ���� ���� �� �� �ִ�.
	vector<int> vec6 = { 1,2,3,4,5,6,7,8,9,10 };
	make_heap(vec6.begin(), vec6.end());
	Vecter_Print(vec6);

	cout << endl;

	cout << "sort_heap �� ����" << endl;
	sort_heap(vec6.begin(), vec6.end());
	Vecter_Print(vec6);


	// ------------------------------------------------------ �ִ� �ּ� ���� ------------------------------------------------------------
	cout << endl;

	vector<int> vec7 = { 3,6,7,12,1,5,2,4 };
	int _min = vec7[0];
	int _max = vec7[0];

	cout << "�ִ� �ּ� ���� �迭 ���" << endl;
	Vecter_Print(vec7);

	for (int i = 1; i < vec7.size(); ++i) {
		_min = min(_min, vec7[i]);  // min �ּ� ���Ҹ� ã�´�.
		_max = max(_max, vec7[i]); // max �ִ� ���Ҹ� ã�´�.
	}

	cout << endl;

	cout << "Min �ּڰ� Ž�� ��� : " << _min << endl;
	cout << "Max �ִ밪 Ž�� ��� : " << _max << endl;

	return 0;
}

