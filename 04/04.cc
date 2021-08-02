#include <iostream>
#include <locale>
#include <string>

using namespace std;

int main() {
  string a, b;
  int i, x, y, result = 0;

  cin >> a >> b;

  for (i = 0; i < a.length(); i++) {
    x = int(tolower(a[i]));
    y = int(tolower(b[i]));

    if (x != y) {
      if (x > y)
        result = 1;
      else
        result = -1;
      break;
    }
  }
  cout << result;
}