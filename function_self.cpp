#include <iostream>
using namespace std;

// finding area and volume using void function
void area(double length);
void volume(double length);

void area(double area) { cout << "The Area is : " << area; }
void volume(double volume) { cout << "The Volume is: " << volume; }

int main() {
  double length = 10;
  double square = length * length;
  double cube = length * length * length;

  void area(double area);
  void volume(double volume);

  return 0;
}
