// Shaass and Oskols
#include <bits\stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
  int n, m, x, y;
  scanf("%d", &n);
  int a[102];
  for (int i = 0; i < n; i++)
    scanf("%d", &a[i]);
  scanf("%d", &m);
  for (int i = 0; i < m; i++)
  {
    scanf("%d %d", &x, &y);
    x--;
    a[x - 1] += y - 1;
    a[x + 1] += a[x] - y;
    a[x] = 0;
  }
  for (int i = 0; i < n; i++)
    cout << a[i] << endl;
}
