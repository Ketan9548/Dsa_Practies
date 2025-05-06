#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {1, 2, 3, 40, 5};
    // for(auto p:v){
    //     cout << p << " ";
    // }     
    
    // vector<int>::iterator it = v.begin();
    // it = it + 3;
    // cout << *it << endl;

    vector<int>::iterator it1 = v.end();
    vector<int>::iterator it2 = v.begin();
    // vector<int>::iterator it3 = v.rbegin();
    it1--;
    cout << *it1 << endl;
    cout << *it2 << endl;
    // cout << *it3 << endl;

    return 0;
}