// Balanced Substring
#include <bits\stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
  int t;
  scanf("%d", &t);
  while (t--)
  {
    int n, x;
    string s;
    cin >> n >> s;
    if (s.find("ab") == -1)
      x = s.find("ba");
    else
      x = s.find("ab");
    if (x == -1)
      cout << "-1 -1\n";
    else
      cout << ++x << " " << ++x << '\n';
  }
}
