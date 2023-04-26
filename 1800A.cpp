// Is It a Cat?
#include <bits\stdc++.h>
using namespace std;
int main()
{
      int t;
      scanf("%d", &t);
      while (t--)
      {
            int n;
            string s;
            cin >> n >> s;
            transform(s.begin(), s.end(), s.begin(), ::tolower);
            for (int i = 0; i < s.length() - 1; i++)
                  if (s[i] == s[i + 1])
                  {
                        s.erase(i, 1);
                        i--;
                  }
            cout << (s == "meow" ? "YES\n" : "NO\n");
      }
}