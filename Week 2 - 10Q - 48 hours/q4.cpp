#include <iostream>
using namespace std;

int main()
{
    int n;
    int heads=0, tails=0;
    cin>>n;
    char array[n];
    
    for(int i=0; i<n; i++)
    {
        cin>>array[i];
        if (array[i]=='H' || array[i]=='h')
        {
            heads=heads+1;
        }
        else
        {
            tails=tails+1;
        }
    }
    
    cout<<heads<<" "<<tails;
    
    return 0;
}

// https://cdn.discordapp.com/attachments/1014537337356697750/1014581996179173418/unknown.png