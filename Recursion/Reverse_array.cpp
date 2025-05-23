// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;
// void reversearray(vector<int> &arr, int s, int e)
// {
//     if (s >= e)
//     {
//         return;
//     }
//     swap(arr[s], arr[e]);
//     reversearray(arr, s + 1, e - 1);
// }
// int main()
// {

//     vector<int> arr = {1, 2, 3, 4, 5};
//     int n = arr.size();
//     int start = 0;
//     int end = n - 1;
//     reversearray(arr, start, end);
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     return 0;
// }

#include <iostream>
#include <vector>
using namespace std;
void swap(int &a, int &b)
{
    // a = a + b;
    // b = a - b;
    // a = a - b;
    int temp = a;
    a = b;
    b = temp;
}
void reversearra(int i, vector<int> &v, int n)
{
    if (i >= n / 2)
    {
        return;
    }
    swap(v[i], v[n - i - 1]);
    reversearra(i + 1, v, n);
}
int main()
{
    vector<int> v = {1, 2, 3, 4, 5};
    int n = v.size();
    reversearra(0, v, n);
    for (auto p : v)
    {
        cout << p << " ";
    }
    return 0;
}