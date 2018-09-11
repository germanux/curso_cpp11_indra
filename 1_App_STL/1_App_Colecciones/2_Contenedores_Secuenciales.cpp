
#include "stdafx.h"
#include <iostream>
#include <array>
#include <vector>
#include <deque>
#include <list>

void ejemplo_array() {
	std::array<int, 10> listaNumeros;
	for (int i = 0; i < 10; i++) {
		listaNumeros[i] = i * 2;
	}
	for (int i = 0; i < 10; i++) {
		std::cout << "i = " << i << ", listaNumeros[i] = " << listaNumeros[i] << "\n\r";
	}
}

void ejemplo_vector() {
	try
	{
		std::vector<int> miVector;
		int sum(0);
		miVector.push_back(100);
		miVector.push_back(200);
		miVector.push_back(300);

		std::cout << "Longitud de  miVector: " << miVector.size() << '\n';

		while (!miVector.empty())
		{
			sum += miVector.back();
			miVector.pop_back();
		}
		std::cout << "Longitud de  miVector: " << miVector.size() << '\n'
			<< "Los elementos de  miVector  se suman a " << sum << '\n';

		std::exception e("Provocando excepción");
		throw e;
	}
	catch (std::exception &cException)
	{
		std::cerr << "Mensaje excepcion: " << cException.what() << std::endl;
	}
}

void ejemplo_deque() {
	using namespace std;
	deque<int> deq;
	for (int i = 0; i < 3; i++)
	{
		deq.push_back(i);
		deq.push_front(10 - i);
	}

	for (int i = 0; i < deq.size(); i++) {
		cout << deq[i] << " ";
	}
	cout << endl;
}

void ejemplo_list() {
	using namespace std;
	list<int> lista;
	for (int i = 0; i < 3; i++)
	{
		lista.push_back(i);
		lista.push_front(10 - i);
	}
	list<int>::iterator it;
	for (it = lista.begin();it != lista.end();it++) {
		cout << *it << " ";
	}

	cout << endl;
}