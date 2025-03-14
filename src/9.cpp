
#include <iostream>
#include <cmath>
using namespace std;
int main(){
  int num1=0, num2=0, ans=0;
  cout<<"Enter first number: ";
  cin>>num1;
  cout<<"Enter second number: ";
  cin>>num2;
  ans = pow(num1, num2);
  cout<<ans<<endl;
  return 0;
}