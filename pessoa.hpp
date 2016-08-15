#ifndef PESSOA_H
#define PESSOA_H

#include <iostream>
#include <string>

using namespace std;

class Pessoa{
private: 
	string nome;	
	string idade;
	string telefone;
public:
	Pessoa();
	Pessoa(string nome, string idade, string telefone);
	string getIdade();
	void setIdade(string idade);
	string getNome();
	void setNome(string nome);
	string getTelefone();
	void setTelefone(string telefone);
};

#endif



}
