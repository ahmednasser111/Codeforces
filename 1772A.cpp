// A+B?
#include <bits\stdc++.h>
using namespace std;
int main()
{
  int t;
  scanf("%d", &t);
  while (t--)
  {
    string s;
    cin >> s;
    cout << stoi(&s[0]) + stoi(&s[2]) << endl;
  }
}