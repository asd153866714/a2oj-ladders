#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
  vector<int> v = {4,   7,   44,  47,  74,  77,  444,
                   447, 474, 477, 744, 747, 774, 777};
  string result = "NO";
  int a;

  cin >> a;

  for (auto i : v) {
    if (a % i == 0) {
      result = "YES";
      break;
    }
  }
  cout << result;
}