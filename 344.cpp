// Magnets
#include <bits\stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
  int n, x, temp, c = 1;
  scanf("%d", &n);
  scanf("%d", &x);

  for (int i = 1; i < n; i++)
  {
    temp = x;
    scanf("%d", &x);
    if (temp != x)
      c++;
  }
  cout << c << endl;

  return 0;
}
