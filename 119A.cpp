// Epic Game
#include <bits\stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{

  int a[2], n;
  bool w = 0;
  scanf("%d %d %d", &a[0], &a[1], &n);
  while (1)
  {
    n -= __gcd(a[w], n);
    if (!n)
      break;
    w = !w;
  }
  printf("%d\n", w);
  return 0;
}
