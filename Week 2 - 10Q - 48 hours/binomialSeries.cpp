#include <iostream>
#include <math.h>
using namespace std;

int calculate(int x,int n)
{   
    int y;
    for(int i=1; i=n; i++)
    {
        y+=pow(x,i);
    }
    cout<<y;
    
    return y;
}


int main()
{
    int n, x;
    
    cin>>n>>x;
    int d=calculate(x,n);
    
    return 0;
}