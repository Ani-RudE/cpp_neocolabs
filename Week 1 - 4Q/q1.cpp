#include <iostream>
#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main()
{
    int n1=0, n2=0;
    char op;
    
    cin>>n1;
    cin>>n2;
    cin>>op;
    
    switch (op)
    {
        case '+' : cout << n1+n2 << endl;
        break;
        
        case '-' : cout << n1-n2 << endl;
        break;
        
        case '*' : cout << n1*n2 << endl;
        break;
        
        case '/' : cout << n1/n2 << endl;
        break;
        
        case '!' : cout << "Invalid operator" << endl;
        break;
        
        default : cout << "Invalid Input!" << endl;
        break;
    }
    
    return 0;
}

// https://cdn.discordapp.com/attachments/1014537337356697750/1014537413961449532/unknown.png