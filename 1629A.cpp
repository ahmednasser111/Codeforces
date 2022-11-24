// Download More RAM
#include <bits\stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
  int t;
  scanf("%d", &t);
  while (t--)
  {
    int n, k;
    scanf("%d %d", &n, &k);
    int a[n], b[n];
    for (int i = 0; i < n; i++)
      scanf("%d", &a[i]);
    for (int i = 0; i < n; i++)
      scanf("%d", &b[i]);
    for (int i = 0; i < n; i++)
      if (a[i] <= k)
      {
        k += b[i];
        a[i] = INT_MAX;
        i = -1;
      }
    cout << k << endl;
  }
}
