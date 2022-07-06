// The Third Three Number Problem
#include <bits\stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
  int t;
  scanf("%d", &t);
  while (t--)
  {
    int n;
    scanf("%d", &n);
    if (n & 1)
      cout << -1 << endl;
    else
      cout << n / 2 << " 0 0" << endl;
  }
  return 0;
}
