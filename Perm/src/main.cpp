/*
 * main.cpp
 *
 *  Created on: 2019Äê3ÔÂ14ÈÕ
 *      Author: 15272
 */
#include <iostream>
#include "PermTest.h"
#include "myFunction.h"
using namespace std;
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

void sayHello(){
	cout << "say hello" << endl;
}
void swap(int a, int b) {
	int temp = a;
	a = b;
	b = temp;
}
int main() {
	int a[] = {1, 2, 3};
	perm(a, 0, 2);
	sayHello();
	return 0;
}



