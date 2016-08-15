#include "pessoa.hpp"
#include <string>

using namespace std;

Pessoa::Pessoa(){
  nome = "";
  idade = "";
  telefone "";
}

Pessoa::Pessoa(string nome, string idade, string telefone){
   this->nome = nome;
   this->idade = idade;
   this->telefone = telefone;
}

string Pessoa::getNome(){
	return nome;
}

void Pessoa::setNome(string nome){
	this->nome = nome;
}

string Pessoa::getIdade(){
	return idade;
}

void Pessoa::setIdade(){
	this->idade = idade;
}

string Pessoa::getTelefone(){
	return telefone;
}
