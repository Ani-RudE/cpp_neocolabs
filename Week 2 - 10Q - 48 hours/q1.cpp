#include <iostream>
using namespace std;

int main()
{
int page, cage;
int code, income;
    
cin>>page;
cin>>cage;
cin>>code;
cin>>income;
    
if (page>=21 && page<=60)
{
if (cage>=18)
{
if (1<=code && code<=4)
{
if (income>=300000)
{
        cout<<income<<endl<<"Yes. You are eligible for SBI credit cards";
}
    else
{
cout<<income<<endl<<"No. You are eligible for SBI credit cards";
}
}
else
{
cout<<income<<endl<<"No. You are eligible for SBI credit cards";
}
    
}
else
{
cout<<income<<endl<<"No. You are eligible for SBI credit cards";
}
}
else
{
cout<<income<<endl<<"No. You are eligible for SBI credit cards";
}

return 0;
}


/* Sanjay got a promotion and now he is a manager in the SBI Credit card division. There are basic eligibility criteria required to apply for any SBI Credit card.



The age of the primary applicant must be between 21 years to 60 years.
The age of the add-on card applicant must be above 18 years.
Must be either salaried, self-employed, student, or retired pensioner.
Primary applicants should have a stable income (gross) of up to Rs.3 lakh per year.


Accept required inputs from the user, Write a program to check if the person meets the bank’s eligibility criteria.

Input format
The first line of input is the age of the primary applicant

The second line of input is the age of the add-on card applicant

The third line of input is the employment type code (1 for salaried, 2 self-employed,3 for student, and 4 for retired pensioner)

The fourth line of input is income.

Output format
The first line of the output prints the income.

Eligible / Not Eligible as shown in the sample output.



Refer sample output for exact text and format

Code constraints
21<=Age of the primary applicant <=60 years

Age of the add-on card applicant>=18 years

1<=Employee code <=4 (Salaried =1, Self-employed=2, Student=3, Retired pensioner=4) 

https://cdn.discordapp.com/attachments/1014537337356697750/1014539865100132392/unknown.png */