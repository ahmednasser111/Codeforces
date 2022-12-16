// Ezzat and Two Subsequences
#include <bits\stdc++.h>
#include <cstdio>
using namespace std;
int main(int argc, char const *argv[])
{
  int t;
  scanf("%d", &t);
  while (t--)
  {
    int n, x, mx = INT_MIN;
    double sum = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
      scanf("%d", &x);
      mx = max(mx, x);
      sum += x;
    }
    sum -= mx;
    sum /= n - 1;
    cout << setprecision(9) << double(mx + sum) << endl;
  }
}
