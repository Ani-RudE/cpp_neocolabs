#include <bits/stdc++.h>
using namespace std;

const int m=50;

class ITEMS
{
    int itemCode[m];
    float itemPrice[m];
    int count;
    public:
    void CNT(void){count = 0;}
    void getitem(void);
    void displaySum(void);
    void remove(void);
    void displayItems(void);
};

void ITEMS::getitem(void)
{
    cin>>itemCode[count];
    cin>>itemPrice[count];
    count++;
}

void ITEMS::displaySum(void)
{
    float sum = 0;
    for(int i=0;i<count;i++)
    {
        sum = sum + itemPrice[i];
    }
    cout<<sum<<endl;
}

void ITEMS::remove(void) 
{
    int a;
    cin>>a;
    for(int i=0;i<count;i++)
    if(itemCode[i] == a)
    itemPrice[i] = 0;
}

void ITEMS::displayItems(void)
{
    for(int i=0;i<count;i++)
    {
        cout<<itemCode[i]<<"\t"<<itemPrice[i]<<"\n";
    }
}


int main()
{
    ITEMS order;
    order.CNT();
    int x;
    cout<<endl;
    do
    {

        cin>>x;
        switch(x)
        {
            case 1: order.getitem();
                    break;
            case 2: order.displaySum();
                    break;
            case 3: order.remove();
                    break;
            case 4: order.displayItems();
                    break;
            case 5: break;
            default: cout<<"Please enter the valid number";
        }
    }
    while(x!=5);
    
    cout<<"Please enter the valid number.";
 
    return 0;
}


// https://cdn.discordapp.com/attachments/1014537337356697750/1021460454771535993/unknown.png