// function base recursion

// #include <iostream>
// using namespace std;
// int sumfun(int n)
// {
//     if (n == 0)
//     {
//         return 0;
//     }
//     return n + sumfun(n - 1);
// }
// int main()
// {

//     int n = 4;
//     int sumval = sumfun(n);
//     cout << sumval << endl;
//     return 0;
// }

// parameter base recursion
#include <iostream>
using namespace std;
void sumfun(int i, int sum)
{
    if (i < 1)
    {
        cout << sum;
        return;
    }
    sumfun(i - 1, sum + i);
}
int main()
{
    int n = 4;
    sumfun(n, 0);

    return 0;
}