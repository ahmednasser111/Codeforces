// Mahmoud and Longest Uncommon Subsequence
#include <bits\stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
  string a, b;
  cin >> a >> b;
  if (a == b)
    cout << -1;
  else
    cout << max(a.length(), b.length());
}
