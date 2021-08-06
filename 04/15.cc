#include <iostream>
#include <string>

using namespace std;

int main() {
  int n, x, y, z, xSum = 0, ySum = 0, zSum = 0;
  string result;

  cin >> n;
  while (n--) {
    cin >> x >> y >> z;
    xSum += x;
    ySum += y;
    zSum += z;
  }
  result = xSum == 0 && ySum == 0 && zSum == 0 ? "YES" : "NO";
  cout << result << endl;
}
