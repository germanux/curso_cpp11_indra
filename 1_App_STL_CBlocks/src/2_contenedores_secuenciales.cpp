#include <iostream>
#include <array>
#include <vector>
#include <deque>
#include <list>

using namespace std;

void ej_array_vector() {
    array<int, 1000> listaNumeros;
    for (int i = 0; i < 1000; i++) {
        listaNumeros[i] = i * 2;
    }/*
    for (int i = 0; i < 1000; i++) {
        cout << "Elemento " << i << ": " << listaNumeros[i] << "\n\r";
    }*/

    vector<int> miVector;
    int sum(0); /* int sum = 0;*/
    miVector.push_back(100);
    miVector.push_back(222);
    miVector.push_back(333);

    cout << "Longitud de miVector: " << miVector.size() << "\n";

    while (!miVector.empty()) {
        sum += miVector.back();
        miVector.pop_back();
    }
    cout << "Longitud de miVector: " << miVector.size() << "\n";
    cout << "Sum vale: " << sum << "\n";
}

void ejemplo_dequee() {
    deque<int> deq;
    for (int i = 0; i < 3; i++) {
        deq.push_back(i);
        deq.push_front(10 - i);
    }
    for (int i = 0; i < deq.size(); i++) {
        cout << deq[i] << " ";
    }
    cout << endl;
}

void ejemplo_list() {
    list<int> lista;
    for (int i = 0; i < 3; i++) {
        lista.push_back(i);
        lista.push_front(10 - i);
    }
    list<int>::iterator it;
    for (it = lista.begin(); it != lista.end(); it++) {
        cout << *it << ", ";
    }
    cout << endl;
}
