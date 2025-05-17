// #include <iostream>
// using namespace std;
// void printvalue(int i, int n)
// {
//     if (i > n)
//     {
//         return;
//     }
//     cout << i << endl;
//     printvalue(i + 1, n);
// }
// int main()
// {
//     int n;
//     cout << "Enter the number" << endl;
//     cin >> n;
//     printvalue(1, n);

//     return 0;
// }

// reverse
// #include <iostream>
// using namespace std;
// void printreverse(int i, int n)
// {
//     if (i<1)
//     {
//         return;
//     }
//     cout << i << endl;
//     printreverse(i - 1, n);
// }
// int main()
// {
//     int n;
//     cout << "Enter the number" << endl;
//     cin >> n;
//     printreverse(n, n);

//     return 0;
// }

#include <iostream>
using namespace std;
int calculatedsum(int n)
{
    if (n == 1)
    {
        return 1;
    }
    return n + calculatedsum(n - 1);
}
int main()
{
    int n = 4;  
    int val = calculatedsum(n);
    cout << val << endl;
    return 0;
}