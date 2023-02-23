#include<iostream>
#include<stack>

using namespace std;

int main() {
    stack<int> myStack;
    int sum(0);

    for(int i = 1; i < 10; i++) {
      myStack.push(i);
    }

    while (!myStack.empty()) {
      sum += myStack.top();
      cout << "Ordem: " << myStack.top() << endl;
      myStack.pop();
    }

    cout << "Total: " << sum << endl;
    return 0;
}