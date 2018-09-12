#include "stdafx.h"
#include <iostream>
#include <vector>
#include <algorithm>

void ejemplo_sort()
{
	using namespace std;
	vector<int> vect;
	vect.push_back(12);
	vect.push_back(9);
	vect.push_back(33);
	vect.push_back(-5);

	sort(vect.begin(), vect.end());
	vector<int>::const_iterator it;
	for (it = vect.begin(); it != vect.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;

	reverse(vect.begin(), vect.end());
	for (it = vect.begin(); it != vect.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
}