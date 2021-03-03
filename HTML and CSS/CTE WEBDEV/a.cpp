#include <iostream>

using namespace std;
int main()
{
    int x = 1, n = 1;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        x = x * i;
    }
    cout << x;
    return 0;
}