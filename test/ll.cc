#include <iostream>
using namespace std;

int main() {

  int a = INT_MAX;
  int b = INT_MIN;

  long c = LONG_MAX;
  long d = LONG_MIN;

  long long e = LLONG_MAX;
  long long f = LLONG_MIN;

  short g = SHRT_MAX;
  short h = SHRT_MIN;

  cout << "SIGNED INT: " << endl;
  cout << a << "\t" << b << endl;
  cout << c << "\t" << d << endl;
  cout << e << "\t" << f << endl;
  cout << g << "\t" << h << endl;
}