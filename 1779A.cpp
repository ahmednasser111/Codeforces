// Hall of Fame
#include <bits\stdc++.h>
using namespace std;
int main()
{
  int t;
  scanf("%d", &t);
  while (t--)
  {
    int n;
    string s;
    cin >> n >> s;
    int rev = s.find("LR");
    cout << (s.find("RL") != -1 ? 0 : (rev != -1 ? ++rev : rev)) << endl;
  }
}