// Make Even
#include <bits\stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
  int t;
  scanf("%d", &t);
  while (t--)
  {
    string s;
    cin >> s;
    int l = s.length();
    if ((s[l - 1]) % 2 == 0)
    {
      cout << "0\n";
      continue;
    }
    int ans = -1;
    for (int i = 0; i < l; i++)
      if (s[i] % 2 == 0)
      {
        ans = i + 1;
        break;
      }
    cout << min(ans, 2) << endl;
  }
}
