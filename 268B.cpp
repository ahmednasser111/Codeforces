// Queue at the School
#include <bits\stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
  int n, t;
  string s;
  scanf("%d %d", &n, &t);
  cin >> s;
  for (int j = 0; j < t; j++)
  {
    for (int i = 0; i < n - 1; i++)
    {
      if (s[i] == 'B' && s[i + 1] == 'G')
      {
        s[i] = 'G';
        s[i + 1] = 'B';
        i++;
      }
    }
  }
  cout << s;

  return 0;
}
