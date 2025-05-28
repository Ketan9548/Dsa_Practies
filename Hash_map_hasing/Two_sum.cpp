// #include <iostream>
// #include <vector>
// #include <unordered_map>
// using namespace std;
// int main()
// {
//     vector<int> v = {2, 7, 11, 15};
//     int target = 9;
//     unordered_map<int, int> mp;
//     // Using unordered_map to store the elements and their indices
//     for (int i = 0; i < v.size(); i++)
//     {
//         mp[v[i]] = i;
//     }
//     cout << "Element" << " " << "Index" << endl;
//     cout << "----------------" << endl;

//     for (auto l : mp)
//     {
//         cout << l.first << "   " << l.second << endl;
//     }
//     // Finding two numbers that add up to the target
//     // for (int i = 0; i < v.size(); i++)
//     // {
//     //     int complement = target - v[i];
//     //     if (mp.find(complement) != mp.end() && mp[complement] != i)
//     //     {
//     //         cout << v[i] << " " << v[mp[complement]] << endl;
//     //     }
//     // }

//     return 0;
// }

#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;
int main()
{
    string s = "MCMXCIV";
    unordered_map<char, int> mp = {{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};
    int n = s.length();
    int total = 0;
    for (int i = 0; i < n; i++)
    {
        if (mp[s[i]] < mp[s[i + 1]])
        {
            total = total - mp[s[i]];
        }
        else
        {
            total = total + mp[s[i]];
        }
    }
    cout << total + mp[s[n - 1]];
    return 0;
}