#include <iostream>
using namespace std;

int main() {
  int n = 0, a = 0, b = 0, i;

  cin >> n;
  for (i = 1; i < n; i++) {
    a = i;
    b = n - i;
    if (a % 2 == 0 && b % 2 == 0) {
      cout << "YES";
      return 0;
    }
  }
  cout << "NO";
}