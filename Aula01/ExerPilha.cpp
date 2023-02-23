#include<iostream>
#include<stack>

using namespace std;

int main() {
  stack<int> carros;
  stack<int> aux;
  int carro;
  bool encontrei = false;

  carros.push(111);
  carros.push(222);
  carros.push(333);
  carros.push(444);
  carros.push(555);
  carros.push(666);
  
  cout << "Qual seu carro: " ;
  cin >> carro;

  while(!carros.empty()) {
    if (carros.top() == carro) {
      encontrei = true;
      break;
    }
    aux.push(carros.top());
    carros.pop();

  }

  if(encontrei) 
  {
    while(!aux.empty()) {
      cout << aux.top() << endl;
      aux.pop();
    }
  }
  return 0;
}