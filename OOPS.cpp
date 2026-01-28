#include <iostream>
using namespace std;

// class Student
// {
//     public:
//         int rollNO;
//         string name;

//         void display()
//         {
//             cout<<"Roll no: "<<rollNO<< endl;
//             cout<<"Name: "<<name<<endl;

//         }
// };
// int main()
// {
//     Student s1;     // Object creation
//     s1.rollNO = 21;
//     s1.name = "Bob";
//     s1.display();
//     return 0;
// }

// class Book
// {
//     public:
//         string name;
//         float price;

//         void display()
//         {
//             cout<<"Book name: "<<name<<endl;
//             cout<<"Price: "<<price<<endl;
//         }
// };
// int main()
// {
//     Book b1;
//     b1.name = "Percy Jackson";
//     b1.price = 399.99;
//     b1.display();
//     return 0;
// }

// class BankAccount
// {
//     private:
//         int Balance;
//     public:
//         void setBalance(int b)
//         {
//             Balance = b;
//         }

//     int getBalance()
//     {
//         return Balance;
//     }

// };
// int main(){
//     BankAccount acc;

//     acc.setBalance(5000);
//     cout<<"Balance: "<<acc.getBalance()<<endl;

//     return 0;
// }

// class Rectangle
// {
//     public:
//         int length, width;
//         int area()
//         {
//             return length*width;
//         }

// };
// int main(){
//     Rectangle r;
//     r.length = 5;
//     r.width = 4;
//     cout<<"Area = " << r.area()<<endl;
//     return 0;
// }
// class Car {
// public:
//   string brand;
//   int year;
//   void show() {
//     cout << "Brand: " << brand << endl;
//     cout << "Year: " << year << endl;
//   }
// };
// int main() {
//   Car c1;
//   c1.brand = "Toyota";
//   c1.year = 2022;
//   c1.show();
//   return 0;
// }
// class Car {
// private:
//   string brand;
//   int year;

// public:
//   void getData(string a, int b) {
//     brand = a;
//     year = b;
//   }
//   void show() {
//     cout << "Brand: " << brand << endl;
//     cout << "Year: " << year << endl;
//   }
// };
// int main() {
//   Car c1;
//   c1.getData("Toyota", 2022);
//   c1.show();
//   return 0;
// }

// class rectangle {
// private:
//   int length;
//   int width;

// public:
//   void getData(int l, int w) {
//     length = l;
//     width = w;
//   }
//   int area() { return length * width; }
// };
// int main() {
//   rectangle r;
//   r.getData(5, 4);
//   cout << "Area = " << r.area() << endl;
//   return 0;
// }

// class Employee {
// public:
//   int id;
//   float salary;
//   void display() {

//     cout << "ID: " << id << endl;
//     cout << "Salary: " << salary << endl;
//   }
// };
// int main() {
//   Employee e1, e2;
//   e1.id = 101;
//   e1.salary = 30000;
//   e2.id = 102;
//   e2.salary = 40000;
//   e1.display();
//   e2.display();
//   return 0;
// }

// class Employee {
// private:
//   int id;
//   float salary;

// public:
//   void getData(int i, float s) {
//     id = i;
//     salary = s;
//   }
//   void displayData() {
//     cout << "ID: " << id << endl;
//     cout << "Salary: " << salary << endl;
//   }
// };
// int main() {
//   Employee e1, e2;
//   e1.getData(101, 30000);
//   e2.getData(102, 40000);
//   e1.displayData();
//   e2.displayData();
//   return 0;
// }

// class Student {
// public:
//   int roll;
//   float marks;
//   void input() {
//     cout << "Enter Roll No: ";
//     cin >> roll;
//     cout << "Enter Marks: ";
//     cin >> marks;
//   }
//   void output() {
//     cout << "Roll No: " << roll << endl;
//     cout << "Marks: " << marks << endl;
//   }
// };
// int main() {
//   Student s;
//   s.input();
//   s.output();
//   return 0;
// }

// class student {
// private:
//   int roll;
//   float marks;

// public:
//   void getData(int r, float m) {
//     roll = r;
//     marks = m;
//   }
//   void input() {
//     cout << "Enter Roll No: ";
//     cin >> roll;
//     cout << "Enter Marks: ";
//     cin >> marks;
//   }
//   void showData() {
//     cout << "Roll No: " << roll << endl;
//     cout << "Marks: " << marks << endl;
//   }
// };
// int main() {
//   student s;
//   s.input();
//   s.showData();
//   return 0;
// }

