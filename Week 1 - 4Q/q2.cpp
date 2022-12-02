#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n=0, p, i, j;
    cin>>n;
    
    for (i=1; i<=n; i++)
    {
        for (j=2; j<=i; j++)
        {
            p=i%j;
            if (p==0)
            {
                break;
            }
        }
        if (i==j)
        {
            cout<<j<<" ";
        }
    }
    
    return 0;
}

// https://cdn.discordapp.com/attachments/1014537337356697750/1014538121154658314/unknown.png