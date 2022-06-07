// Tram
#include <bits\stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
  int n, a, b, size = 0, max = 0;
  scanf("%d", &n);
  while (n--)
  {
    scanf("%d %d", &a, &b);
    size += b - a;
    if (size > max)
      max = size;
  }
  cout << max;
  return 0;
}
