// Fafa and his Company
#include <bits\stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
  int n, c = 1;
  scanf("%d", &n);
  for (int i = 2; i <= n / 2; i++)
    if (n % i == 0)
      c++;

  cout << c;
}
