// Black Square
#include <bits\stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
  int a[4];
  int sum = 0;
  string s;
  for (int i = 0; i < 4; i++)
    scanf("%d", &a[i]);

  cin >> s;
  for (int i = 0; i < s.length(); i++)
    sum += a[s[i] - 49];

  printf("%d", sum);
  return 0;
}
