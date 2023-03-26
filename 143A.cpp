// Help Vasilisa the Wise 2
#include <bits/stdc++.h>
using namespace std;

int main()
{
  int r1, r2, c1, c2, d1, d2;
  scanf("%d %d %d %d %d %d", &r1, &r2, &c1, &c2, &d1, &d2);
  for (int i = 1; i < 10; i++)
    for (int j = 1; j < 10; j++)
      for (int k = 1; k < 10; k++)
        for (int l = 1; l < 10; l++)
        {
          if (i == j || i == k || i == l || j == k || j == l || k == l)
            continue;
          if (i + j == r1 && i + k == c1 && j + l == c2 && k + l == r2 && i + l == d1 && j + k == d2)
          {
            cout << i << " " << j << '\n'
                 << k << " " << l;
            return 0;
          }
        }
  cout << -1;
}