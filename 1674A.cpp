// Number Transformation
#include <bits\stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int t, x, y, a, b;
    float temp;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &x);
        scanf("%d", &y);

        if (y % x != 0)
            cout << "0 0";
        else
            cout << "1 " << y / x;

        cout << '\n';
    }

    return 0;
}
