#include <iostream>
using namespace std;
void print1(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
void print2(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
void print3(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}
void print4(int n)
{
    for (int i = 0; i < n; i++)
    {
        // space
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        // star
        for (int k = 0; k < 2 * i + 1; k++)
        {
            cout << "*";
        }
        // space
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}
void print5(int n)
{
    for (int i = 0; i < n; i++)
    {
        // space
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        // star
        for (int k = 0; k < 2 * n - (2 * i + 1); k++)
        {
            cout << "*";
        }
        // space
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

void print6(int n)
{
    for (int i = 1; i <= 2*n; i++)
    {
        int start = i;
        if(i>n) start = 2*n - i;
        for (int j = 1; j <= start; j++) // Change '<' to '<='
        {
            cout << " *";
        }
        cout << endl;
    }
}

int main()
{
    int n = 5;
    // print1(n);
    // print2(n);
    // print3(n);
    // print4(n);
    // print5(n);
    print6(n);
    return 0;
}