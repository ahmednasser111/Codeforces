// Parkway Walk
#include <bits\stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
  int t;
  scanf("%d", &t);
  while (t--)
  {
    int n, m, x;
    scanf("%d %d", &n, &m);
    for (int i = 0; i < n; i++)
    {
      scanf("%d", &x);
      m -= x;
    }
    cout << max(0, -m) << endl;
  }
}
