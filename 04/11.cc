#include <iostream>
using namespace std;

int main() {
  int n, current = 0, minSoldier = 101, maxSoldier = 0, minPos = 0, maxPos = 0,
         result = 0;

  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> current;
    if (current > maxSoldier) {
      maxSoldier = current;
      maxPos = i;
    }
    if (current <= minSoldier) {
      minSoldier = current;
      minPos = i;
    }
  }

  result = (maxPos - 0) + (n - 1 - minPos);
  if (maxPos > minPos) {
    result -= 1;
  }
  cout << result;

  return 0;
}