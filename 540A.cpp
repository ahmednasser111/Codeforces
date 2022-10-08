// Combination Lock
#include <bits\stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
  int n;
  scanf("%d", &n);
  string s1, s2;
  cin >> s1 >> s2;
  int sum = 0;
  for (int i = 0; i < n; i++)
  {
    int temp = abs(s1[i] - s2[i]);
    if (temp > 5)
      temp = 10 - temp;
    sum += temp;
  }
  cout << sum;
}
