#pragma once
#include <functional>
#include <vector>
using namespace std;
template <typename T>
class Nodo {
public:
	T* elemento;
	Nodo* izq;
	Nodo* der;
};
template <typename T>
class ArbolB {
	Nodo<T>* raiz;
	vector<string>*arregloString;
	typedef function<int(int, int)> Comp;
	Comp comparar;
	int contador;
private:
	void _buscar_por_tam(Nodo<T>*&nodo, int e) {
		if (nodo == nullptr)return;
		if (nodo->elemento->getTamanio() == e) {
			arregloString->push_back(nodo->elemento->getDireccion());
		}
		_buscar_por_tam(nodo->izq, e);
		_buscar_por_tam(nodo->der, e);
	}
	void _buscar_por_nombre(Nodo<T>*&nodo, string e) {
		if (nodo == nullptr)return;
		if (nodo->elemento->getNombre() == e) {
			arregloString->push_back(nodo->elemento->getDireccion());
		}
		_buscar_por_nombre(nodo->izq, e);
		_buscar_por_nombre(nodo->der, e);

	}
	void _buscar_por_extension(Nodo<T>*&nodo, string e) {
		if (nodo == nullptr)return;
		if (nodo->elemento->getExtension() == e) {
			arregloString->push_back(nodo->elemento->getDireccion());
		}
		_buscar_por_extension(nodo->izq, e);
		_buscar_por_extension(nodo->der, e);

	}
	void _buscar_por_fecha(Nodo<T>*&nodo, string e) {
		if (nodo == nullptr)return;
		if ((nodo->elemento->getFecha()).substr(0, 10)==e) {
			arregloString->push_back(nodo->elemento->getDireccion());
		}
		_buscar_por_fecha(nodo->izq, e);
		_buscar_por_fecha(nodo->der, e);

	}
	void _buscar_por_direccion(Nodo<T>*&nodo, string e) {
		if (nodo == nullptr)return;
		if (nodo->elemento->getDireccion() == e) {
			arregloString->push_back(nodo->elemento->getDireccion());
		}
		_buscar_por_direccion(nodo->izq, e);
		_buscar_por_direccion(nodo->der, e);

	}
	void _buscar_por_dni(Nodo<T>*&nodo, string e) {
		if (nodo == nullptr)return;
		if (nodo->elemento->getdni() == e) {
			arregloString->push_back(nodo->elemento->getDireccion());
		}
		_buscar_por_dni(nodo->izq, e);
		_buscar_por_dni(nodo->der, e);

	}
	void _buscar_mayor(Nodo<T>*&nodo, int e) {
		if (nodo == nullptr)return;
		if (nodo->elemento->getTamanio() > e) {
			arregloString->push_back(nodo->elemento->getDireccion()+ "\t\t" + to_string(nodo->elemento->getTamanio()));
		}
		_buscar_mayor(nodo->izq, e);
		_buscar_mayor(nodo->der, e);
	}
	void _buscar_menor(Nodo<T>*&nodo, int e) {
		if (nodo == nullptr)return;
		if (nodo->elemento->getTamanio() < e) {
			arregloString->push_back(nodo->elemento->getDireccion() + "\t\t" + to_string(nodo->elemento->getTamanio()));
		}
		_buscar_menor(nodo->izq, e);
		_buscar_menor(nodo->der, e);
	}
	void _descendente_tam_mayor(Nodo<T>*&nodo,int e) {
		if (nodo == nullptr)return;
		_descendente_tam_mayor(nodo->der, e);
		if (nodo->elemento->getTamanio() > e) {
			arregloString->push_back(nodo->elemento->getDireccion() + "\t\t" + to_string(nodo->elemento->getTamanio()));
		}
		_descendente_tam_mayor(nodo->izq, e);
	}
	void _descendente_tam_menor(Nodo<T>*&nodo, int e) {
		if (nodo == nullptr)return;
		_descendente_tam_menor(nodo->der, e);
		if (nodo->elemento->getTamanio() < e) {
			arregloString->push_back(nodo->elemento->getDireccion() + "\t\t" + to_string(nodo->elemento->getTamanio()));
		}
		_descendente_tam_menor(nodo->izq, e);
	}
	void _ascendente_tam_mayor(Nodo<T>*&nodo, int e) {
		if (nodo == nullptr)return;
		_ascendente_tam_mayor(nodo->izq, e);
		if (nodo->elemento->getTamanio() > e) {
			arregloString->push_back(nodo->elemento->getDireccion() + "\t\t" + to_string(nodo->elemento->getTamanio()));
		}
		_ascendente_tam_mayor(nodo->der, e);
	}
	void _ascendente_tam_menor(Nodo<T>*&nodo, int e) {
		if (nodo == nullptr)return;
		_ascendente_tam_menor(nodo->izq, e);
		if (nodo->elemento->getTamanio() < e) {
			arregloString->push_back(nodo->elemento->getDireccion() + "\t\t" + to_string(nodo->elemento->getTamanio()));
		}
		_ascendente_tam_menor(nodo->der, e);
	}
	vector<string>* getvectorstring() {
		return arregloString;
	}
	void limpiarvector() {
		arregloString->clear();
	}
	bool _insertar_tam(Nodo<T>*&nodo, T* e) {

		contador++;
		if (contador != 1) {
			if (nodo == nullptr) {
				nodo = new Nodo<T>();
				nodo->elemento = e;
				cout << nodo->elemento->getTamanio() << endl;
				return true;
			}
			else {
				int r = comparar(nodo->elemento->getTamanio(), e->getTamanio());
				//if (r == 0) return true;
				if (r < 0) {
					return _insertar_tam(nodo->der, e);
				}
				else {
					return _insertar_tam(nodo->izq, e);
				}

			}
		}
	}
	
