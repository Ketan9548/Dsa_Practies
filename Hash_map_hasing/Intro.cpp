// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;
// int findfrequency(int number, vector<int> &v)
// {
//     int counter = 0;
//     for (int i = 0; i < v.size(); i++)
//     {
//         if (v[i] == number)
//         {
//             counter++;
//         }
//     }
//     return counter;
// }
// int main()
// {
//     vector<pair<int, int>> frequency;
//     vector<int> v = {3, 2, 4, 5, 6, 2, 3, 5, 6};
//     for (int i = 0; i < v.size(); i++)
//     {
//         int number = v[i];
//         int counter = findfrequency(number, v);
//         if (find(frequency.begin(), frequency.end(), make_pair(number, counter)) != frequency.end())
//         {
//             continue;
//         }
//         else
//         {
//             frequency.push_back(make_pair(number, counter));
//         }
//     }
//     cout << "Element" << " " << "Frequency" << endl;
//     cout << "----------------" << endl;
//     for (int i = 0; i < frequency.size(); i++)
//     {
//         cout << "|  " << frequency[i].first << "   |   " << frequency[i].second << "   |" << endl;
//     }
//     cout << "----------------" << endl;

//     return 0;
// }

#include <iostream>
#include <unordered_map>
#include <map>
#include <vector>
using namespace std;
int main()
{
    vector<int> v = {3, 2, 4, 5, 6, 2, 3, 5, 6};
    unordered_map<int, int> mp;
    map<int, int> m;

    for (auto l : v)
    {
        m[l]++;
    }

    for (auto p : m)
    {
        if (p.second == 1)
        {
            m.erase(p.first);
        }
    }
    for (auto l : m)
    {
        cout << l.first << " " << l.second << endl;
    }

    return 0;
}