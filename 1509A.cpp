// Average Height
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
    vector<int> even;
    for (int i = 0; i < n; i++)
    {
      scanf("%d", &x);
      if (x & 1)
        cout << x << " ";
      else
        even.push_back(x);
    }
    for (int i : even)
      cout << i << " ";
    cout << endl;
  }
}
