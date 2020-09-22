#include <iostream>
#include "Operaciones.h"
#include "Nodo.h"

using namespace std;

Operaciones::Operaciones() : primero(nullptr), ultimo(nullptr) {}

bool Operaciones::estaVacia() {
	return primero == nullptr;
}

void Operaciones::agregarElemento(int _valor) {
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


void Operaciones::sumarMatriz() { 

} 

void Operaciones::restarMatriz() { 

} 

void Operaciones::multMatriz() {

} 

void Operaciones::detMatriz() {

} 