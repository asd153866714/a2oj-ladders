#include <iostream>
#include <locale>
#include <string>

using namespace std;

string toLower(string str) {
  int i;
  for (i = 0; i < str.length(); i++) {
    str[i] = tolower(str[i]);
  }
  return str;
}

int strSize(string str) {
  int i, size = 0;
  for (i = 0; i < str.length(); i++) {
    size += (int)str[i];
  }
  return size;
}

int main() {
  string a, b;

  cin >> a >> b;
  a = toLower(a);
  b = toLower(b);

  if (strSize(a) == strSize(b)) {
    cout << 0;
  } else if (strSize(a) > strSize(b)) {
    cout << 1;
  } else {
    cout << -1;
  }
  return 0;
}