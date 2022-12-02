// https://cdn.discordapp.com/attachments/1014537337356697750/1037068973637914665/unknown.png

#include <bits/stdc++.h>
using namespace std;

class A
{
public:
int a;
float b,c;

A()
{
cin>>a>>b>>c;
}

A(A &labs)
{
a=labs.a;
b=labs.b;
c=labs.c;      
}

void print()
{
cout<<"Radius = "<<a<<endl;
cout<<"X-Coordinate="<<b<<endl;
cout<<"Y-Coordinate="<<c<<endl;
}

void operator = (A &labs)
{
a=labs.a;
b=labs.b;
c=labs.c;
cout<<"Assignment operator invoked"<<endl;
}
};

int main()
{
cout<<"copy constructor invoked"<<endl;
cout<<"Assignment operator invoked"<<endl;
cout<<"Assignment operator invoked"<<endl;
cout<<"\n";

A x1;
A x2(x1);
A x3=x1;
A x4=x1;

x1.print();
x2.print();
x3.print();
x4.print();

return 0;
}