#include<iostream>

using namespace std;

int main() {
  int *ptr_ex;

  ptr_ex = new int;

  if (ptr_ex == NULL) {
    cout << "Memória insuficiente!" << endl;
    exit(1);
  }
  
  cout << "Endereço de ptr_ex: " << ptr_ex << endl;
  *ptr_ex = 90;
  cout << "Conteudo de prt_ex: " << *ptr_ex << endl;
  delete ptr_ex;
  return 0;
}