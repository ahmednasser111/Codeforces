// Image
#include <bits\stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
  int t;
  scanf("%d", &t);
  while (t--)
  {
    char c;
    map<char, int> mp;
    for (int i = 0; i < 4; i++)
    {
      cin >> c;
      mp[c]++;
    }
    cout << mp.size() - 1 << endl;
  }
}
