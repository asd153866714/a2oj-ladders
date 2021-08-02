#include <iostream>
#include <string>
using namespace std;

// string toLower(string *str) {
//   int i;
//   for (i=0; i<str.length(); i++) {
//     str[i] = tolower((*str)[i]);
//   }
//   return *str;
// }

int main() {
  string a = "ApPLe";
  int b = 1;
  int *ptr1 = &b;
  int *ptr2;
  ptr2 = &b;

  // toLower(&a);
  // cout << a << endl;
  // cout << a << endl;
  cout << &b << endl;
  // cout << ptr1 << ;
}