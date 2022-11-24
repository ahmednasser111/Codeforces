// All Distinct
#include <bits\stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
  int t;
  scanf("%d", &t);
  while (t--)
  {
    int n, x;
    scanf("%d", &n);
    set<int> st;
    for (int i = 0; i < n; i++)
    {
      scanf("%d", &x);
      st.insert(x);
    }
    cout << st.size() - (n - st.size() & 1) << endl;
  }
}
