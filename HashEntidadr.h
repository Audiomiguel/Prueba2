#pragma once
#include <string>
using namespace std;
class HashEntidad
{
private:
	int key;
	string value;
public:
	HashEntidad(int key, string value) : key(key), value(value) {}
	~HashEntidad() {}
	int getKey() { return key; }
	string getValue() { return value; }

};
