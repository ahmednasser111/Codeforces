// Word Game
#include <bits\stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
  int t;
  scanf("%d", &t);
  while (t--)
  {
    int n, sum;
    scanf("%d", &n);
    string a[3][n];
    map<string, int> mp;
    for (int i = 0; i < 3; i++)
      for (int j = 0; j < n; j++)
      {
        cin >> a[i][j];
        mp[a[i][j]]++;
      }
    for (int i = 0; i < 3; i++)
    {
      sum = 0;
      for (int j = 0; j < n; j++)
      {
        if (mp[a[i][j]] == 1)
          sum += 3;
        else if (mp[a[i][j]] == 2)
          sum += 1;
      }
      cout << sum << ' ';
    }
    cout << endl;
  }
}
