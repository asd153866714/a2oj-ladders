#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
  string a, b;
  vector<char> s = {};

  cin >> a;
  for (int i = 0; i < a.length(); i++) {
    if (a[i] != '+') {
      s.push_back(a[i]);
    }
  }
  sort(s.begin(), s.begin() + s.size());
  for (int i = 0; i < s.size(); i++) {
    cout << s[i];
    if (i != s.size() - 1) {
      cout << '+';
    }
  }
}