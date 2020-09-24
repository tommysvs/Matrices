#pragma once

#ifndef NODO_H
#define NODO_H

class Nodo {
private:
	int valor;
	Nodo* siguiente;
	Nodo* abajo;
public:
	Nodo();
	Nodo(int, Nodo*, Nodo*);

	void setValor(int);
	void setAbajo(Nodo*);
	void setSiguiente(Nodo*);

	int getValor();
	Nodo* getAbajo();
	Nodo* getSiguiente(); 
};

#endif // !NODO_H