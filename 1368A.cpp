// C+=
#include <bits\stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
  int t;
  scanf("%d", &t);
  while (t--)
  {
    int a, b, n;
    scanf("%d %d %d", &a, &b, &n);
    int c = 0;
    while (a <= n && b <= n)
    {
      a > b ? b += a : a += b;
      c++;
    }
    cout << c << endl;
  }
}
