#pragma once
#include <string>
#include "dia.h"
#include <iostream>; 
#include <vector>;
class Usuario
{
public:
	Usuario();
	~Usuario();
public:
	std::vector<dia> dias;
	void llenarDia(std::string fecha);
	std::string usuario;
	std::string contra;
	Usuario::Usuario(std::string us, std::string con);
};

