#include <iostream>
using namespace std;
int main()
{
    int n = 123456732;
    while (n != 0)
    {
        int val = n % 10;
        cout << val << endl;
        n = n / 10;
    }
    return 0;
}