// #include <cmath>
// #include <cstring>
#include <iostream>
// #include <string>
using namespace std;

// Non-void function
// int add(int a, int b) { return a + b; }

// // Void function
// void greet() { cout << "Welcome to C++ Functions\n"; }

// // Boolean return function

// bool isEven(int n) { return (n % 2 == 0); }

// // call by value
// void callbyValue(int x) {
//   x = 100;
//   cout << "Inside call by Value: " << x << endl;
// }
// // call by reference
// void callByReference(int &x) { x = 200; }
// // call by pointer
// void callByPointer(int *x) { *x = 300; }

// int main() {

//   greet();

//   cout << "====CALL BY VALUE=====\n" << endl;
//   int a = 10;
//   callbyValue(a);
//   cout << "After Call by value: " << a << endl;

//   cout << "====CALL BY REFERENCE====\n" << endl;
//   int b = 20;
//   callByReference(b);
//   cout << "After call by reference: " << b << endl;

//   cout << "====CALL BY POINTER====\n" << endl;
//   int c = 30;
//   callByPointer(&c);
//   cout << "After call by pointer<<: " << c << endl;

//   return 0;
// }

// int factorial(int n);

// int main() {
//   int n;
//   cout << "Enter a number: " << endl;
//   cin >> n;
//   cout << "Factorial = " << factorial(int n) << endl;

//   return 0;
// }

// int factorial(int n){
//   int factorial = 1;
//   for (int i = 1; i <= n; i++) {
//     factorial *= i;
//     return factorial
//   }
// }

// Fibonacci series

// int fibonacci(int n) {
//   if (n <= 1)
//     return n;
//   return fibonacci(n - 1) + fibonacci(n - 2);
// }

// int main() {
//   int n;
//   cout << "Enter terms ";
//   cin >> n;
//   for (int i = 0; i < n; i++)
//     cout << fibonacci(i) << " ";
//   return 0;
// }

// Inline function

// inline int maximum(int a, int b) { return (a > b) ? a : b; }
// int main() {
//   cout << "Max = " << maximum(10, 20) << endl;
//   return 0;
// }

// using temp variable

// void swap(int &a, int &b) {
//   int temp = a;
//   a = b;
//   b = temp;
// }

// int main() {
//   int a;
//   int b;
//   cout << "Enter 1st number: " << endl;
//   cin >> a;
//   cout << "Enter 2nd number: " << endl;
//   cin >> b;
//   swap(a, b);
//   cout << a << " " << b << endl;
//   return 0;
// }

//

// int main() {
//   int x = 25;
//   int *p = &x;
//   cout << "Value of x: " << x << endl;
//   cout << "Address of x: " << &x << endl;
//   cout << "Value stored in p: " << p << endl;
//   cout << "Value pointed by p: " << *p << endl;

//   return 0;
// }

// void swap(int *a, int *b) {
//   int temp = *a;
//   *a = *b;
//   *b = temp;
// }

// int main() {
//   int a = 10, b = 20;
//   swap(&a, &b);
//   cout << "a = " << a << " " << "b = " << b << endl;
//   return 0;
// }

// Null pointer

// int main() {
//   int *p = nullptr;

//   if (p == nullptr)
//     cout << "Pointer is null";

//   return 0;
// }

// int main() {
//   string cars[] = {"Camaro", "Mustang", "Camery"};

//   for (int i = 0; i <= 3; i++) {
//     cout << cars[i] << " ";
//   }
//   return 0;
// }

// adding elements to array using user input
int main() {
  int arr[3];

  cout << "Enter 3 numbers:\n";
  for (int i = 0; i < 3; i++) {
    cin >> arr[i];
  }

  cout << "Array elements are : \n";
  for (int i = 0; i < 3; i++) {
    cout << arr[i] << " ";
  }
  return 0;
}