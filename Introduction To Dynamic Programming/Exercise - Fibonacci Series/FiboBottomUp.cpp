/*
    Post : Introduction to Dynamic Programming
    
    Problem : Compute Fibonacci Series
              0, 1, 1, 2, 3, 5, 8, ....
              
    Approach : DP (Bottom-Up)

*/

#include <iostream>

using namespace std;
#define MAX 100

long long table[MAX];

void fiboBottomUp(int x)
{
    table[0] = 0;
    table[1] = 1;
    
    for(int i=2;i<x;i++)
        table[i] = table[i-1] + table[i-2];
}

int main()
{
    int n;      // term upto which series is to be printed
    
    cin>>n;
    
    fiboBottomUp(n);
    
    cout<<"Fibonacci Series upto "<<n<<" is :\n\n";
    for(int i=0;i<n;i++)
        cout<<table[i]<<" ";
   
   return 0;
}

