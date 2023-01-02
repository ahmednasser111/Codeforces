// Arena
#include <bits\stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
  int t;
  scanf("%d", &t);
  while (t--)
  {
    int n, x, min = INT_MAX, c = 1;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
      scanf("%d", &x);
      if (x < min)
      {
        min = x;
        c = 1;
      }
      else if (x == min)
        c++;
    }
    cout << n - c << endl;
  }
}
