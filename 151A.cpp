// Soft Drinking
#include <bits\stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
  int n, k, l, c, d, p, nl, np;
  scanf("%d %d %d %d %d %d %d %d", &n, &k, &l, &c, &d, &p, &nl, &np);
  int drinks = k * l;
  int toasts = drinks / nl;
  int limes = c * d;
  int salt = p / np;
  cout << min(min(limes, toasts), min(drinks, salt)) / n << endl;
  return 0;
}
