#include <iostream>
#include "PessoaFisica.hpp"
#include "PessoaJuridica.hpp"

using namespace std;

//main file
int main(){

   PessoaFisica umaPessoa;
   PessoaJuridica umaEmpresa;

   cout << "Nome: " << umaPessoa.getNome() << endl;
   cout << "idade: " << umaPessoa.getIdade() << endl;
   cout << "Telefone: " << umaPessoa.getTelefone() << endl;

  outraPessoa.setNome("Eduardo");
  outraPessoa.setIdade("20");
  outraPessoa.setTelefone("99612-2513");

  cout << "Nome: " << outraPessoa.setNome() << endl;
  cout << "Idade: " << outraPessoa.setIdade() << endl;
  cout << "Telefone: " << outraPessoa.setTelefone << endl;

  return 0;
}

