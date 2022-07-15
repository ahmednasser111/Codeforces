// Even Odds
#include <bits\stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
  long long n, k;
  cin >> n >> k;
  cout << (k <= (n + 1) / 2 ? 2 * k - 1 : 2 * (k - (n + 1) / 2));
}
