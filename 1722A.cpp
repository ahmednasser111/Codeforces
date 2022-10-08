// Spell Check
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
    string ans = "Timru";
    sort(s.begin(), s.end());

    cout << (s == ans ? "YES" : "NO") << "\n";
  }
}
