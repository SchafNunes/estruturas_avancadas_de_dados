#include <iostream>
using namespace std;
int main () {
  int x;
  int *ptr;
  x = 5;
  ptr = &x;

  cout << "O valor da variavel X e: " << *ptr << endl;
  *ptr = 100;
  cout << "Agora, X vale: " << *ptr << endl;
  return 0;
 }