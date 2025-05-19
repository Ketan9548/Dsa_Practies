// parameter base
// #include <iostream>
// using namespace std;
// void factorialfind(int i, int fact)
// {
//     if (i == 1)
//     {
//         cout << fact;
//         return;
//     }
//     factorialfind(i - 1, fact * i);
// }
// int main()
// {
//     int n = 5;
//     factorialfind(n, 1);

//     return 0;
// }

// function base
#include <iostream>
using namespace std;
int findfactorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    return n * findfactorial(n - 1);
}
int main()
{
    int n;
    cout << "Enter the number for find Factorial: " << endl;
    cin >> n;
    int factorial_is = findfactorial(n);
    cout << factorial_is << endl;
    return 0;
}