#include "Usuario.h"

Usuario::Usuario(std::string us, std::string con)
{
	usuario = us;
	contra = con;
}

Usuario::Usuario()
{
}
void Usuario::llenarDia(std::string fecha) {
	dia nuevoDia;
	nuevoDia.fecha = fecha;
	dias.push_back(nuevoDia);
}

Usuario::~Usuario()
{
}
