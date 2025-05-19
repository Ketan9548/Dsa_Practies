// #include<iostream>
// using namespace std;
// void printoneton(int i,int n){
//     if(i>n){
//         return;
//     }
//     cout<<i<<endl;
//     printoneton(i+1,n);
// }
// int main()
// {
//     int n = 4;
//     printoneton(1,n);
              
//     return 0;
// }

// normal recursion

// #include<iostream>
// using namespace std;
// void printoneton(int i,int n){
//     if(i>n){
//         return;
//     }
//     // recursion call first
//     printoneton(i+1,n);
//     // backtrack : print the way back
//     cout<<i<<endl;
// }
// int main()
// {
//     int n = 4;
//     printoneton(1,n);
              
//     return 0;
// }

// backtracking