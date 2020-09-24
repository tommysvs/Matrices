#pragma once

#ifndef OPERACIONES_H
#define OPERACIONES_H

#include <string>
#include "Nodo.h"

using namespace System;

class Operaciones {
private:
	Nodo* primero;
	Nodo* abajo;
public:
	Operaciones();

	bool estaVacia();
	void agregar_MatrizA(int);
	void agregar_MatrizB(int);

	void imprimir();

	void sumarMatriz(String^);
	void restarMatriz(String^);
	void multMatriz(String^);
	void detMatriz(String^);
};

#endif // !OPERACIONES_H
