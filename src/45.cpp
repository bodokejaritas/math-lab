#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    if (num1 > 0 && num2 > 0) {
        cout << "The product of " << num1 << " and " << num2 << " is " << num1 * num2 << endl;
    } else {
        cout << "At least one number must be positive." << endl;
    }
}
