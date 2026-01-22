#include <iostream>
using namespace std;

int main() {
  double temp;
  char unit;
  double result;

  cout << "-----Welcome to Temperature Converter-----\n" << endl;
  cout << "Enter F for Temperature conversion in fahrenheit\n" << endl;
  cout << "Enter C for Temperature conversion in Celsius\n" << endl;
  cout << "Please Enter your unit\n" << endl;

  cin >> unit;

  if (unit == 'F' || unit == 'f') {
    cout << "Enter the temp in Celsius: " << endl;
    cin >> temp;

    result = (1.8 * temp) + 32.0;
    cout << "The Temperature is : " << result << endl;
  }

  else if (unit == 'C' || unit == 'c') {
    cout << "Enter the temp in fahrenheit: " << endl;
    cin >> temp;

    result = (temp - 32) * 0.55;
    cout << "The Temperature is : " << result << endl;
  }

  cout << "-------------------------------------------" << endl;

  return 0;
}