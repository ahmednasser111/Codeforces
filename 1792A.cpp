// GamingForces
#include <bits\stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
  int t;
  scanf("%d", &t);
  while (t--)
  {
    int n;
    scanf("%d", &n);
    int c = n;
    int a[n];
    for (int i = 0; i < n; i++)
      scanf("%d", &a[i]);
    sort(a, a + n);
    for (int i = 1; i < n; i += 2)
      if (a[i] == 1)
        c--;
    cout << c << endl;
  }
}
