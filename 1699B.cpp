// Almost Ternary Matrix
#include <bits\stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
  int t;
  scanf("%d", &t);
  while (t--)
  {
    int n, m;
    scanf("%d %d", &n, &m);
    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < m; j++)
      {
        if ((i % 4) == (j % 4) || ((i % 4) + (j % 4)) == 3)
          cout << 1 << " ";
        else
          cout << 0 << " ";
      }
      printf("\n");
    }
  }
  return 0;
}
