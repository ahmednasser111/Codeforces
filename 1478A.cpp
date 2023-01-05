// Nezzar and Colorful Balls
#include <bits\stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
  int t;
  scanf("%d", &t);
  while (t--)
  {
    int n, res = 1, temp = 1;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
      scanf("%d", &a[i]);
    for (int i = 0; i < n; i++)
    {
      if (a[i] == a[i + 1])
        temp++;
      else
      {
        res = max(res, temp);
        temp = 1;
      }
    }
    cout << res << endl;
  }
}
