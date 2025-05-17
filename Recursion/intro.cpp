#include <iostream>
using namespace std;
void increase_counter(int n)
{
    if (n == 50)
    {
        return;
    }
    else
    {
        cout << n << endl;
    }
    increase_counter(n+1);
}
int main()
{
    int n = 4;
    increase_counter(n);
    return 0;
}