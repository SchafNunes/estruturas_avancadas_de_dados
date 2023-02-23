#include<iostream>

using namespace std;

int main() {
    int a, b, c, *ponteiro;

    a = 10;
    b = 20;
    c = 30;
    ponteiro = &c;

    cout << " A = " << a << endl
         << " B = " << b << endl
         << " C = " << c << endl
         << " Ponteiro = " << ponteiro << endl;

    return 0;
}