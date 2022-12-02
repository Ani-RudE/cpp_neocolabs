#include <iostream>
using namespace std;

int main()
{
    int n, i;
    cin>>n;
    int array[n];
    
    for (i=0; i<n; i++)
    {
        cin>>array[i];
    }
    
    int min=array[0];
    for (i=1; i<n; i++)
    {
        if (min>array[i])
        {
            min=array[i];
        }
    }
    
    int max=array[0];
    for (i=1; i<n; i++)
    {
        if (max<array[i])
        {
            max=array[i];
        }
    }
    
    int diff=max-min;
    cout<<diff;
    
    return 0;
}

// https://cdn.discordapp.com/attachments/1014537337356697750/1014582964711080057/unknown.png