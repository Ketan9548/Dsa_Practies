#include <iostream>
using namespace std;
int main()
{
    int arr[3][5];
    int rows = sizeof(arr) / sizeof(arr[0]);
    int col = sizeof(arr[0]) / sizeof(arr[0][0]);
    arr[0][1] = 4;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j]<<"   ";
        }
        cout << endl;
    }
    return 0;
}