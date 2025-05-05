#include <iostream>
using namespace std;
int main()
{
    string name = "Kapil";
    int n = name.length();
    name[n-1] = 'o';
    for (int i = 0; i < n; i++)
    {
        cout << i << " " << name[i] << endl;
    }
    return 0;
}