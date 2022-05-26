// Calculating Function
#include <cstdio>
int main()
{
    long long n;

    scanf("%lld", &n);

    n & 1 ? printf("%lld", -1 - n / 2) : printf("%lld", n / 2);

    return 0;
}
