// https://cdn.discordapp.com/attachments/1014537337356697750/1037021591428673616/unknown.png

#include<iostream>
using namespace std;

class vector
{
    float feet,inch;
    public:
    vector ()
    {
        cin>>feet>>inch;
    }
    //friend vector operator *(vector &a); 
    
    void print()
    {
        cout<<"Product of the distances is "<<feet<<" Feet "<<inch<<" Inches.";
    }

    vector operator *(vector &a)
    {
        vector k;
        k.feet=feet*a.feet;
        k.inch=inch*a.inch;
        while(k.inch>=12)
        {
            k.inch-=12;
            k.feet++;
        }
        return k;
    }
};

int main()
{
    vector a1,b1;
    vector pro;
    pro=a1*b1;
    pro.print();

    return 0;
}