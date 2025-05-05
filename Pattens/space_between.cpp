#include <iostream>
using namespace std;
void print2(int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == 0 || i == m - 1 || j == 0 || j == n - 1)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
}
int main()
{
    int m = 3;
    int n = 3;
    print2(m, n);
    return 0;
}