// Dubstep
#include <bits\stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
  string s;
  cin >> s;
  int a;
  a = s.find("WUB");
  while (a != -1)
  {
    s = s.replace(a, 3, " ");
    a = s.find("WUB");
  }
  cout << s << endl;
}
