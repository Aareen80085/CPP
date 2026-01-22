#include <iostream>
using namespace std;

int main() {
  char op;
  double num1;
  double num2;
  double result;

  cout << "----------- CALCULATOR -------------\n" << endl;

  cout << "Enter either (+, -, /, *)";
  cin >> op;

  cout << "Enter first number: " << endl;
  cin >> num1;

  cout << "Enter Second number: " << endl;
  cin >> num2;

  switch (op) {
  case '+':
    result = num1 + num2;
    cout << "result: " << result << endl;
    break;
  case '-':
    result = num1 - num2;
    cout << "result:" << result << endl;
    break;
  case '*':
    result = num1 * num2;
    cout << "result: " << result << endl;
    break;
  case '/':
    result = num1 / num2;
    cout << "result: " << result << endl;
  default:
    cout << "That wasnt a vaild response" << endl;
    break;
  }
  cout << "-----------------------------------" << endl;

  return 0;
}