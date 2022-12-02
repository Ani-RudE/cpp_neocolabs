#include <iostream>
using namespace std;

int count;

int check(int arr[10], int n,int sum)
{
    count=0;
    for(int i=0; i<n;i++)
    for(int j = i+1;j<n;j++)
    if(arr[i]+arr[j]==sum)
    {
        printf("Yes:%d %d",arr[i],arr[j]);
        count++;
        break;
    }
    
    return 0;
}

int main()
{
    int i, n,sum;
    cin>>n;
    int arr[n];
    
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    if(n<=10)
    {
        cin>>sum;
        int j;
        j=check(arr,n,sum);
        if(count==0)
        cout<<"No Pair";
        return 0;
    }
    else
    {
        cout<<"Invalid";
    }
    
    return 0;
}


/* Write a program that checks whether there exists two elements in an integer array which sum up to the given input value.

Input format
Input contains of three lines where

First line consists of a single integer(Size of the array)
Second line consists of the elements of the array separated by a space
Third line consists of the sum value for which the array is to searched
All the inputs are integers.

Output format
Output displays Yes or No Pair. If Yes, the first pair of integers that sum up to the given value is displayed as shown in the sample test cases.

If constraints violated, print Invalid.

https://cdn.discordapp.com/attachments/1014537337356697750/1014582657256017971/unknown.png */