// System of Equations
#include <bits\stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
  int n, m;
  scanf("%d %d", &n, &m);
  int c = 0;
  for (int a = 0; a <= sqrt(n); a++)
  {
    int b = n - a * a;
    if (a == m - b * b)
      c++;
  }
  cout << c;
}
