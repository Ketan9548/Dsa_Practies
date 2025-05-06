#include <iostream>
#include <deque>
using namespace std;

int main() {
    
    // Creating a deque of 5 elements
    deque<int> dq = {1, 4, 2, 3, 5};
    
    for (auto x: dq)
        cout << x << " ";
    return 0;
}