#include<iostream>
#include<string>

using namespace std;

struct pessoa {
  string nome;
  int idade;
  string cor;
  string escolaridade;
};

int main() {

  pessoa joao;
  
  cout << "Informe o nome: ";
  cin >> joao.nome;
  cout << "Informe a idade: ";
  cin >> joao.idade;
  cout << "Informe a cor: ";
  cin >> joao.cor;
  cout << "Informe a escolaridade: ";
  cin >> joao.escolaridade;

  cout << "Nome: " << joao.nome << endl
       << "Idade: " << joao.idade << endl
       << "Cor: " << joao.cor << endl
       << "Escolaridade: " << joao.escolaridade << endl
  ;
  return 0;
}