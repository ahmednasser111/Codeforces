// Anton and Letters
#include <bits\stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
  string s;
  getline(cin, s);
  int n = s.length();
  set<char> st;
  for (int i = 1; i < n - 1; i += 3z)
  {
    st.insert(s[i]);
  }
  cout << st.size();
  return 0;
}
