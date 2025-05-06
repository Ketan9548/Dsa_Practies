#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    pair<int, int> p = {4, 3};
    pair<int, pair<int, int>> p1 = {2, {90, 4}};
    pair<int,string> arr[7] = {{1, "first"}, {3, "second"}, {5, "third"}, {7, "fourth"}, {9, "fifth"}, {11, "sixth"}, {13, "seventh"}};

    for (int i = 0; i < 7; i++)
    {
        cout << arr[i].first << " " << arr[i].second << endl;
    }
    

    // cout << p.first << " " << p.second << endl;
    // cout<<p1.first <<" "<< p1.second.first<<endl;

    return 0;
}