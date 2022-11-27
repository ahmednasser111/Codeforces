// Bad Triangle
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
    for (int i = 0; i < n; i++)
      scanf("%d", &a[i]);
    if (a[0] + a[1] <= a[n - 1])
      cout << "1 2 " << n << '\n';
    else
      cout << "-1\n";
  }
}
