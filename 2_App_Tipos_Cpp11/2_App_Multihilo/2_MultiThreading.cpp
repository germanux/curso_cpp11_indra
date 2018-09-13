#include "stdafx.h"
#include <iostream>
#include <thread>

using namespace std;

void cuerpo_del_hilo() {
	cout << "Hola, " << endl;
	this_thread::sleep_for(chrono::milliseconds(2000));
	cout << "mundo!" << endl;
}
void ej_thread() {
	thread hilo_1(cuerpo_del_hilo);
	thread hilo_2(cuerpo_del_hilo);
	cout << "Antes del join 1..." << endl;
	hilo_1.join();
	cout << "Despues del join 1..." << endl;
	hilo_2.join();
	cout << "Despues del join 2..." << endl;
}
void ej_sleep_for() {
	cout << "Antes de dormir" << endl;
	this_thread::sleep_for(chrono::milliseconds(1900));
	cout << "Despues de dormir" << endl;
}
void ej_thread_lambda() {
	thread t1([]() -> void { cout << "Hola lambda. Por favor, da sentido a mi vida." << endl; });
	t1.join();
}
void cuenta_hasta_20() {
	for (int i = 0; i < 20; i++) {
		cout << i << endl;
		this_thread::sleep_for(10ms);
	}
}
void ej_thread_concurrencia() {
	thread t1(cuenta_hasta_20);
	thread t2(cuenta_hasta_20);
	thread t3(cuenta_hasta_20);
	t1.join(); 
	t2.join();
	t3.join();
}