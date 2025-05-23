#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n = 123456732;
    int counter = 0;
    int ans = log10(n) + 1;
    // while (n != 0)
    // {
    //     int val = n % 10;
    //     counter++;
    //     n = n / 10;
    // }
    // cout << "Number of digits in the number is: " << counter << endl;
    cout << "Number of digits in the number is: " << ans << endl;
    return 0;
}