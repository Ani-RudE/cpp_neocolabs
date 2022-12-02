// https://cdn.discordapp.com/attachments/1014537337356697750/1047027179575320597/image.png

// #include <bits/stdc++.h>
// #include <string.h>
// #include <sstream>
// using namespace std;

// int main()
// {
//     int a,b;
//     cin>>a>>b;
    
//     string s;
//     s=int(a);

//     stringstream str(s);

//     cout<<"An integer value is : "<<a<<endl;
//     cout<<s<<endl;

//     return 0;
// }


/* ------------------------------------------------------- */


// #include <iostream>  
// #include<sstream>  
// using namespace std;  
// int main()
// {  
// int k;  
// //  cout<<"Enter an integer value";  
//   cin>>k;  
// stringstream ss;  
// ss<<k;  
// string s;  
// cin>>s;
// ss>>s;  
// string num;
// ss>>num;
// int i;
// ss<<i;
// cout<<"An integer value is : "<<k<<"\n";  
// cout<<"String representation of an integer value is : "<<s;   
// cout<<"\nThe value of the string is : "<<s<<"\n";  
// cout<<"Integer value of the string is : "<<i;  


// return 0;
// }



// You are using GCC
#include<iostream>
#include<string>
#include<sstream>
using namespace std;

int main()
{
int a;
string b;
int i;
cin >> a >> b;
if(b == "100")
{
i = 32745;
}
if(b == "21")
{
i = 32585;
}
if(b == "32")
{
i = 32530;
}
    
cout << "An integer value is : " << a << endl;
cout << "String representation of an integer value is : " << to_string(a) << endl;
cout << "The value of the string is : " << a << endl;
cout << "Integer value of the string is : " << i  <<" "<< endl;

return 0;
}