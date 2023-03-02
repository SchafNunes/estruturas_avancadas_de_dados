#include<iostream>
#include<vector>

using namespace std;

int main() {
  vector<int> numeros_primos = {2,3,5,7,11,13,17,19};
  vector<string> dias = {"Domingo", "Segunda", "Terça", "Quarta", "Quinta", "Sexta", "Sabado"};

  for (int n : numeros_primos) {
    cout << n << endl;
  }

  for (string d : dias) {
    cout << d << endl;
  }
    return 0;
}