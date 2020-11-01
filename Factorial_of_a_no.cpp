#include<iostream>
using namespace std;

int main()
{
    long int  num,fact=1;
    cout<<"Enter a number:\n";
    cin>>num;
    for (long int i = num; i > 0; i--)
    {
        fact = fact * i;
    }
    cout<<fact;
    return 0;
    
}