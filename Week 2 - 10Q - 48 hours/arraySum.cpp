#include <bits/stdc++.h>
using namespace std;

int main()
{
    int j, n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int sum;
    cin>>sum;

    if(n>0&&n<=10)
    {
        for(int i=0;i<n-1;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if((arr[i]+arr[j])==sum)
                {
                    cout<<"Yes:"<<arr[i]<<" "<<arr[j];
                    break;
                }            
            }
            if((arr[i]+arr[j])==sum)
            {
                break;
            }
            if ((arr[i]+arr[j])!=sum)
            {
                cout<<"No Pair";
                break; 
            } 
        }
    }
    else 
    {
        cout<<"Invalid";
    }

    return 0;
}