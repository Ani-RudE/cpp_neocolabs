#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, f=1;
    cin>>n;
    
    for (int i=1; i<=n; i++)
    {
        f=f*i;
    }
    
    cout<<f;
    
    
    return 0;
}

// https://cdn.discordapp.com/attachments/1014537337356697750/1014538640677933197/unknown.png