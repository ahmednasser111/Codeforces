// Football
#include <bits\stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
  char s[110];
  cin >> s;

  cout << (strstr(s, "1111111") || strstr(s, "0000000") ? "YES" : "NO");
  return 0;
}
