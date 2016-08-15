#include <iostream>
#include "pessoa.hpp"

using namespace std;

//main file
int main(){

   Pessoa umaPessoa;
   Pessoa outraPessoa;

   cout << "Nome: " << umaPessoa.getNome() << endl;
   cout << "idade: " << umaPessoa.getIdade() << endl;
   cout << "Telefone: " << umaPessoa.getTelefone() << endl;

  outraPessoa.setNome("Paulo");
  outraPessoa.setIdade("32");
  outraPessoa.setTelefone("555-555");

  cout << "Nome: " << outraPessoa.setNome() << endl;
  cout << "Idade: " << outraPessoa.setIdade() << endl;
  cout << "Telefone: " << outraPessoa.setTelefone << endl;

  return 0;
}

