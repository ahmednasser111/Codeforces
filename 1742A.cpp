// Sum
#include <bits\stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
  int t;
  scanf("%d", &t);
  while (t--)
  {
    int a[3];
    scanf("%d %d %d", &a[0], &a[1], &a[2]);
    sort(a, a + 3);
    if (a[2] == a[0] + a[1])
      cout << "YES\n";
    else
      cout << "NO\n";
  }
}
