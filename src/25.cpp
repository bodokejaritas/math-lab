#include <iostream>
using namespace std;

int main() {
    int i;
    cout << "Please enter an integer: ";
    cin >> i;
    if (i % 2 == 0) {
        cout << "The number is even.";
    } else {
        cout << "The number is odd.";
    }
    return 0;
}
