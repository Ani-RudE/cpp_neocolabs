#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n1=0,n2=0;
    int i, j, c=0;
    cin>>n1;
    int a[n1];
    
    for(i=0; i<n1; i++)
    {
        cin>>a[i];
    }
    
    cin>>n2;
    
    for(j=0; j<n1; j++)
    {
        if (a[j]==n2)
        {   
            c=1;
            cout<<"Element "<<n2<<" Found At Position"<<j+1;
        }
        
    }
    
    if (c==0)
    {
        cout<<"Element Not Found.";
    }
    
    return 0;
}

// https://cdn.discordapp.com/attachments/1014537337356697750/1014538465196646480/unknown.png