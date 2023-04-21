// IQ Test
#include <bits\stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
      bool a[4][4];
      char c;
      for (int i = 0; i < 4; i++)
            for (int j = 0; j < 4; j++)
            {
                  cin >> c;
                  a[i][j] = (c == '#');
            }
      for (int i = 0; i < 3; i++)
            for (int j = 0; j < 3; j++)
                  if (a[i][j] + a[i][j + 1] + a[i + 1][j] + a[i + 1][j + 1] != 2)
                  {
                        cout << "YES";
                        return 0;
                  }
      cout << "NO";
}
