// https://cdn.discordapp.com/attachments/1014537337356697750/1044500670985801849/image.png

#include<iostream>
using namespace std;
class Base{
    public:
    void display()
    {
        cout<<"bptr points to Base"<<endl;
        cout<<"Display Base"<<endl;
        cout<<" Show Base:"<<endl;
    }
};
class Derived:virtual public Base{
    public:
    void display()
    {
        cout<<" bptr points to derived"<<endl;
        cout<<"Display Base"<<endl;
        cout<<" Show Derived"<<endl;
    }
};

int main(){
    Derived D;
    D.Base::display();
    D.display();
    
    return 0;
}