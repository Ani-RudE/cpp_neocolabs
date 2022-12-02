// https://cdn.discordapp.com/attachments/1014537337356697750/1037068477019729990/unknown.png

#include <bits/stdc++.h>
using namespace std;

class A
{
    string name;
    int age;
    
    public:
    A()
    {
        cout<<"Constructor is called"<<endl;
        
    }
    A(string name, int age)
    {
        this->name=name;
        this->age=age;
    }
    void display()
    {
        cout<<"Name:"<<name<<endl;
        cout<<"Age:"<<age<<endl;
    }
    void * operator new(size_t s)
    {
        cout<<"Overloading new operator with size: "<<s<<endl;
        void *p=malloc(s);
        return p;
    }
    void operator delete(void *p)
    {   
        cout<<"Overloading delete operator "<<endl;
        free(p);
    }
};

int main()
{   
    A a;
    string n;
    int ax;
    cin>>n;
    cin>>ax;
    A *p=new A(n,ax);
    p->display();
    delete p;
    
    return 0;
}

// https://cdn.discordapp.com/attachments/1014537337356697750/1037068683551445052/unknown.png