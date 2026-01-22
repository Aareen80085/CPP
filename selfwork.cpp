#include <iostream>
using namespace std;
// if statement:-
// int main() {
//   int age;
//   cout << "Enter your age: " << endl;
//   cin >> age;
//   if (age >= 18) {
//     cout << "You are eligible to vote" << endl;
//   } else {
//     cout << "You are not eligble to vote. Grow up lil bro" << endl;
//   }
//   return 0;
// }

// else if statement:-
// int main() {

//   int age;

//   cout << "Enter your age:" << endl;
//   cin >> age;

//   if (age >= 3 && age < 14) {
//     cout << "You are in primary school" << endl;
//   } else if (age >= 14 && age < 18) {
//     cout << "You are in secondary school" << endl;
//   } else if (age >= 18 && age < 22) {
//     cout << "You are in college" << endl;
//   } else {
//     cout << "Get a job nigga!!" << endl;
//   }
//   return 0;
// }

// switch case statement:-
// example 1:-
// int main() {
//   int month;
//   cout << "Enter month number(1-12): ";
//   cin >> month;
//   switch (month) {
//   case 1:
//     cout << "Jan" << endl;
//     break;
//   case 2:
//     cout << "Feb" << endl;
//     break;
//   case 3:
//     cout << "Mar" << endl;
//     break;
//   case 4:
//     cout << "Apr" << endl;
//     break;
//   case 5:
//     cout << "May" << endl;
//     break;
//   case 6:
//     cout << "Jun" << endl;
//     break;
//   case 7:
//     cout << "Jul" << endl;
//     break;
//   case 8:
//     cout << "Aug" << endl;
//     break;
//   case 9:
//     cout << "Sep" << endl;
//     break;
//   case 10:
//     cout << "Oct" << endl;
//     break;
//   case 11:
//     cout << "Nov" << endl;
//     break;
//   case 12:
//     cout << "Dec" << endl;
//     break;
//   default:
//     cout << "Invalid month number" << endl;
//     break;
//   }
//   return 0;
// }

// example 2:-

void Square(double &side) { double result = side * side; }

void circle(double &r) {
  double square = r * r;
  double result = 3.14 * square;
}

void rectangle(double &l, double &b) { double result = l * b; }

void triangle(double &b, double &h) {
  double bh = b * h;
  double result = 0.5 * bh;
}

int main() {
  int shape;
  int result;

  switch (shape) {
    cout << "Please Enter the Shape that you want(Circle, Square, Triangle, "
            "Rectangle): "
         << endl;
  case 'A':
    void circle(double r);
    cout << "The Area of Cicle is: " << result << endl;
    break;
  case 'B':
    void square(double side);
    cout << "The Area of Square is: " << result << endl;
    break;
  case 'C':
    void rectangle(double l, double b);
    cout << "Area of rectangle is: " << result << endl;
    break;
  case 'D':
    void triangle(double b, double h);
    cout << "Area of triangle is : " << result << endl;
    break;
  default:
    cout << "Invalid option" << endl;
    break;
  }
  return 0;
}

// nested loops:-

// int main() {

//   int rows;
//   int columns;
//   char symbol;

//   cout << "Enter the number of rows: ";
//   cin >> rows;

//   cout << "Enter the number of coloums: ";
//   cin >> columns;

//   cout << "Enter the symbol which you want: ";
//   cin >> symbol;

//   for (int i = 1; i <= rows; i++) {

//     for (int j = 1; j <= columns; j++) {
//       cout << symbol;
//     }
//     cout << '\n';
//   }

//   return 0;
// }
