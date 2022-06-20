// Hulk
#include <bits\stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
  int n;
  scanf("%d", &n);
  for (int i = 1; i < n; i++)
  {
    if (i % 2 == 0)
      cout << "I love that ";
    else
      cout << "I hate that ";
  }
  if (n & 1)
    cout << "I hate it";
  else
    cout << "I love it";
  return 0;
}
