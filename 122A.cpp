// Lucky Division
#include <bits\stdc++.h>
using namespace std;
bool is_lucky(int n)
{
  while (n)
  {
    if (n % 10 != 4 && n % 10 != 7)
      return false;
    n /= 10;
  }
  return true;
}
int main(int argc, char const *argv[])
{
  int n;
  scanf("%d", &n);
  if (is_lucky(n) || n % 4 == 0 || n % 7 == 0 || n % 47 == 0)
    printf("YES");
  else
    printf("NO");
}
