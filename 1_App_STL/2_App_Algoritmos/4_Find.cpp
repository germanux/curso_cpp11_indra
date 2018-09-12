#include "stdafx.h"
#include <iostream>
#include <list>
#include <algorithm>

void ejemplo_find()
{
	using namespace std;

	list<int> lista;
	for (int nCount = 0; nCount < 6; nCount++) {
		lista.push_back(nCount);
	}

	list<int>::const_iterator it;
	it = find(lista.begin(), lista.end(), 4);
	lista.insert(it, 55);

	for (it = lista.begin(); it != lista.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
}