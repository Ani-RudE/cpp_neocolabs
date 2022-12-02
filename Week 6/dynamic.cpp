// https://cdn.discordapp.com/attachments/1014537337356697750/1034329224963698748/unknown.png

#include <bits/stdc++.h>
#include <thread>
#include <string.h>
using namespace std;

class classA
{
    string *str1, *str2, *str3;
    
    public:
    void getInput (string s1, string s2, string s3)
    {
        str1=&s1;
        str2=&s2;
        str3=&s3;
    }
    
    void display()
    {
        cout<<*str1<<endl;
        cout<<*str2<<endl;
        cout<<*str3<<endl;
    }
    
    void join(string s1, string s2, string s3)
    {
        cout<<*str1<<" "<<*str2<<endl;
        cout<<*str1<<" "<<*str2<<" "<<*str3<<endl;
    }
};

int main()
{
    classA A;
    string ss1, ss2, ss3;
    
    cin>>ss1;
    cin>>ss2;
    cin>>ss3;
    
    int strlen(string ss1);
    
    A.getInput(ss1,ss2,ss3);
    A.display();
    A.join(ss1,ss2,ss3);
    
    return 0;
}