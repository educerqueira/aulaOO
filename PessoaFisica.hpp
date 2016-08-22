#ifndef PESSOAFISICA_HPP
#define PESSOAFISICA_HPP

#include <iostream>
#include "Pessoa.hpp"
#include <string>

using namespace std;

class PessoaFisica:public Pessoa{
private:
	string cpf;
	string rg;
	string estadoCivil;

public:
	string PessoaFisica::getCpf();
	void PessoaFisica::setCpf(string cpf);
	string PessoaFisica::getRg();
	void PessoaFisica::setRg(string rg);
	string PessoaFisica::getEstadoCivil();
	void PessoaFisica::setEstadoCivil(string estadoCivil);

}
#endif
