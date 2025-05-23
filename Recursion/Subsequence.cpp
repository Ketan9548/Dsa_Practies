#include <iostream>
#include <vector>
using namespace std;
void findSubsequences(int index, vector<int> &v, vector<vector<int>> &result, vector<int> &temp)
{
    if (index == v.size())
    {
        result.push_back(temp);
        return;
    }

    // Include the current element
    temp.push_back(v[index]);
    findSubsequences(index + 1, v, result, temp);

    // Exclude the current element
    temp.pop_back();
    findSubsequences(index + 1, v, result, temp);
}
int main()
{
    vector<int> v = {2, 4, 1};
    int n = v.size();
    vector<vector<int>> result;
    vector<int> temp;

    findSubsequences(0, v, result, temp);

    for (auto p : result)
    {
        for (auto q : p)
        {
            cout << q << " ";
        }
        cout << endl;
    }

    return 0;
}