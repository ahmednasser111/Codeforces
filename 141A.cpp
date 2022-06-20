// Amusing Joke
#include <bits\stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
  string s1;
  string s2;
  string s3;

  cin >> s1;
  cin >> s2;
  cin >> s3;

  string s = s1 + s2;
  sort(s.begin(), s.end());
  sort(s3.begin(), s3.end());

  if (s == s3)
    cout << "YES";
  else
    cout << "NO";
  return 0;
}
