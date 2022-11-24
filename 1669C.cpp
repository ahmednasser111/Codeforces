// Odd/Even Increment
#include <bits\stdc++.h>
using namespace std;
int n;
int a[1000];
bool solve(int i)
{
  bool b = a[i] % 2 == 0;
  i += 2;
  for (; i < n; i += 2)
  {
    if (b)
    {
      if (a[i] & 1)
        return false;
    }
    else if (a[i] % 2 == 0)
      return false;
  }
  return true;
}
int main(int argc, char const *argv[])
{
  int t;
  scanf("%d", &t);
  while (t--)
  {
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
      scanf("%d", &a[i]);

    cout << (solve(0) && solve(1) ? "YES" : "NO") << endl;
  }
}
