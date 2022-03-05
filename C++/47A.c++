// C++ program to check if a number is a triangular number
// using simple approach.
#include <iostream>
using namespace std;

// Returns true if 'num' is triangular, else false
bool isTriangular(int num)
{
    // Base case
    if (num < 0)
        return false;

    // A Triangular number must be sum of first n
    // natural numbers
    int sum = 0;
    for (int n = 1; sum <= num; n++)
    {
        sum = sum + n;
        if (sum == num)
            return true;
    }

    return false;
}

// Driver code
int main()
{
    int n;
    cin >> n;
    if (isTriangular(n))
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
