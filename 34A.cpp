// Reconnaissance 2
#include <bits\stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
  int n;
  scanf("%d", &n);
  int a[n];
  for (int i = 0; i < n; i++)
    scanf("%d", &a[i]);
  int minDiff = abs(a[n - 1] - a[0]), minI1 = 0, minI2 = n - 1;
  for (int i = 0; i < n - 1; i++)
    if (abs(a[i + 1] - a[i]) < minDiff)
    {
      minDiff = abs(a[i + 1] - a[i]);
      minI1 = i + 1, minI2 = i;
    }
  cout << ++minI1 << " " << ++minI2;
}
