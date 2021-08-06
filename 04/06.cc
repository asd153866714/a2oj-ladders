#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n, a = 0, b = 0, c, sum = 0, counter = 0;
  vector<int> v = {};

  cin >> n;
  while (n--) {
    cin >> c;
    v.push_back(c);
    sum += c;
  }
  sort(v.begin(), v.begin() + v.size());

  for (int i = v.size() - 1; i >= 0; i--) {
    counter++;
    a += v[i];
    if (a > sum / 2)
      break;
  }
  cout << counter;
}