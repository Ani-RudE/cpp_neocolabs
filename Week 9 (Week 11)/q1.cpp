#include <bits/stdc++.h>
using namespace std;

class A
{
    string name1, name2;
    int age1, age2;
    
    public:
    
    void person (string name1, string name2, int age1, int age2)
    {
        this->name1=name1;
        this->name2=name2;
        this->age1=age1;
        this->age2=age2;
    }
    
    void display()
    {
        if (age1>age2)
        {
            cout<<"Name="<<name1<<endl;
            cout<<"Age="<<age1;
        }
        else
        {
            cout<<"Name="<<name2<<endl;
            cout<<"Age="<<age2;
        }
    }
};

int main()
{   
    string n1, n2;
    int a1, a2;
    cin>>n1>>a1>>n2>>a2;
    A a;
    a.person(n1,n2,a1,a2);
    a.display();
    
    return 0;
}

// https://cdn.discordapp.com/attachments/1014537337356697750/1037058163066806342/unknown.png