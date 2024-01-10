#ifndef TABLEENTRY_H
#define TABLEENTRY_H

#include <string>
#include <ostream>

template <typename V> 
class TableEntry {
    public:

	//Atributos 
	//El elemento clave del par    
	std::string key;

	//El elemento valor del par
	V value;


	//Métodos
	//Metodo constructor con el par clave->valor.
	TableEntry(std::string key, V value){
		this->key = key;
		this->value = value;
	}

	//Metodo constructor que crea una entrada con clave pero sin valor
	TableEntry(std::string key){
		this->key = key;
	}

	//Crea una entrada con clave "" y sin valor 
	TableEntry(){
		this->key = " ";//Key vacia
	}

	//Sobrecarga el operador global para saber si dos instacias son iguales solo comparando si las claves son iguales
	friend bool operator==(const TableEntry<V> &te1, const TableEntry<V> &te2){
		return te1.key == te2.key;
	}
	
	//Sobrecarga el operador != para saber dos instancias son diferentes solo comparando la clave
	friend bool operator!=(const TableEntry<V> &te1, const TableEntry<V> &te2){
		return te1.key != te2.key;
	}

	//Sobrecarga el operador << para imprimir la instacia key -> valor 
	friend std::ostream& operator<<(std::ostream &out, const TableEntry<V> &te){
		out << "La clave y el valor son: " << te.key << "-->" << te.value << std::endl;
		return out;
	}


};

#endif
