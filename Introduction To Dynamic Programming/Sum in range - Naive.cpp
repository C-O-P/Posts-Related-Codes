/*
    Post : Introduction to Dynamic Programming
    
    Problem : Given an array of integers of size n.We’ve to 
              answer Q queries.Each query consists of 2 integers
              L and R and we’ve to print sum of elements of array
              from L to R(inclusive).
              
    Approach : Naive

*/

#include <iostream>

using namespace std;
#define MAX 100

int main()
{
   int n,Q,L,R,
       Arr[MAX],    //Array index is 1 based
       sum;
   
   cin>>n;
   for(int i=1;i<=n;i++)
        cin>>Arr[i];
    
    cin>>Q;
    while(Q--)
    {
        cin>>L>>R;
        sum=0;
        for(int i=L;i<=R;i++)
            sum = sum + Arr[i];
        
        cout<<sum<<'\n';        
    }
   return 0;
}

