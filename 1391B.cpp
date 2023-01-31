// Fix You
#include <bits\stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
  int t;
  scanf("%d", &t);
  while (t--)
  {
    int n, m, c = 0;
    scanf("%d%d", &n, &m);
    string a[n];
    for (int i = 0; i < n; i++)
      cin >> a[i];
    for (int i = 0; i < n - 1; i++)
      if (a[i][m - 1] == 'R')
        c++;
    for (int i = 0; i < m - 1; i++)
      if (a[n - 1][i] == 'D')
        c++;
    cout << c << endl;
  }
}
