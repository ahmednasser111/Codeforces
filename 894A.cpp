// QAQ
#include <bits\stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
  string s;
  cin >> s;
  int l = s.length(), c = 0;
  for (int i = 0; i < l; i++)
    for (int j = i + 1; j < l; j++)
      for (int k = j + 1; k < l; k++)
        if (s[i] == 'Q' && s[j] == 'A' && s[k] == 'Q')
          c++;
  cout << c;
}
