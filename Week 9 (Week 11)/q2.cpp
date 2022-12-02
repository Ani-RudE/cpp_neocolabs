// https://cdn.discordapp.com/attachments/1014537337356697750/1037058590076317727/unknown.png

#include <iostream>
using namespace std;

class BaseClass
{
public:
int var_base;

void display()
{
cout << "bptr points to base object"<<endl;
cout<<"b="<<var_base<<endl;
}
};

class DerivedClass : public BaseClass 
{
public:
int var_derived;

void display()
{
cout <<"bptr now points to derived object"<<endl;
cout<<"b="<<var_derived;
}
};

int main()
{
int a, b;
cin>>a;
cin>>b;

BaseClass* base_class_pointer;
BaseClass obj_base;
DerivedClass obj_derived;

base_class_pointer = &obj_derived;
base_class_pointer->var_base=a;

base_class_pointer->display();

DerivedClass* derived_class_pointer;
derived_class_pointer = &obj_derived;
derived_class_pointer->var_derived=b;
derived_class_pointer->display();

return 0;
}