// Vanya and Cubes
#include <bits\stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
  int n;
  scanf("%d", &n);
  int i = 0, sum = 0;
  while (sum <= n)
  {
    i++;
    sum += (i * (i + 1) / 2);
  }
  cout << i - 1;
}
