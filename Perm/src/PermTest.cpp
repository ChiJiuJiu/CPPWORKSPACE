/*
 * PermTest.cpp
 *
 *  Created on: 2019年3月14日
 *      Author: 15272
 */

#include "PermTest.h"
#include <iostream>
#include<algorithm>
using namespace std;
PermTest::PermTest() {
	// TODO Auto-generated constructor stub

}

PermTest::~PermTest() {
	// TODO Auto-generated destructor stub
}
template<class Type>
void perm(Type list[], int k, int m) {
	if (k == m) {
		for (int i = 0; i <= m; i++) {
			cout << list[i];
		}
		cout << "\n";
	} else {
		for (int i = k; i <= m; i++) {
			swap(list[i], list[k]);
			perm(list, k + 1, m);
			swap(list[i], list[k]);
		}
	}
}

void swap(int a, int b) {
	int temp = a;
	a = b;
	b = temp;
}

int main() {
	int a[] = { 1, 2, 3 };
	perm(a, 0, 2);
	cout << "全排列后的数组" << "\n";
	for (int i = 0; i < 3; i++) {
		cout << a[i];
	}
	cout << endl;
	return 0;
}
