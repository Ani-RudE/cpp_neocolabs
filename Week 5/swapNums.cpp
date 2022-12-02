#include <bits/stdc++.h>
using namespace std;

class class_2;
class class_1
{
private:
int a;
public:
void set()
{
    cin>>a;
}
void display()
{
    cout<<a;
}
friend void swap(class_1 x,class_2 y);
};
class class_2
{
private:
int b;
public:
void set()
{
    cin>>b;
}
void display()
{
    cout<<b;
}
friend void swap(class_1 x,class_2 y);
};

void swap(class_1 x,class_2 y)
{
    int temp;
    temp=y.b;
    y.b=x.a;
    x.a=temp;
    
    cout<<x.a<<endl;
    cout<<y.b<<endl;
}

int main()
{
    class_1 num1;
    class_2 num2;
    num1.set();
    num2.set();
    swap(num1,num2);

    return 0;
}