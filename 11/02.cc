#include <cmath>
#include <iostream>

using namespace std;

int main() {
  int a = 5, b = 5;
  int arr[5][5] = {0};
  int c[2] = {0}, d[2] = {2, 2};

  for (int i = 0; i < 5; i++) {
    cin >> arr[i][0] >> arr[i][1] >> arr[i][2] >> arr[i][3] >> arr[i][4];
  }
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      if (arr[i][j] == 1) {
        c[0] = i;
        c[1] = j;
        break;
      }
    }
  }
  cout << abs(c[0] - d[0]) + abs(c[1] - d[1]);
}
