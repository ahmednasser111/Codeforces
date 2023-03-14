// Dice Tower
#include <bits\stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
  int n, x;
  scanf("%d %d", &n, &x);
  int a[2];
  for (int i = 0; i < n; i++)
  {
    scanf("%d %d", &a[0], &a[1]);
    for (int j = 0; j < 2; j++)
      if (a[j] == x || 7 - a[j] == x)
      {
        cout << "NO";
        return 0;
      }
  }
  cout << "YES";
}
