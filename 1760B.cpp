// Atilla's Favorite Problem
#include <bits\stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
  int t;
  scanf("%d", &t);
  while (t--)
  {
    int n;
    string s;
    cin >> n >> s;
    cout << *max_element(s.begin(), s.end()) - 96 << endl;
  }
}
