// Polycarp Writes a String from Memory
#include <bits\stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
  int t;
  scanf("%d", &t);
  while (t--)
  {
    string s;
    cin >> s;
    set<char> st;
    int c = 1;
    for (int i = 0; i < s.size(); i++)
    {
      st.insert(s[i]);
      if (st.size() == 4)
      {
        st.clear();
        st.insert(s[i]);
        c++;
      }
    }
    cout << c << "\n";
  }
  return 0;
}
