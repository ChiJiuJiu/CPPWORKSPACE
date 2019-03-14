/*
 * PermTest.h
 *
 *  Created on: 2019Äê3ÔÂ14ÈÕ
 *      Author: 15272
 */

#ifndef PERMTEST_H_
#define PERMTEST_H_

class PermTest {
public:
	PermTest();
	template<class Type>
	void perm(Type list[], int k, int m);
	void swap(int a, int b);
	virtual ~PermTest();
};

#endif /* PERMTEST_H_ */
