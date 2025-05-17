#include <iostream>
using namespace std;
int main()
{
    int number = 123;
    int sum = 0;
    int dup = number;

    while (number != 0)
    {
        int rem = number % 10;
        number = number / 10;
        sum = sum + (rem * rem * rem);
    }

    if (sum == dup)
    {
        cout << "The number is an Armstrong number." << endl;
    }
    else
    {
        cout << "The number is not an Armstrong number." << endl;
    }

    return 0;
}