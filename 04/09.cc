#include <cstdio>
#include <iostream>
using namespace std;

int main() {
  int n, a;

  cin >> n;

  int *arr = new int[n];

  for (int i = 1; i <= n; i++) {
    cin >> a;
    arr[a] = i;
  }
  for (int i = 1; i <= n; i++) {
    cout << arr[i] << " ";
  }
  delete arr;
}