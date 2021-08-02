#include <iostream>
#include <locale>
#include <string>

using namespace std;

int main() {
  int i;
  string a, b, c;

  cin >> a;

  for (i = 0; i < a.length(); i++) {
    a[i] = tolower(a[i]);
    if (a[i] != 'a' && a[i] != 'e' && a[i] != 'i' && a[i] != 'o' &&
        a[i] != 'u' && a[i] != 'y') {
      b = b + '.' + a[i];
    }
  }
  cout << b;
}

// convert string to array
// convert upper to lower
// delete vowel
// add "." before each char
// convert array to atring