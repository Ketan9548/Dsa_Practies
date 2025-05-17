#include<iostream>
using namespace std;
int main()
{
    int number = 121;
    int reverse = 0;
    int dup = number;
    while (number != 0) {
        int rem = number % 10;
        number = number / 10;
        reverse = reverse * 10 + rem;
    }
    if(dup == reverse) {
        cout << "The number is a palindrome." << endl;
    } else {
        cout << "The number is not a palindrome." << endl;
    }
                 
    return 0;
}