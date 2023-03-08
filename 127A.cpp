// Wasted Time
#include <bits\stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
  int n, k;
  double ans = 0;
  scanf("%d %d", &n, &k);
  int a[n][2];
  for (int i = 0; i < n; i++)
    scanf("%d %d", &a[i][0], &a[i][1]);
  for (int i = 0; i < n - 1; i++)
    ans += sqrt(pow(a[i][0] - a[i + 1][0], 2) + pow(a[i][1] - a[i + 1][1], 2));
  cout << fixed << ans * k / 50;
}
