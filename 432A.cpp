// Choosing Teams
#include <bits\stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
  int n, k, x, c = 0;
  scanf("%d %d", &n, &k);
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &x);
    if (x + k <= 5)
      c++;
  }

  cout << c / 3;

  return 0;
}
