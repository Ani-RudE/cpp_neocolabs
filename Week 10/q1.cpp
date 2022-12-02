// Write a program illustrating how the constructors are implemented and the order in which they are called when the classes
// are inherited. Use three classes Named alpha, beta, gamma suich that alpha, beta are base class
// and gamma is derived class inheriting alpha and beta.

// #include <bits/stdc++.h>
// using namespace std;

// class alpha{
//     public:
//     int aPub=11;

//     private:
//     int aPri=12;

//     protected:
//     int aPro=13;

//     public:
//     alpha()
//     {
//         cout<<"Alpha called: ";
//         cout<<aPub<<" "<<aPri<<" "<<aPro<<endl;
//     }
// };

// class beta{
//     public:
//     int bPub=21;

//     private:
//     int bPri=22;

//     protected:
//     int bPro=23;

//     public:
//     beta()
//     {
//         cout<<"Beta called: ";
//         cout<<bPub<<" "<<bPri<<" "<<bPro<<endl;
//     }
// };

// class gamma:public alpha,public beta
// {
//     public:
//     gamma()
//     {
//         cout<<"Gamma called"<<endl;
//     }
// };

// int main()
// {
//     gamma X;

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

class alpha{
    protected:
    int x;
    float y;
    
    public:
    alpha()
    {
        cout<<"alpha initialized"<<endl;
    }
    
    void setval(int num1, float num2)
    {
        // x=num1; This works in VS but failed in Neocolabs
        // y=num2; So prefer using "this->" keyword
        this->x=num1;
        this->y=num2;
    }
};

class beta{
    protected:
    int m, n;
    
    public:
    beta()
    {
        cout<<"beta initialized"<<endl;
    }
    
    void setval2(int num3, int num4)
    {
        this->m=num3;
        this->n=num4;
    }
};

class gamma:public beta, public alpha
{
    public:
    gamma()
    {
        cout<<"gamma initialized"<<endl;
    }
    
    void display()
    {
        cout<<"x="<<x<<endl;
        cout<<"y="<<y<<endl;
        cout<<"m="<<m<<endl;
        cout<<"n="<<n<<endl;
    }
};

int main()
{   
    int a=5, c=20, d=30;
    float b=10.74;
    // cin>>a>>b>>c>>d;
    
    gamma obj;
    obj.setval(a,b);
    obj.setval2(c,d);
    obj.display();
    
    return 0;
}

// https://cdn.discordapp.com/attachments/1014537337356697750/1042656968961171466/image.png