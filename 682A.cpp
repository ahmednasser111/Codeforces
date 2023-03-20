// Alyona and Numbers
#include <bits\stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
  int n, m;
  long long c = 0;
  scanf("%d %d", &n, &m);
  for (int i = 1; i <= n; i++)
    c += (m + i % 5) / 5;
  cout << c;
}
