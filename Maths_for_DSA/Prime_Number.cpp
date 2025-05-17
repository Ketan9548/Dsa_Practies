#include <iostream>
using namespace std;
int main()
{
    int number = 17;
    int counter = 1;

    for (int i = 2; i <= number; i++)
    {
        if (number % i == 0)
        {
            counter++;
        }
    }

    for (int i = 2; i * i <= number; i++)
    {
        if (number % i == 0)
        {
            counter++;
            if ((number / i) != 1)
            {
                counter++;
            }
        }
    }
    cout<<counter<<endl;
    if (counter == 2)
    {
        cout << "The number is prime." << endl;
    }
    else
    {
        cout << "The number is not prime." << endl;
    }
    return 0;
}