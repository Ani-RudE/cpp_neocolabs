#include<bits/stdc++.h>
using namespace std;

struct student{
    int roll;
    string name;
    int age;
    int mark[5];
    int tvm;
};

void print(int roll,string name,int s,int mark[],int age)
{
    int i;
    cout<<roll<<" "<<ends;
    cout<<name<<" "<<ends;
    cout<<age<<" "<<ends;
    for ( i = 0; i <5; i++)
    {
        cout<<mark[i]<<" "<<ends;
    }
    cout<<s<<" "<<ends;
    cout<<(s)<<" "<<endl;
    
}

void inclusive(int total_mark)
{
    int s=0;
    if (400>=total_mark<=500)
    {
       s+=1; 
    }
    cout<<"Number of students with total marks between 400-500 is: "<<s<<endl;
}

void age(int age,string name)
{
    if (age>18)
    {
       cout<<name<<" "<<endl;
    }
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int i,s=0;
        struct student s1;
        cin>>s1.roll;
        cin>>s1.name;
        cin>>s1.age;
        
        for(i=0;i<5;i++)
        {
            cin>>s1.mark[i];
            s=s+s1.mark[i];
        }

print(s1.roll,s1.name,s,s1.mark,s1.age);
inclusive(s);
age(s1.age,s1.name);
    }
    
    return 0;
}


/* Problem Statement:

Define a structure called “student” to store the roll no, name, age, and marks of five subjects, total and average marks of the students. Write a program that reads in a set of students and find out the following details using functions. 

• To display all the details of the students after calculating total and average marks.

• To find the total number of students having the total marks in between 400 to 500 (inclusive).

• To print the names of all the students having age greater than 18.

Input format
The first line of the input consists of the value of n.

The next n inputs are the student's roll_no, name, age, and marks of 5 subjects separated by a space.

Output format
The output prints the result of each function.

Refer sample input and output for formatting specifications.

https://cdn.discordapp.com/attachments/1014537337356697750/1014582472715030609/unknown.png */