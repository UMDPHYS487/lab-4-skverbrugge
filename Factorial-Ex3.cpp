#include <iostream>
using namespace std;

int main() {
    int fact = 1;
    for (int n=1; n<11; n++) {
        fact = fact * n;
        cout << "Factorial of " << n << " is " << fact << "\n";
    }
}