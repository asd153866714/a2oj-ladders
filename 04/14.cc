#include <iostream>
#include <string>

using namespace std;

int main() {
  string a;
  cin >> a;
  for (int i = 0; i < a.length(); i++) {
    if (a[i] == 'W' && a[i + 1] == 'U' && a[i + 2] == 'B') {
      i += 2;
      cout << " ";
    } else {
      cout << a[i];
    }
  }
  return 0;
}