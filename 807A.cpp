// Is it rated?
#include <bits\stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
  int n;
  scanf("%d", &n);
  int a[n][2];
  bool f = 0;
  scanf("%d", &a[0][0]);
  scanf("%d", &a[0][1]);
  if (a[0][0] != a[0][1])
  {
    cout << "rated";
    return 0;
  }
  for (int i = 1; i < n; i++)
  {
    scanf("%d", &a[i][0]);
    scanf("%d", &a[i][1]);
    if (a[i][0] != a[i][1])
    {
      cout << "rated";
      return 0;
    }
    if (a[i][1] > a[i - 1][1])
      f = 1;
  }
  cout << (f ? "unrated" : "maybe");
}
