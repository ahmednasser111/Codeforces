// Mahmoud and Ehab and the even-odd game
#include <bits\stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
  int n;
  scanf("%d", &n);
  cout << (n & 1 ? "Ehab" : "Mahmoud");
}
