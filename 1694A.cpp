// Creep
#include <bits\stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
  int t, a, b, n;
  scanf("%d", &t);
  while (t--)
  {
    scanf("%d %d", &a, &b);
    while (a > 0 || b > 0)
    {
      if (a > 0)
      {
        cout << 0;
        a--;
      }
      if (b > 0)
      {
        cout << 1;
        b--;
      }
    }
    cout << '\n';
  }
  return 0;
}
