// Design Tutorial: Learn from Math
#include <iostream>
using namespace std;

int main()
{
  int n, x = 8;

  scanf("%d", &n);
  if (n & 1)
    x++;

  cout << x << " " << n - x;
  return 0;
}
