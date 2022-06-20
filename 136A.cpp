// Presents
#include <bits\stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
  int n, x;
  scanf("%d", &n);
  int ans[n];
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &x);
    ans[x - 1] = i + 1;
  }

  for (int i = 0; i < n; i++)
    cout << ans[i] << " ";

  return 0;
}
