// IQ test
#include <bits\stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
  int n, numberofOdds = 0, numberofEvens = 0;
  scanf("%d", &n);
  int a[n];
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &a[i]);
    if (a[i] & 1)
      numberofOdds++;
    else
      numberofEvens++;
  }
  int x = (numberofOdds > numberofEvens) ? 0 : 1;
  for (int i = 0; i < n; i++)
    if (a[i] % 2 == x)
    {
      printf("%d ", i + 1);
      break;
    }
}
