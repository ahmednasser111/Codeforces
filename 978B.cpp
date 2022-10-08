// File Name
#include <bits\stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
  int n, c = 0;
  string s;
  scanf("%d", &n);
  cin >> s;
  for (int i = 0; i < n - 2; i++)
    if (s.substr(i, 3) == "xxx")
      c++;

  cout << c;
}
