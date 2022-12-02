#include <iostream>
using namespace std;

int main()
{
string name;
string type;
int count;
char entry;
double expense;
    
getline(cin, name);
getline(cin, type);
cin>>count;
cin>>entry;
cin>>expense;
    
cout<<"Event Name :"<<name<<endl;
cout<<"Event Type :"<<type<<endl;
cout<<"Expected Count :"<<count<<endl;
cout<<"Paid Entry :"<<entry<<endl;
cout<<"Projected Expense :"<<expense<<"L"<<endl;
    
    return 0;
}

// https://cdn.discordapp.com/attachments/1014537337356697750/1014577411255455884/unknown.pngx  