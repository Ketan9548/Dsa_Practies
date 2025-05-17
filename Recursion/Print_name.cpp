#include <iostream>
using namespace std;
void printname(int i, int n)
{
    if (i > n)
    {
        return;
    }
    else
    {
        cout << "Kapil" << endl;
    }
    printname(i + 1, n);
}
int main()
{
    int n;
    cout << "Enter the number" << endl;
    cin >> n;
    printname(1, n);
    return 0;
}

