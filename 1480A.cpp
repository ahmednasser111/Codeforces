// Yet Another String Game
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
    for (int i = 0; i < s.length(); i++)
      s[i] = i & 1 ? (s[i] == 'z' ? 'y' : 'z') : (s[i] == 'a' ? 'b' : 'a');
    cout << s << endl;
  }
}
