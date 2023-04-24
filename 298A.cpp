// Snow Footprints
#include <bits\stdc++.h>
using namespace std;
int main()
{
      int n, cl = 0, cr = 0;
      scanf("%d", &n);
      string s;
      cin >> s;
      for (int i = 1; i < n; i++)
      {

            if (s[i] == 'L')
            {
                  cl = i + 1;
                  break;
            }
            else if (s[i] == 'R')
                  cr = i + 1;
      }
      if (cl == 0)
            cr++;
      if (s.find('R') == string::npos)
            cout << cl << ' ' << cl - 1;
      else
            cout << s.find('R') + 1 << ' ' << cr;
}