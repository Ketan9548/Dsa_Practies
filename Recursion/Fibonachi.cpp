#include <iostream>
using namespace std;
int findFibonacci(int n)
{
    if (n <= 1)
    {
        return n;
    }
    int val = findFibonacci(n - 1) + findFibonacci(n - 2);
    return val;
}
int main()
{
    int n = 5;
    int val = findFibonacci(n);
    cout << "Fibonacci of " << n - 1 << " is " << val << endl;
    return 0;
}