// Counterexample
#include <bits\stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
  long long l, r;
  cin >> l >> r;
  for (long long i = l; i <= r; i++)
    for (long long j = i + 1; j <= r; j++)
      if (__gcd(i, j) == 1)
        for (long long k = j + 1; k <= r; k++)
        {
          if (__gcd(i, k) > 1 && __gcd(j, k) == 1)
          {
            cout << i << " " << j << " " << k;
            return 0;
          }
        }
  cout << -1;
}