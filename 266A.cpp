// Stones on the Table
#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
  int n;
  scanf("%d", &n);
  string s;
  cin >> s;
  int count = 0;
  for (int i = 1; i < n; i++)
  {
    if (s[i] == s[i - 1])
      count++;
  }
  cout << count;
  return 0;
}
