// Valera and X
#include <bits\stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
  int n;
  scanf("%d", &n);
  char a[n][n];
  for (int i = 0; i < n; i++)
    for (int j = 0; j < n; j++)
      cin >> a[i][j];
  char x = a[0][0], y = a[0][1];
  if (x == y)
  {
    cout << "NO";
    return 0;
  }
  for (int i = 0; i < n; i++)
    for (int j = 0; j < n; j++)
    {
      if (i == j || i + j == n - 1)
      {
        if (a[i][j] != x)
        {
          cout << "NO";
          return 0;
        }
      }
      else if (a[i][j] != y)
      {
        cout << "NO";
        return 0;
      }
    }
  cout << "YES";
}
