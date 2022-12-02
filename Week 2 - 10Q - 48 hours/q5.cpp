#include <iostream>
#include <math.h>
using namespace std;

int calculate(int x,int n)
{   
    int y=0;
    for(int i=1; i<=n; i++)
    {
        y+=pow(x,i);
    }
    cout<<y;
    
    return y;
}


int main()
{
    int num1, num2;
    
    cin>>num1>>num2;
    int d=calculate(num1,num2);
    
    return 0;
}

// https://cdn.discordapp.com/attachments/1014537337356697750/1014582192686502008/unknown.png