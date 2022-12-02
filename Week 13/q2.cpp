// https://cdn.discordapp.com/attachments/1014537337356697750/1047026708966019073/image.png

#include <bits/stdc++.h>
using namespace std;

class A{
    public:
    int n;
    int hr,min;
    
    void getn (int time)
    {
        n=time;
    }
    
    void calc()
    {
        hr=n/60;
        min=n%60;
    }
    
    void display()
    {
        cout<<"Time = "<<hr<<" hrs and "<<min<<" mins"<<endl;
    }
};

int main()
{
    int time;
    cin>>time;
    
    A obj;
    obj.getn(time);
    obj.calc();
    obj.display();
    
    return 0;
}