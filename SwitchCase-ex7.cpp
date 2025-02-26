// add your code here
#include <iostream>
using namespace std;

int main() {
    int input;
    cout << "Please enter a number: ";
    cin >> input;
    switch (input % 2) {
        case 0:
            if (input > 10) {
                cout << "hahaha\n";
                break;
            }
            else {
                cout << input * input << "\n";
            }
            break;
        case 1:
            cout << input / 2.0 << "\n";
            break;
        default:
            cout << "hahaha\n";
            break;
    }
    return 0;
}