// I_love_%username%
#include <bits\stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
  int n, x;
  scanf("%d", &n);
  int count = 0;
  scanf("%d", &x);
  int max = x, min = x;
  for (int i = 1; i < n; i++)
  {
    scanf("%d", &x);
    if (x > max)
    {
      count++;
      max = x;
    }
    if (x < min)
    {
      count++;
      min = x;
    }
  }
  cout << count;
  return 0;
}
