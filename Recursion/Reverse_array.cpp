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


#include<iostream>
#include<vector>
using namespace std;
void swap(int a, int b){
    a = a+b;
    b = a-b;
    b = a-b;
}
void reversearra(vector<int> &v, int i){
    int n = v.size()-1;
    if(i>=n/2){
        return;
    }

    swap(v[i],v[n-i-1]);
    reversearra(v, i+1);
    
}
int main()
{
    vector<int> v = {1,2,3,4,5}; 
    int i = 0;
    reversearra(v,i);      
    for(auto p: v){
        cout<<p<<" ";
    }
    return 0;
}