#include <iostream>
using namespace std;

class complex

{
    float real,imag;
    public:
    
    void set()
    {
        cin>>real>>imag;
        cout<<real<<"+j"<<imag<<endl;
    }
    friend complex sum(complex,complex);
    void display();
    
};

void complex::display()
{
    cout<<real<<"+j"<<imag;
}

complex sum(complex a,complex b)
{
    complex t;
    t.real=a.real+b.real;
    t.imag=a.imag+b.imag;
    
    return t;
}

int main()
{
    complex a,b,c;
    a.set();
    b.set();
    
    c=sum(a,b);
    c.display();
    
    return(0);
}