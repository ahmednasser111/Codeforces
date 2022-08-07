// Remove Prefix
#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  scanf("%d", &t);
  while (t--)
  {
    int n;
    cin >> n;
    int a[n];
    for (int i = 1; i <= n; i++)
      cin >> a[i];
    set<int> se;
    int ans = n;
    for (int i = n; i >= 1; i--)
    {
      if (se.count(a[i]))
        break;
      ans--;
      se.insert(a[i]);
    }
    cout << ans << endl;
  }
}