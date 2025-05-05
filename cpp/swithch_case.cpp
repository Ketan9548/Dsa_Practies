#include <iostream>
using namespace std;
int main()
{
    int day;
    cout << "Enter the day between 1 to 7: " << endl;
    cin >> day;

    switch (day)
    {
    case 1:
        cout << "This is Monday for Work" << endl;
        break;
    case 2:
        cout << "This is Tuesday for More Work" << endl;
        break;
    case 3:
        cout << "This is Wednesday for a small Nap for rest" << endl;
        break;
    case 4:
        cout << "This is Thursday for Push your self for work" << endl;
        break;
    case 5:
        cout << "This is Friday for planing a weekend" << endl;
        break;
    case 6:
        cout << "This is Saturday for first weekend" << endl;
        break;
    case 7:
        cout << "This is Sunday for now Prepare for next week work" << endl;
        break;
    default:
        cout << "Please Enter a Valid Day" << endl;
        break;
    }
    return 0;
}