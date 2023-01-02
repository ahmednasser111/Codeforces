// Last Year's Substring
#include <bits\stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
  int t;
  scanf("%d", &t);
  while (t--)
  {
    int n;
    string s;
    scanf("%d", &n);
    cin >> s;
    if (s.substr(0, 4) == "2020" || s.substr(n - 4, 4) == "2020" || (s[0] == '2' && s.substr(n - 3, 3) == "020") || (s[n - 1] == '0' && s.substr(0, 3) == "202") || (s.substr(0, 2) == "20" && s.substr(n - 2, 2) == "20"))
      cout << "YES\n";
    else
      cout << "NO\n";
  }
}
