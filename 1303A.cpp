// Erasing Zeroes
#include <bits\stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
  int t, start, end, c;
  string s;
  scanf("%d", &t);
  while (t--)
  {
    cin >> s;
    c = 0;
    for (start = 0; start < s.length(); start++)
      if (s[start] == '1')
        break;
    for (end = s.length() - 1; end >= 0; end--)
      if (s[end] == '1')
        break;
    for (int i = start; i <= end; i++)
      if (s[i] == '0')
        c++;
    cout << c << endl;
  }
}
