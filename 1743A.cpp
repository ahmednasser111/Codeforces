// Password
#include <bits\stdc++.h>
using namespace std;
int nCr(int n, int r)
{
  if (r > n)
    return 0;
  if (r == 0 || r == n)
    return 1;
  return nCr(n - 1, r - 1) + nCr(n - 1, r);
}
int main(int argc, char const *argv[])
{
  int t;
  scanf("%d", &t);
  while (t--)
  {
    int n, x;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
      scanf("%d", &x);
    cout << nCr(10 - n, 2) * 6 << endl;
  }
}
