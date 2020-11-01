#include<iostream>
using namespace std;

int main()
{
    int sum=0,num,rem,temp;
    cout<<"Enter a Number:\t";
    cin>>num;
    temp = num;
    while (num>0)
    {
        rem = num % 10;
        sum =(sum * 10)+ rem;
        num/=10; 
    }
    if(temp == sum)
        cout<<temp<<" is a Palindrome Number";
    else
        cout<<temp<<" is not a Palindrome Number";
    
    return 0;
}