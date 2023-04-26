// Petya and Countryside
#include <bits\stdc++.h>
using namespace std;
int main()
{
      int n, c, m = 1;
      scanf("%d", &n);
      int a[n];
      for (int i = 0; i < n; i++)
            scanf("%d", &a[i]);
      for (int i = 0; i < n; i++)
      {
            c = 1;
            for (int j = i - 1; j >= 0; j--)
                  if (a[j] <= a[i] && a[j] <= a[j + 1])
                        c++;
                  else
                        break;
            for (int k = i + 1; k < n; k++)
                  if (a[k] <= a[i] && a[k] <= a[k - 1])
                        c++;
                  else
                        break;
            m = max(m, c);
      }
      cout << m;
}
