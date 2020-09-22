#pragma once

#ifndef OPERACIONES_H
#define OPERACIONES_H

#include "Nodo.h"

class Operaciones {
private:
	Nodo* primero;
	Nodo* ultimo;
public:
	Operaciones();

	bool estaVacia();
	void agregarElemento(int);

	void imprimir();

	void sumarMatriz();
	void restarMatriz();
	void multMatriz();
	void detMatriz(); 
};

#endif // !OPERACIONES_H
