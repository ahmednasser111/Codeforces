// Restore the Permutation by Merger
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
    int a[n];
    for (int i = 1; i <= n; i++)
      a[i - 1] = i;

    for (int i = 0; i < 2 * n; i++)
    {
      int x;
      scanf("%d", &x);
      if (x == a[x - 1])
      {
        cout << x << " ";
        a[x - 1] = 0;
      }
    }
    printf("\n");
  }
  return 0;
}
