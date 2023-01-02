// Minority
#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
  int t, o, z;
  scanf("%d", &t);
  while (t--)
  {
    o = z = 0;
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
      s[i] == '0' ? z++ : o++;
    cout << (z == o ? z - 1 : min(z, o)) << endl;
  }
}