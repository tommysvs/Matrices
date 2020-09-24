#include "Nodo.h"

Nodo::Nodo() : valor(-1), siguiente(nullptr), abajo(nullptr) {}

Nodo::Nodo(int _valor, Nodo* _siguiente, Nodo* _abajo) : valor(_valor), siguiente(_siguiente), abajo(_abajo) { }

void Nodo::setValor(int _valor) {
	this->valor = _valor;
}

void Nodo::setAbajo(Nodo* _abajo) {
	this->abajo = _abajo;
}

void Nodo::setSiguiente(Nodo* _siguiente) {
	this->siguiente = _siguiente;
}

int Nodo::getValor() {
	return this->valor;
}

Nodo* Nodo::getAbajo() {
	return this->abajo;
}

Nodo* Nodo::getSiguiente() {
	return this->siguiente;
} 