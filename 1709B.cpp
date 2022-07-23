#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 100010;
ll s[N], rs[N], a[N], n, m;
int main()
{
  cin >> n >> m;
  for (int i = 1; i <= n; i++)
    cin >> a[i];
  for (int i = 2; i <= n; i++)
    s[i] = s[i - 1] + max(0ll, a[i - 1] - a[i]);
  for (int i = n - 1; i >= 1; i--)
    rs[i] = rs[i + 1] + max(0ll, a[i + 1] - a[i]);
  while (m--)
  {
    int x, y;
    cin >> x >> y;
    if (y > x)
      cout << s[y] - s[x] << endl;
    else
      cout << rs[y] - rs[x] << endl;
  }
}