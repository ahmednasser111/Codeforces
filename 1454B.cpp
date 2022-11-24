// Unique Bid Auction
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
    map<int, int> mp;
    for (int i = 0; i < n; i++)
      scanf("%d", &a[i]);
    for (int i = 0; i < n; i++)
      mp[a[i]] = i + 1;
    sort(a, a + n);
    for (int i = 0; i <= n; i++)
    {
      if (i == n)
      {
        cout << -1 << endl;
        break;
      }
      if (a[i] != a[i + 1] && a[i] != a[i - 1] || (i == 0 && a[i] != a[i + 1]) || (i == n - 1 && a[i] != a[i - 1]))
      {
        cout << mp[a[i]] << endl;
        break;
      }
    }
  }
}
