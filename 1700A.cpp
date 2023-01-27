// Optimal Path
#include <bits\stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
  int t;
  scanf("%d", &t);
  while (t--)
  {
    int n, m;
    long long sum;
    scanf("%d%d", &n, &m);
    sum = m * (m + 1) / 2;
    for (int i = 2; i <= n; i++)
      sum += m * i;
    cout << sum << endl;
  }
}
