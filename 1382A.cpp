// Common Subsequence
#include <bits\stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
  int t;
  scanf("%d", &t);
  while (t--)
  {
    int n, m, x = 0;
    scanf("%d %d", &n, &m);
    int a[n], b[m];
    for (int i = 0; i < n; i++)
      scanf("%d", &a[i]);
    for (int i = 0; i < m; i++)
      scanf("%d", &b[i]);
    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < m; j++)
        if (a[i] == b[j])
        {
          x = a[i];
          break;
        }
      if (x != 0)
        break;
    }
    if (x != 0)
      cout << "YES\n1 " << x << endl;
    else
      cout << "NO\n";
  }
}