// INHERITENCE

// class Emp {

// public:
//   int empId;
//   void showId() { cout << "Employee ID: " << empId << endl; }
// };

// class Salary : public Emp {
// public:
//   int salary;

//   void showSalary() { cout << "Salary: " << salary << endl; }
// };

// int main() {
//   Salary s;
//   s.empId = 123;
//   s.salary = 5000;
//   s.showId();
//   s.showSalary();
//   return 0;
// }

// MULTI LEVEL CLASS

// example 1:-
//   class Student {
//   public:
//     int roll = 1;
//   };

// class marks : public Student {
// public:
//   int m1 = 80, m2 = 85;
// };

// class Result : public marks {
// public:
//   void display() {
//     cout << "Roll no: " << roll << endl;
//     cout << "Total Marks: " << m1 + m2 << endl;
//   }
// };

// int main() {
//   Result r;
//   r.display();
//   return 0;
// }

// example2 :-
//  class Student {
//  public:
//    int roll;
//    void input() { cin >> roll; }
//  };

// class marks : public Student {
// public:
//   int python = 80, cpp = 85, HTML = 90, JS = 75;
// };

// class Result : public marks {
// public:
//   void display() {
//     cout << "Roll no: " << roll << endl;
//     cout << "Total Marks: " << python + cpp + HTML + JS << endl;
//     cout << "Total percentage: " << ((python + cpp + HTML + JS) * 100 / 400)
//          << endl;
//   }
// };

// int main() {
//   Result r;
//   r.input();
//   r.display();
//   return 0;
// }

// MULTIPLE INHERITANCE WITH DATA MEMBERS

// example 1:-

// class Sports {
// public:
//   int physic;
//   int endurance;
//   int stamina;
//   void input() {
//     cout << "Please enter your physic OVR (0-100)" << endl;
//     cin >> physic;
//     cout << "Please enter your endurance OVR (0-100)" << endl;
//     cin >> endurance;
//     cout << "Please enter your stamina OVR (0-100)" << endl;
//     cin >> stamina;
//   }
// };

// class Academics {
// public:
//   int totalAcdemics;
//   void totalAcd() {
//     cout << "Please Enter your class academics total (0-400)" << endl;
//     cin >> totalAcdemics;
//   }
// };

// class Student : public Sports, public Academics {
// public:
//   void gtotal() {
//     cout << "Grand Total = " << (physic + endurance + stamina) +
//     totalAcdemics
//          << endl;
//   }
// };

// int main() {
//   Student s;
//   s.input();
//   s.totalAcd();
//   s.gtotal();
//   return 0;
// }

// example3:-

// class shape {
// public:
//   void draw() { cout << "Drawing shape" << endl; }
// };

// class Rectangle {
// public:
//   double length, breadth;

//   void R_area() {
//     cout << "Enter the length: " << endl;
//     cin >> length;
//     cout << "Enter the breadth: " << endl;
//     cin >> breadth;
//     cout << "Area of Rectangle = " << length * breadth << endl;
//   }
// };
// class Triangle : public shape, public Rectangle {
//   double base, height;

//   void T_area() {
//     cout << "Enter the base: " << endl;
//     cin >> base;
//     cout << "Enter the height: " << endl;
//     cin >> height;
//     cout << "Area of Triangle" << 0.5 * (base * height) << endl;
//   }
// };

// int main() {
//   Triangle a;
//   a.draw();
//   a.R_area();
//   a.

//       return 0;
// }

// POLYMORPHISM

// Function Overloading (compile-time)

// class Calculator {
// public:
//   int add(int a, int b) { return a + b; };
//   float add(float a, float b) { return a + b; }
// };
// int main() {
//   Calculator c;
//   cout << c.add(10, 20) << endl;
//   cout << c.add(5.5f, 4.5f) << endl;
// }

// Character overloading(using characters)

// class Print {
// public:
//   void print(char c) { cout << "Character: " << c << endl; }
//   void print(string s) { cout << "string: " << s << endl; }
// };

// int main() {
//   Print p;
//   p.print('A');
//   p.print("Hello");
//   return 0;
// }