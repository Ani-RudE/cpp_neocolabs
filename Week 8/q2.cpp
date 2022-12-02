// https://cdn.discordapp.com/attachments/1014537337356697750/1034347431925661706/unknown.png

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int a[3][3];
//     int b[3][3];
//     int i,j,k;
    
//     for (int i=0; i<3; i++)
//     {
//         for (int j=0; j<3; j++)
//         {
//             cin>>a[i][j];
//         }
//     }
//     for (int i=0; i<3; i++)
//     {
//         for (int j=0; j<3; j++)
//         {
//             cin>>b[i][j];
//         }
//     }
    
//     int sum[3][3];
//     int sub[3][3];
//     int multi[3][3];
    
//     for (int i=0; i<3; i++)
//     {
//         for (int j=0; j<3; j++)
//         {
//             sum[i][j]=a[i][j]+b[i][j];
//             sub[i][j]=a[i][j]-b[i][j];
//             // multi[i][j]=a[i][j]*b[i][j];
//         }
//     }
    
//     for(i=0; i<3; ++i)
//     {
//         for(j=0; j<3; j++)
//         {
//             multi[i][j]=0;   
//         }
//     }
//     for(i=0; i<3; ++i)
//     {
//         for(j=0; j<3; ++j)
//         {
//             for(k=0; k<3; ++k)
//             {
//                 multi[i][j]+=a[i][k]*b[k][j];
//             }
//         }
//     }
    
//     for (int i=0; i<3; i++)
//     {
//         for (int j=0; j<3; j++)
//         {
//             cout<<sum[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     cout<<" "<<endl;
//     for (int i=0; i<3; i++)
//     {
//         for (int j=0; j<3; j++)
//         {
//             cout<<sub[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     cout<<" "<<endl;
//     for (int i=0; i<3; i++)
//     {
//         for (int j=0; j<3; j++)
//         {
//             cout<<multi[i][j]<<" ";
//         }
//         cout<<endl;
//     }
    
//     return 0;
// }

#include<iostream>
using namespace std;
class matrix
{
    public:
    int **p;
    matrix()
    {
        p=new int *[3];
        for(int i=0;i<3;i++)
        {
            p[i]=new int [3];
        }
    }
    
    void input()
    {
        for (int i=0;i<3;i++)
        {
            for (int j=0;j<3;j++)
            {
                cin>>p[i][j];
            }
        }
    }
    
    matrix operator +(matrix &a)
    {
        matrix k;
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                k.p[i][j]=p[i][j]+a.p[i][j];
            }
        }
        return k;
    }
    
    matrix operator -(matrix &a)
    {
        matrix k;
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                k.p[i][j]=p[i][j]-a.p[i][j];
            }
        }
        return k;
    }
    
    matrix operator *(matrix &a)
    {
        matrix k;
        for (int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                k.p[i][j]=0;
                for(int k1=0;k1<3;k1++)
                {
                    k.p[i][j]+=p[i][k1]*a.p[k1][j];
                }
            }
        }
        return k;
    }
    
    void print()
    {
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                cout<<p[i][j]<<" ";
            }
            cout<<endl;
        }
    }
};
int main()
{
    matrix a1,b1;
    a1.input();
    b1.input();
    matrix sum=a1+b1;
    sum.print();
    cout<<" "<<endl;
    matrix diff=a1-b1;
    diff.print();
    cout<<" "<<endl;
    matrix pro=a1*b1;
    pro.print();
    //cout<<endl;

    return 0;
}

// https://cdn.discordapp.com/attachments/1014537337356697750/1037019824729104534/unknown.png