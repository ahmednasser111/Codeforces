// Team Olympiad
#include <bits\stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
  int n, x;
  int sumA = 0, sumB = 0, sumC = 0;
  scanf("%d", &n);
  int a[n], b[n], c[n];
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &x);
    if (x == 1)
    {
      a[sumA] = i + 1;
      sumA++;
    }
    else if (x == 2)
    {
      b[sumB] = i + 1;
      sumB++;
    }
    else
    {
      c[sumC] = i + 1;
      sumC++;
    }
  }
  int ans = min(sumA, min(sumB, sumC));
  cout << ans << '\n';
  for (int i = 0; i < ans; i++)
  {
    cout << a[i] << " " << b[i] << " " << c[i] << endl;
  }
  return 0;
}
