#pragma once
#include <string>
#include <iostream>
using namespace std;

class HistoriasClinicas
{
private:
	string nombre;
	int tamanio;
	string extension;
	string direccion;
	string fecha;
	string dni;
public:
	HistoriasClinicas(string nombre, int tamanio, string extension,
		string fecha, string direccion, string dni)
		: nombre(nombre), tamanio(tamanio), extension(extension),
		direccion(direccion), fecha(fecha), dni(dni) {};
	~HistoriasClinicas() {}

	string getNombre() { return nombre; }
	int getTamanio() { return tamanio; }
	string getExtension() { return extension; }
	string getDireccion() { return direccion; }
	string getFecha() { return fecha; }
	string getdni() { return dni; }
	string mostrarArchivoCompleto() {
		return (nombre + "\t" + dni + "\t" + to_string(tamanio) + "\t" + extension + fecha);
	}
};
