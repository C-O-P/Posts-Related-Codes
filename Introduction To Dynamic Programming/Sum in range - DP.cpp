/*
    Post : Introduction to Dynamic Programming
    
    Problem : Given an array of integers of size n.We’ve to 
              answer Q queries.Each query consists of 2 integers
              L and R and we’ve to print sum of elements of array
              from L to R(inclusive).
              
    Approach : DP

*/

#include <iostream>

using namespace std;
#define MAX 100

int main()
{
   int n,Q,L,R,i,
       Arr[MAX],        // Array index is 1 based
       table[MAX],      // To store cumulative frequency
       sum;
   
   cin>>n;
   for(i=1;i<=n;i++)
        cin>>Arr[i];
        
    // initialize table elements to 0
    for(i=0;i<=n;i++)
        table[i] = 0;
    
    // calculating cumulative frequency
    for(i=1;i<=n;i++)
        table[i] = table[i-1]+Arr[i];
    
    cin>>Q;
    while(Q--)
    {
        cin>>L>>R;
        sum = table[R] - table[L-1];
        cout<<sum<<'\n';        
    }
   return 0;
}

