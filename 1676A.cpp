// Lucky?
#include <bits\stdc++.h>
using namespace std;
string num;
int sum(int index)
{
  int sum = 0;
  for (int i = index; i < 3 + index; i++)
  {
    sum += (int)num[i] - '0';
  }
  return sum;
}
int main()
{
  int t;
  scanf("%d", &t);
  while (t--)
  {
    cin >> num;
    if (sum(0) == sum(3))
      cout << "YES" << '\n';
    else
      cout << "NO" << '\n';
  }
  return 0;
}
