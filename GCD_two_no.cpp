#include<iostream>
using namespace std;

int main()
{
    int a,b,gcd=1;
    cout<<"Enter two numbers:\t";
    cin>>a>>b;
    for (int i = 1; i<=a && i<=b; i++)
    {
        if((a%i==0) && (b%i==0))
        {
            gcd = i;
            continue;
        }
    }

    cout<<"GCD of "<<a<<" & "<<b<<" is: "<<gcd;
    return 0;
    
}