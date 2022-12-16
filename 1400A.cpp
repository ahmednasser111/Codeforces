// String Similarity
#include <bits\stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
  int t, n;
  string s;
  scanf("%d", &t);
  while (t--)
  {
    scanf("%d", &n);
    cin >> s;
    for (int i = 0; i < n; i++)
      cout << s.substr(i, n)[i];
    cout << endl;
  }
}
