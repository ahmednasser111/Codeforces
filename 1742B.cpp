// Increasing
#include <bits\stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
  int t, n, x;
  scanf("%d", &t);
  while (t--)
  {
    scanf("%d", &n);
    set<int> st;
    for (int i = 0; i < n; i++)
    {
      scanf("%d", &x);
      st.insert(x);
    }
    cout << (st.size() == n ? "YES" : "NO") << '\n';
  }
}
