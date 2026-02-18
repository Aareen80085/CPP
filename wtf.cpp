#include <iostream>
#include <string>
using namespace std;

// int main() {
//   char str[100];
//   int v = 0, c = 0, d = 0;

//   cout << "Enter a string: ";
//   cin.getline(str, 100);

//   for (int i = 0; str[i] != '\0'; i++) {

//     if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' ||
//         str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' ||
//         str[i] == 'O' || str[i] == 'U') {
//       v++;
//     }

//     else if ((str[i] >= 'a' && str[i] <= 'z') ||
//              (str[i] >= 'A' && str[i] <= 'Z')) {
//       c++;
//     }

//     else if (str[i] >= '0' && str[i] <= '9') {
//       d++;
//     }
//   }

//   cout << "Vowels: " << v << endl;
//   cout << "Consonants: " << c << endl;
//   cout << "Digits: " << d << endl;

//   return 0;
// }

// int main() {
//   string str, word = "", largest = " ";

//   cout << "Enter sentence: ";
//   getline(cin, str);

//   for (int i = 0; i < str.length(); i++) {
//     if (str[i] == ' ' || str[i] == '\0') {
//       if (word.length() > largest.length()) {
//         largest = word;
//       }
//       word = "";
//     } else {
//       word += str[i];
//     }
//   }

//   if (word.length() > largest.length()) {
//     largest = word;
//   }

//   cout << "Largest word: " << largest << endl;
//   return 0;
// }

// int main() {
//   string str, oldword, newWord;

//   cout << "Enter string: ";
//   getline(cin, str);

//   cout << "Enter word to replace: ";
//   cin >> oldword;

//   cout << "Enter new word: ";
//   cin >> newWord;

//   size_t pos = str.find(oldword);
//   if (pos != string::npos) {
//     str.replace(pos, oldword.length(), newWord);
//   }
//   cout << "Updated string: " << str;
//   return 0;
// }
