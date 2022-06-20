// New Year and Hurry
#include <bits\stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
  int n, k, c = 0;
  scanf("%d %d", &n, &k);
  int min = 240 - k;
  int timeofproblem = 5;
  while (min >= timeofproblem && n > c)
  {
    min -= timeofproblem;
    c++;
    timeofproblem += 5;
  }
  cout << c;
  return 0;
}
