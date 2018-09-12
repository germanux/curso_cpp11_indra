
#include "stdafx.h"
#include <iostream>
#include <list>
#include <algorithm>

void ejemplo_min_max()
{
	using namespace std;

	list<int> lista;
	for (int nCount = 0; nCount < 6; nCount++) {
		lista.push_back(nCount);
	}
	list<int>::const_iterator it;
	it = min_element(lista.begin(), lista.end());
	cout << *it << " ";
	it = max_element(lista.begin(), lista.end());
	cout << *it << " ";
	cout << endl;
}
