// Yaroslav and Permutations
#include <bits\stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
      int n, c = 1, Max = 1;
      scanf("%d", &n);
      int a[n];
      for (int i = 0; i < n; i++)
            scanf("%d", &a[i]);
      sort(a, a + n);
      for (int i = 0; i < n - 1; i++)
      {
            if (a[i] == a[i + 1])
                  c++;
            else
            {
                  Max = max(Max, c);
                  c = 1;
            }
      }
      cout << (max(Max, c) > ceil(n / 2.0) ? "NO" : "YES");
}
