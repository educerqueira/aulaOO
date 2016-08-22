#ifndef PESSOAJURIDICA_HPP
#define PESSOAJURIDICA_HPP

#include <iostream>
#include <string>
#include "pessoa.hpp"

class PessoaJuridica:public Pessoa{
private:
	string cnpj;
	string razaoSocial;
	string situacaoCadastral;
public:
	void PessoaJuridica::setCnpj(string cnpj);
	string PessoaJuridica::getCnpj();
	void PessoaJuridica::setRazaoSocial(string razaoSocial);
        string PessoaJuridica::getRazaoSocial();
        void PessoaJuridica::setSituacaoCadastral(string situacaoCadastral);
        string PessoaJuridica::getSituacaoCadastral();

}
#endif
















#endif

