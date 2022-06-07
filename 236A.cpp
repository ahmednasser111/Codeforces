// Boy or Girl
#include <bits\stdc++.h>
using namespace std;
string s;
int main(int argc, char const *argv[])
{
  char c;
  set<char> s;
  while (cin >> c)
    s.insert(c);

  cout << (s.size() & 1 ? "IGNORE HIM!" : "CHAT WITH HER!");
  return 0;
}
