#include<iostream>
#include <bits/stdc++.h>
using namespace std;
// list container implements a doubly linked list
int main()
{
    list<int> l = {1, 2, 3, 4, 5};

    l.front() = 10; 
    auto it = find(l.begin(), l.end(), 9);

    if(it != l.end()){
        cout<<*it<<endl;
    }
    else{
        cout<<"Not Found"<<endl;
    }

    for(auto p:l){
        // cout << p << " ";
    }
              
    return 0;
}