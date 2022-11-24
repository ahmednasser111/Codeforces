// The Cake Is a Lie
#include <bits\stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
  int t;
  scanf("%d", &t);
  while (t--)
  {
    int n, m, k;
    scanf("%d %d %d", &n, &m, &k);
    cout << (n - 1 + (m - 1) * n == k ? "YES\n" : "NO\n");
  }
}
