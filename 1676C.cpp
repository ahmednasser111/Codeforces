// Most Similar Words
#include <bits\stdc++.h>
using namespace std;
int main()
{
  int t, n, len, sum, Min;

  scanf("%d", &t);
  while (t--)
  {
    sum = 300;
    scanf("%d", &n);
    scanf("%d", &len);
    string str[n];
    for (int i = 0; i < n; i++)
    {
      cin >> str[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
      for (int k = i + 1; k < n; k++)
      {
        Min = 0;
        for (int j = 0; j < len; j++)
        {
          Min += abs(str[i][j] - str[k][j]);
        }
        if (Min < sum)
          sum = Min;
      }
    }
    cout << sum << '\n';
  }
  return 0;
}
