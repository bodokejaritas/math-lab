#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter an integer n: ";
    cin >> n;

    if (n % 2 == 0) {
        for (int i = 1; i <= n; i += 2) {
            cout << i << " ";
        }
    } else {
        for (int i = 1; i <= n; i += 3) {
            cout << i << " ";
        }
    }

    return 0;
}
