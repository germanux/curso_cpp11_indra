#include "stdafx.h"
#include <thread>
#include <iostream>
#include <fstream>

using namespace std;

void muestra_fichero() {
	ifstream in("C:\\tmp\\muestrafichero.txt");
	if (!in) {
		cerr << "Error al abrir fichero origen" << endl;
		exit(1);
	}
	char c;
	while (in) {
		in.read(&c, sizeof(char));
		cout << c;
		this_thread::sleep_for(chrono::milliseconds(50));
	}
	cout << endl;
	in.close();
}
void copia_fichero() {
	ifstream in("C:\\tmp\\origen.zip", ios::binary);
	if (!in) {
		cerr << "Error al abrir fichero origen" << endl;
		exit(1);
	}
	ofstream out("C:\\tmp\\copia.zip", ios::binary);
	if (!out) {
		cerr << "Error al abrir fichero copia" << endl;
		exit(1);
	}
	char c;
	while (in) {
		in.read(&c, sizeof(char));
		out.write(&c, sizeof(char));
	}
	out.close();
	in.close();
	cout << " FIN DE LA COPIA DEL FICHERO " << endl;
}
void calcula_primos() {
	for (int i = 0; i < 10000; i++)
	{
		bool esPrimo = true;
		for (int j = 2; j < i; j++) {
			if (i%j == 0) { esPrimo = false; }
		}
		if (esPrimo) {
			cout << "Primo encontrado: <" << i << ">" << endl;
		}
	}
}
void ticTac() {
	for (int i = 0; i < 60; i++) {
		cout << "TIC-TAC" << endl;
		this_thread::sleep_for(chrono::milliseconds(1000));
	}
}
void practica_multithreading()
{
	std::thread t1(copia_fichero);
	std::thread t2(muestra_fichero);
	std::thread t3(calcula_primos);
	std::thread t4(ticTac);
	t1.join();
	t2.join();
	t3.join();
	t4.join();
}