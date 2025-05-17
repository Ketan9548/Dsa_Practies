#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
    int number = 36;

    // for(int i = 1; i<=number; i++){
    //     if(number%i==0){
    //         cout<<i<<" ";
    //     }
    // }
    // for(int i = 1; i<=sqrt(number); i++){
    //     if(number%i==0){
    //         cout<<i<<" ";
    //     }
    // }

    vector<int> ans;
    for (int i = 1; i <= sqrt(number); i++)
    {
        if (number % i == 0)
        {
            ans.push_back(i);
            if ((number / i) != 1)
            {
                ans.push_back(number / i);
            }
        }
    }

    for(auto i: ans){
        cout<<i<<" ";
    }

    return 0;
}