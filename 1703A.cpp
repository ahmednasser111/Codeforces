// YES or YES?
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
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    if (s == "yes")
      cout << "YES\n";
    else
      cout << "NO\n";
  }
}
