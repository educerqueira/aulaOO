#include <iostream>
#include <string>
#include "PessoaJuridica"

void PessoaJuridica::setCnpj(string cnpj){
	this->cnpj = cnpj;
}
string PessoaJuridica::getCnpj(){
	return cnpj;
}
void PessoaJuridica::setRazaoSocial(string razaoSocial){
	this->razaoSocial = razaoSocial;
}
string PessoaJuridica::getRazaoSocial(){
	return razaoSocial;
}
void PessoaJuridica::setSituacaoCadastral(){
	this->situacaoCadastral = situacaoCadastral;
}
string PessoaJuridica::getSituacaoCadastral(){
	return situacaoCadastral;
}
