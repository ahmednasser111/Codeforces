// Panoramix's Prediction
#include <bits\stdc++.h>
using namespace std;
bool isPrime(int n)
{
  for (int i = 2; i <= n / 2; i++)
    if (n % i == 0)
      return 0;

  return 1;
}
int main(int argc, char const *argv[])
{
  int a, b, i;
  scanf("%d %d", &a, &b);
  for (i = a + 1; i <= b; i++)
    if (isPrime(i))
      break;
  if (i == b)
    printf("YES");
  else
    printf("NO");
}
