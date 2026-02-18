// Read Data from file
#include <fstream>
#include <iostream>
using namespace std;

int main() {

  ifstream fin;
  string line;

  fin.open("data.txt");

  getline(fin, line);
  cout << line;

  fin.close();
  return 0;
}