/*
    Post : Introduction to Dynamic Programming
    
    Problem : Compute Fibonacci Series
              0, 1, 1, 2, 3, 5, 8, ....
              
    Approach : DP (Top-Down)

*/

#include <iostream>

using namespace std;
#define MAX 100

long long table[MAX];

void init(int n)
{
    for(int i=0;i<=n;i++)
        table[i] = -1;          // to check if value at ith index has been
                                // calculated or not
}

long long fiboTopDown(int x)
{
    if(table[x] != -1)          // means value has already been calculated
        return table[x];
    
    long long t;
    if(x == 0)
        t = 0;
    else if(x == 1)
        t = 1;
    else
        t = fiboTopDown(x-1) + fiboTopDown(x-2);
        
    table[x] = t;
    return table[x];   
}

int main()
{
    int n;      // term upto which series is to be printed
    
    cin>>n;
    
    init(n);
    
    cout<<"Fibonacci Series upto "<<n<<" is :\n\n";
    for(int i=0;i<n;i++)
        cout<<fiboTopDown(i)<<" ";
   
   return 0;
}

