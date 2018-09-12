
#include "stdafx.h"
#include <random>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void practica_aleatorios()
{
	vector<int> v;
	std::random_device rd;
	std::knuth_b mersenne(rd());  //aqui ponemos el generador
	for (int count = 0; count < 5; ++count)
	{
		v.push_back(mersenne());
	}

	sort(v.begin(), v.end());

	vector<int>::const_iterator it;
	for (it = v.begin(); it != v.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
}