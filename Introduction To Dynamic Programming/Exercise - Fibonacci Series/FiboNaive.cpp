/*
    Post : Introduction to Dynamic Programming
    
    Problem : Compute Fibonacci Series
              0, 1, 1, 2, 3, 5, 8, ....
              
    Approach : Naive

*/

#include <iostream>

using namespace std;

long long fiboNaive(int x)
{
    long long t;
    if(x == 0)
        t = 0;
    else if(x == 1)
        t = 1;
    else
        t = fiboNaive(x-1) + fiboNaive(x-2);
    
    return t;   
}

int main()
{
    int n;      // term upto which series is to be printed
    
    cin>>n;
    
    cout<<"Fibonacci Series upto "<<n<<" is :\n\n";
    for(int i=0;i<n;i++)
        cout<<fiboNaive(i)<<" ";
   
   return 0;
}

