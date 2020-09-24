#include <iostream>
#include <fstream>
#include <atlstr.h>
#include "Operaciones.h"
#include "Nodo.h"

using namespace std;
using namespace System;

Operaciones::Operaciones() : primero(nullptr), ultimo(nullptr) {}

bool Operaciones::estaVacia() {
	return primero == nullptr;
}

void Operaciones::agregar_MatrizA(int _valor) {
	Nodo* nuevo = new Nodo(_valor, nullptr, nullptr);

	if (estaVacia()) {
		primero = ultimo = nuevo;

		ultimo->setSiguiente(primero);
		primero->setAnterior(ultimo);
	}
	else {
		ultimo->setSiguiente(nuevo);
		nuevo->setAnterior(ultimo);

		ultimo = nuevo;

		ultimo->setSiguiente(primero);
		primero->setAnterior(ultimo);
	}
}

void Operaciones::agregar_MatrizB(int _valor) {
	Nodo* nuevo = new Nodo(_valor, nullptr, nullptr);

	if (estaVacia()) {
		primero = ultimo = nuevo;

		ultimo->setSiguiente(primero);
		primero->setAnterior(ultimo);
	}
	else {
		ultimo->setSiguiente(nuevo);
		nuevo->setAnterior(ultimo);

		ultimo = nuevo;

		ultimo->setSiguiente(primero);
		primero->setAnterior(ultimo);
	}
}

void Operaciones::imprimir() {
	Nodo* actual = primero;

	do {
		cout << actual->getValor();
		actual = actual->getSiguiente();
	} while (actual != primero);

	cout << "\n"; 
}

void Operaciones::sumarMatriz(String^ nombre_archivo) { 
	ofstream sumarM_file(CString(nombre_archivo) + ".dat", ios::app);

	sumarM_file << "Probando";

	sumarM_file.close();
} 

void Operaciones::restarMatriz(String^ nombre_archivo) {
	ofstream restarM_file(CString(nombre_archivo) + ".dat", ios::app);

	restarM_file << "Probando";

	restarM_file.close();
} 

void Operaciones::multMatriz(String^ nombre_archivo) {
	ofstream multM_file(CString(nombre_archivo) + ".dat", ios::app);

	multM_file << "Probando";

	multM_file.close();
} 

void Operaciones::detMatriz(String^ nombre_archivo) {
	ofstream detM_file(CString(nombre_archivo) + ".dat", ios::app);

	detM_file << "Probando";

	detM_file.close();
} 