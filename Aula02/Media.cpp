#include<iostream>
#include<vector>

using namespace std;

int main() {
  float notaUm[5];
  float notaDois[5];
  float media[5];
 // vector<float> notaDois;

  for(int i = 0; i < 5; i++) {
    cout << "Digite a nota 1: " << endl;
    cin >> notaUm[i];  
    cout << "Digite a nota 2: " << endl;
    cin >> notaDois[i];
  }

  for (int i = 0; i < 5; i++) {
    media[i] = (notaUm[i] + notaDois[i]) / 2;
    if (media[i] < 6 ) {
      cout << "Media do aluno " << i + 1 << ": " << media[i] << endl;
    }
  }
    cout << "Hello World" << endl;
    return 0;
}