#include<iostream>
using namespace std;
int main()
{
    int n = 987654321;
    int reverse = 0;

    cout << "Original Number: " << n << endl;
    while(n!=0){
        int rem = n%10;
        n = n/10;
        reverse = reverse*10 + rem;
    }
    cout << "Reversed Number: " << reverse << endl;
              
    return 0;
}