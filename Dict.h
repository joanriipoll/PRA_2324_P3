#ifndef DICT_H
#define DICT_H
#include <string>

template <typename V> 
class Dict {
    public:
        // ... aquí los métodos virtuales puros
	
	//Inserta el valor key -> value en el diccionario
	virtual void insert(std::string key, V value) = 0;

	//Busca el valor corerespindiente a key
	virtual V search(std::string key) = 0;

	//Elimina el par key -> value si se encuentra en el diccionario
	virtual V remove(std::string key) = 0;

	//Devuelve el numero de elementos que tiene el diccionario
	virtual int entries() = 0;
};

#endif
