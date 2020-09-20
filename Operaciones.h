#pragma once


#ifndef OPERACIONES_H
#define OPERACIONES_H

class Operaciones {
private:
	int** num_matriz;
public:
	Operaciones();

	void sumarMatriz();
	void restarMatriz();
	void multMatriz();
	void detMatriz();

	void ingresarMatrizA();
	void ingresarMatrizB();
	void consultarMatrizA();
	void consiltarMatrizB();
};

#endif // !OPERACIONES_H
