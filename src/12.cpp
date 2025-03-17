#include <iostream>
using namespace std;

int main() {
  cout << "Welcome to math lab" << endl;
  cout << "Enter your name: ";
  string name;
  cin >> name;
  cout << "Hello, " << name << "! Let's get started with some math problems." << endl;
  int problem1 = rand() % 10 + 1;
  int problem2 = rand() % 10 + 1;
  cout << "Problem 1: What is the sum of " << problem1 << " and " << problem2 << "?" << endl;
  int answer1;
  cin >> answer1;
  if (answer1 == problem1 + problem2) {
    cout << "That's correct!";
  } else {
    cout << "Sorry, that's incorrect.";
  }
  cout << endl;
  int problem3 = rand() % 10 + 1;
  int problem4 = rand() % 10 + 1;
  cout << "Problem 2: What is the product of " << problem3 << " and " << problem4 << "?" << endl;
  int answer2;
  cin >> answer2;
  if (answer2 == problem3 * problem4) {
    cout << "That's correct!";
  } else {
    cout << "Sorry, that's incorrect.";
  }
  cout << endl;
  return 0;
}
