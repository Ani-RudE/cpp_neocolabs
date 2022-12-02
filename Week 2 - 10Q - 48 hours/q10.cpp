#include <bits/stdc++.h>
using namespace std;

int main()
{
double br, tr, food, logi, total;
float brp, trp, foodp, logip;
    
cin>>br;
cin>>tr;
cin>>food;
cin>>logi;
total=br+tr+food+logi;
cout<<"Total expenses : Rs."<<fixed<<setprecision(2)<<total<<endl;
brp=br*100/total;
trp=tr*100/total;
foodp=food*100/total;
logip=logi*100/total;
    
cout<<"Branding expenses percentage : "<<fixed<<setprecision(2)<<brp<<"%"<<endl;
cout<<"Travel expenses percentage : "<<fixed<<setprecision(2)<<trp<<"%"<<endl;
cout<<"Food expenses percentage : "<<fixed<<setprecision(2)<<foodp<<"%"<<endl;
cout<<"Logistics expenses percentage : "<<fixed<<setprecision(2)<<logip<<"%"<<endl;

return 0;
}

/* Total Expenses for the Event

 

The prime functionality of an Event Management System is budgeting. An Event Management System should estimate the total expenses incurred by an event and the percentage rate of each of the expenses involved in planning and executing an event. Nikhil, the founder of "Pine Tree" wanted to include this functionality in his company’s Examly Event Management System and requested your help in writing a program for the same.

 

The program should get the branding expenses, travel expenses, food expenses, and logistics expenses as input from the user and calculate the total expenses for an event and the percentage rate of each of these expenses.

Input format
The first input is a double value that corresponds to the branding expenses.

The second input is a double value that corresponds to the travel expenses.

The third input is a double value that corresponds to the food expenses.

The fourth input is a double value that corresponds to the logistics expenses

Output format
The first line of the output should display the double value that corresponds to the total expenses for the Event.

The next four lines should display the percentage rate of each of the expenses.

Round off the output to two decimal places.

https://cdn.discordapp.com/attachments/1014537337356697750/1014583428022288444/unknown.png */