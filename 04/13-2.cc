#include <iostream>
using namespace std;

int main() {
  int n, a[30], b[30], total = 0;

  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> a[i] >> b[i];
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (i == j)
        continue;
      if (a[i] == b[j])
        total++;
    }
  }
  cout << total;
  return 0;
}