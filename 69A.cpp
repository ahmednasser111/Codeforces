// Young Physicist
#include <bits\stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
  int n, x, y, z, sumX = 0, sumY = 0, sumZ = 0;
  scanf("%d", &n);
  for (int i = 0; i < n; i++)
  {
    scanf("%d %d %d", &x, &y, &z);
    sumX += x;
    sumY += y;
    sumZ += z;
  }
  if (sumX || sumY || sumZ)
    printf("NO");
  else
    printf("YES");
  return 0;
}
