// Polycarp and Sums of Subsequences
#include <bits\stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
  int t;
  scanf("%d", &t);
  while (t--)
  {
    int b[7];
    for (int i = 0; i < 7; i++)
      scanf("%d", &b[i]);
    cout << b[0] << " " << b[1] << " " << b[6] - b[0] - b[1] << endl;
  }
}
