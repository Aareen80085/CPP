// Read Data from file
#include <fstream>
#include <iostream>
using namespace std;

// int main() {

//   ifstream fin;
//   string line;

//   fin.open("data.txt");

//   getline(fin, line);
//   cout << line;

//   fin.close();
//   return 0;
// }

// int main() {
//   ofstream fout("student.txt");

//   fout << "roll: 1\n";
//   fout << "Name: Rahul1\n";
//   fout << "Marks: 85\n";

//   fout.close();
//   cout << "Student data saved";
//   return 0;
// }

// int main() {
//   ofstream fout("input.txt");
//   string name;

//   cout << "Enter your name: ";
//   cin >> name;
//   fout << name;
//   fout.close();
//   cout << "Name Saved to file";
//   return 0;
// }

// int main() {
//   ifstream file("data.txt");
//   char ch;
//   int count = 0;

//   while (file.get(ch)) {
//     count++;
//   }
//   file.close();
//   return 0;
// }

int main() {
  ifstream file("data.txt");
  string word, search;
  bool found = false;

  cout << "Enter word to search";
  cin >> search;
  while (file >> word) {
    if (word == search) {
      found = true;
      break;
    }
  }
  file.close();
  if (found)

    cout << "Word found";
  else
    cout << "Word not found";
  return 0;
}