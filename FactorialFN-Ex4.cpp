#include <iostream>
using namespace std;

int fact (int num) {
    int factorial=1;
    for (int n=num; n>1; n--) {
        factorial = factorial * n;
    }
    return factorial;
}

int main () {
    for (int n=1; n<11; n++) {
        cout << "Factorial of " << n << " is " << fact(n) << "\n";
    }
}