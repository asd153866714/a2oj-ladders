#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
  int n;
  string a;
  vector<string> arr;

  cin >> n;

  while (n--) {
    cin >> a;
    arr.push_back(a);
  }
  for (auto str : arr) {
    if (str.length() > 10) {
      cout << str[0] << str.length() - 2 << str[str.length() - 1] << endl;
    } else {
      cout << str << endl;
    }
  }
}