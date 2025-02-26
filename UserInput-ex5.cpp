// Add your code here
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
    int input;
    cout << "Please enter an integer value: ";
    cin >> input;
    cout << "The value you entered is " << input << " and its factorial is " << fact(input) << "\n";
}