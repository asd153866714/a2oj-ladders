#include <iostream>
#include <string>
using namespace std;

int main() {
  string greeting = "hello";
  string input;
  int a = 0, b = 0;

  cin >> input;
  while (b < input.size()) {
    if (input[b] == greeting[a]) {
      a++;
    }
    if (a >= greeting.size()) {
      cout << "YES";
      return 0;
    }
    b++;
  }

  cout << "NO";
}