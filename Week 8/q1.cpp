// https://cdn.discordapp.com/attachments/1014537337356697750/1037020408215507046/unknown.png

#include<iostream>
using namespace std;
int main()
{
int x,i=0;
while(1)
{
cin>>x;
i++;
if(x==-1)
    {
break;
}
if(i==1)
{
cout<<x;
}
else
{
cout<<"->"<<x;
}
}

return 0;
}