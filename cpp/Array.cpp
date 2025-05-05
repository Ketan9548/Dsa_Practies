#include <iostream>
using namespace std;
int main()
{
    int arr[6];
    arr[0] = 91;
    arr[1] = 121;
    arr[2] = 2;
    arr[3] = 13;
    arr[4] = 231;
    arr[5] = 214;
    int length = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < length; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}