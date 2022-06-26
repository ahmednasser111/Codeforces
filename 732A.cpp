// Buy a Shovel
#include <bits\stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
  int k, r;
  scanf("%d %d", &k, &r);
  int i = 1;

  while (i * k % 10 != r && i * k % 10 != 0)
    i++;

  cout << i;
  return 0;
}
