#include <iostream>
using namespace std;
int main()
{
    int age;
    cout << "enter you age: " << endl;
    cin >> age;
    if (age < 18)
    {
        cout << "You are not eligible for driving licence" << endl;
    }
    else if (age >= 18 && age <= 21)
    {
        if (age < 20)
        {
            cout << "You are eligible for learning licence but after take Driving Test" << endl;
        }
        else
        {
            cout << "You are eligible for Learning licence" << endl;
        }
    }
    else
    {
        cout << "You are eligible for Driving licence" << endl;
    }

    return 0;
}