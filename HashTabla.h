#pragma once
#include "HashEntidadr.h"
class HashTabla
{
private:
	HashEntidad** tabla;
	int numElementos;
	int sizeTabla;
public:
	HashTabla(int sizeTabla = 1000)
	{
		this->sizeTabla = sizeTabla;
		tabla = new HashEntidad*[sizeTabla];
		for (int i = 0; i < sizeTabla; i++)
		{
			tabla[i] = nullptr;
		}
		numElementos = 0;
	}
	~HashTabla() {}
	void InsertarHash(int key, string value)
	{
		int base, step, hash;
		if (numElementos == sizeTabla) return;
		else
		{
			base = key % sizeTabla;
			hash = base;
			step = 0;
			while (tabla[hash] != nullptr)
			{
				hash = (base + step) % sizeTabla;
				step++;
			}
		}
		tabla[hash] = new HashEntidad(key, value);
		numElementos++;
	}
	string buscarParaIngresar(int key)
	{
		int i = key % sizeTabla;
		int corredor = i;

		if (tabla[i] == nullptr)
			return " ";
		else
		{
			while (i < numElementos)
			{
				if (tabla[i] != nullptr && tabla[i]->getKey() == key)
					return tabla[i]->getValue();
				else
					i++;
			}
			return " ";
		}
	}
};
