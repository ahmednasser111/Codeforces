// Life Without Zeros
#include <bits\stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
      int a, b;
      scanf("%d %d", &a, &b);
      string as = to_string(a), bs = to_string(b), sum = to_string(a + b);
      as.erase(remove(as.begin(), as.end(), '0'), as.end());
      bs.erase(remove(bs.begin(), bs.end(), '0'), bs.end());
      sum.erase(remove(sum.begin(), sum.end(), '0'), sum.end());
      cout << (to_string(stoi(as) + stoi(bs)) == sum ? "YES" : "NO");
}
