#pragma once
#include "General.h"
class Nodo
{
public:
	Nodo();
	~Nodo();
public: 
	Nodo * Siguiente;
	Nodo * Anterior;
	General valor;
};

