#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

void incMin(int *min, int n) { *min = max(*min, n); }
void decMax(int *max, int n) { *max = min(*max, n); }

int main() {
  int n;
  int max = 2 * 1000 * 1000 * 1000;
  int min = -max;
  string x, z;
  int y;

  cin >> n;
  while (n--) {
    cin >> x >> y >> z;

    if (z == "N") {
      if (x == ">")
        x = "<=";
      else if (x == ">=")
        x = "<";
      else if (x == "<")
        x = ">=";
      else if (x == "<=")
        x = ">";
    }

    if (x == ">")
      incMin(&min, y + 1);
    else if (x == ">=")
      incMin(&min, y);
    else if (x == "<")
      decMax(&max, y - 1);
    else if (x == "<=")
      decMax(&max, y);
  }
  if (min > max)
    cout << "Impossible";
  else
    cout << min;
}