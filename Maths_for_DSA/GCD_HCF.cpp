#include <iostream>
using namespace std;
int main()
{
    // find GCD
    int a = 20;
    int b = 40;
    // int n = min(val, val1);
    // int ans = 1;

    // for (int i = 1; i <= n; i++)
    // {
    //     if (val % i == 0 && val1 % i == 0)
    //     {
    //         cout<<i;
    //         break;
    //     }
    // }

    // euclidean algorithm
    while (a > 0 && b > 0)
    {
        if (a > b)
        {
            a = a % b;
        }
        else
        {
            b = b % a;
        }
    }

    if (a == 0)
    {
        cout << b;
    }
    else
    {
        cout << a;
    }

    return 0;
}