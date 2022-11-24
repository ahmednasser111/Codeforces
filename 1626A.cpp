// Equidistant Letters
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
    sort(s.begin(), s.end());
    cout << s << endl;
  }
}
