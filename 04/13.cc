#include <cstdio>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n, tempHost, tempGuest, total = 0;
  vector<pair<int, int>> colors;
  cin >> n;

  for (int i = 0; i < n; i++) {
    cin >> tempHost >> tempGuest;
    colors.push_back(pair<int, int>(tempHost, tempGuest));
  }
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      if (colors[i].first == colors[j].second)
        total++;
      if (colors[i].second == colors[j].first)
        total++;
    }
  }
  cout << total;
  return 0;
}