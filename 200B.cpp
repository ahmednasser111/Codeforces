// Drinks
#include <bits\stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int len, x;
    float sum;
    scanf("%d", &len);

    for (int i = 0; i < len; i++)
    {
        scanf("%d", &x);
        sum += x;
    }
    cout << (sum / len) << '\n';
    return 0;
}
