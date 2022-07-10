// Bachgold Problem
#include <bits\stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
  int n;
  scanf("%d", &n);
  int ans = n / 2;
  printf("%d\n", ans);
  if (n & 1)
  {
    printf("3 ");
    ans--;
  }
  for (int i = 0; i < ans; i++)
    printf("2 ");
  return 0;
}
