// Beat the Odds
#include <bits\stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
  int t;
  scanf("%d", &t);
  while (t--)
  {
    int n, x, nOdd = 0, nEven = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
      scanf("%d", &x);
      if (x & 1)
        nOdd++;
    }
    cout << min(nOdd, n - nOdd) << endl;
  }
}
