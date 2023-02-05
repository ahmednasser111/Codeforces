// Codeforces Checking
#include <bits\stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
  int t;
  scanf("%d", &t);
  while (t--)
  {
    char c;
    string s = "codeforces";
    cin >> c;
    cout << (s.find(c) != -1 ? "YES" : "NO") << '\n';
  }
}
