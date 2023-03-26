// Grab the Candies
#include <bits\stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
  int t;
  scanf("%d", &t);
  while (t--)
  {
    int n, x, even = 0, odd = 0, i = 0;
    scanf("%d", &n);
    for (; i < n; i++)
    {
      scanf("%d", &x);
      if (x & 1)
        odd += x;
      else
        even += x;
    }
    cout << (even > odd ? "YES" : "NO") << endl;
  }
}
