#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main()
{
    int r, c;
    int trace=0, sq=0;
    float normal;
    cin>>r>>c;
    int mat[r][c];
    
    if(r!=c)
    {
        cout<<"Invalid Input";
    }
    else
    {
        int i, j;
        for (i=1; i<=r; i++)
        {
            for (j=1; j<=c; j++)
            {
                cin>>mat[i][j];
                sq=sq+mat[i][j]*mat[i][j];
                
                if (i==j)
                {
                    trace=trace+mat[i][j];
                }
            }
        }
        normal=sqrt(sq);
        cout<<"Normal of matrix: "<<fixed<<setprecision(2)<<normal<<endl;
        cout<<"Trace of matrix: "<<trace;
    }
    
    return 0;
}

// https://cdn.discordapp.com/attachments/1014537337356697750/1014577736045580299/unknown.png