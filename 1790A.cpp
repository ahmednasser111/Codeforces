// Polycarp and the Day of Pi
#include <bits\stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
  int t;
  scanf("%d", &t);
  while (t--)
  {
    int i = 0;
    string s, pi = "314159265358979323846264338327";
    cin >> s;
    for (; i < s.length(); i++)
      if (s[i] != pi[i])
        break;
    cout << i << '\n';
  }
}
