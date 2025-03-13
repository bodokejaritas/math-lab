
  #include <iostream>
  #include <cmath>

  using namespace std;

  int main() {
  
    // prompt user for input
    cout << "Enter a number: ";
    double num;
    cin >> num;

    // calculate the square root of the number
    double result = sqrt(num);

    // display the result to the user
    cout << "The square root of " << num << " is " << result << endl;

    return 0;
}