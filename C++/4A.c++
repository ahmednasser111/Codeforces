#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int weight;
    cin >> weight;
    if (weight & 1 || weight == 2)
        cout << "NO";
    else
        cout << "YES";
    return 0;
}
