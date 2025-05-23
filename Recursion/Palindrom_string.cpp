// #include <iostream>
// #include <string>
// using namespace std;
// bool checkpanidrom(int s, int e, string str)
// {
//     if (s >= e)
//     {
//         return true;
//     }
//     if (str[s] == str[e])
//     {
//         return checkpanidrom(s + 1, e - 1, str);
//     }
//     return false;
// }
// int main()
// {
//     string s = "nitin";
//     int n = s.length();
//     int start = 0;
//     int end = n - 1;
//     bool check = checkpanidrom(start, end, s);
//     if (check)
//     {
//         cout << "String is palindrom";
//     }
//     else
//     {
//         cout << "String is not palindrom";
//     }
//     return 0;
// }

#include <iostream>
#include <string>
using namespace std;
bool palindromcheck(string s, int i)
{
    if (i >= s.size() / 2)
    {
        return true;
    }
    if (s[i] != s[s.size() - i - 1])
    {
        return false;
    }
    return palindromcheck(s, i + 1);
}
int main()
{
    string s = "nitin";
    bool check = palindromcheck(s, 0);
    if (check)
    {
        cout << "String is palindrom";
    }
    else
    {
        cout << "String is not palindrom";
    }

    return 0;
}