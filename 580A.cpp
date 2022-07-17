// Kefa and First Steps
#include <bits\stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
  int n, x;
  scanf("%d", &n);
  scanf("%d", &x);
  int current = x;
  int c = 1;
  int max = c;
  for (int i = 1; i < n; i++)
  {
    scanf("%d", &x);

    if (x >= current)
      c++;
    else
      c = 1;

    if (c > max)
      max = c;
    current = x;
  }
  cout << max;
}
