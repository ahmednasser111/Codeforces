// Theatre Square.
#include <bits\stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int n, m, a;
    cin >> n >> m >> a;
    cout << (long long)(ceil((double)n / a) * ceil((double)m / a)) << "\n";
    return 0;
}
