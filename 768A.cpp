// Oath of the Night's Watch
#include <bits\stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
  int n, c = 0;
  scanf("%d", &n);
  int a[n];
  for (int i = 0; i < n; i++)
    scanf("%d", &a[i]);
  sort(a, a + n);
  for (int i = 0; i < n; i++)
    if (a[i] == a[0] || a[i] == a[n - 1])
      c++;
  cout << n - c;
}
