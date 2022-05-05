// In Search of an Easy Problem
#include <bits\stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int len, x;
    scanf("%d", &len);
    for (int i = 0; i < len; i++)
    {
        scanf("%d", &x);
        if (x == 1)
        {
            cout << "HARD";
            return 0;
        }
    }
    cout << "EASY";
    return 0;
}