	long long _minimo(Nodo<T>*nodo) {
		if (nodo->izq == nullptr) return nodo->elemento;
		else {
			return 	_minimo(nodo->izq);
		}
	}
	long long _maximo(Nodo<T>*nodo) {
		if (nodo->der == nullptr)return nodo->elemento;
		else {
			return _maximo(nodo->der);
		}
	}
	
	bool _eliminar(Nodo<T>*& nodo, T e) {
		if (nodo == nullptr) return false;
		else {
			long long r = comparar(nodo->elemento, e);
			if (r < 0) {
				return _eliminar(nodo->der, e);
			}
			else if (r > 0) {
				return _eliminar(nodo->izq, e);
			}
			else { // r==0 es porque se encontró el elemento e en el arbol
				if (nodo->der == nullptr && nodo->izq == nullptr) {//caso 1
					nodo = nullptr;
					delete nodo;
					return true;
				}
				else if (nodo->izq == nullptr) { //caso 2
					nodo = nodo->der;
					return true;
				}
				else if (nodo->der == nullptr) { //caso 3
					nodo = nodo->izq;
					return true;
				}
				else { //caso 4
					Nodo<T> *aux = nodo->der; //Se establece buscar el menor elemento por la derecha
					while (aux->izq != nullptr)
					{
						aux = aux->izq; //Se obtiene la hoja menor
					}
					nodo->elemento = aux->elemento; //Se actualiza el elemento en el nodo raiz y
					return _eliminar(nodo->der, aux->elemento); //se envía a eliminar el elemento en el arbol por la derecha
				}
			}
		}
	}
public:
	ArbolB() {
		arregloString = new vector<string>();
		this->comparar = [](int a, int b)->int {return a - b; };
		raiz = nullptr;
		contador = 0;
	}
	vector<string>* _getvectorstring() {
		return getvectorstring();
	}
	void _limpiarvector() {
		limpiarvector();
	}
	void buscar_por_tam(int e) {
		_buscar_por_tam(raiz, e);
	}
	void buscar_por_nombre(string e) {
		_buscar_por_nombre(raiz, e);
	}
	void buscar_por_extension(string e) {
		_buscar_por_extension(raiz, e);
	}
	void buscar_por_fecha(string e) {
		_buscar_por_fecha(raiz, e);
	}
	void buscar_por_dni(string e) {
		_buscar_por_dni(raiz, e);
	}
	void buscar_por_direccion(string e) {
		_buscar_por_direccion(raiz, e);
	}
	void buscar_mayor(int e) {
		_buscar_mayor(raiz, e);
	}
	void buscar_menor(int e) {
		_buscar_menor(raiz, e);
	}
	void descendente_tam_mayor(int e) {
		_descendente_tam_mayor(raiz, e);
	}
	void descendente_tam_menor(int e) {
		_descendente_tam_menor(raiz, e);
	}
	void ascendente_tam_mayor(int e) {
		_ascendente_tam_mayor(raiz, e);
	}
	void ascendente_tam_menor(int e) {
		_ascendente_tam_menor(raiz, e);
	}
	bool insertar_tam(T* e) {
		return _insertar_tam(raiz, e);
	}
	long long maximo() {
		return _maximo(raiz);
	}
	long long minimo() {
		return _minimo(raiz);
	}
	bool eliminar(T e) {
		return _eliminar(raiz, e);
	}
};
