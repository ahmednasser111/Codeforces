// Advantage
#include <bits\stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
  int t;
  scanf("%d", &t);
  while (t--)
  {
    int n, max = 1, s_max = 1;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
      scanf("%d", &a[i]);
      if (a[i] > max)
      {
        s_max = max;
        max = a[i];
      }
      else if (a[i] > s_max)
        s_max = a[i];
    }
    for (int i = 0; i < n; i++)
      cout << a[i] - (a[i] == max ? s_max : max) << ' ';
    cout << '\n';
  }
}
