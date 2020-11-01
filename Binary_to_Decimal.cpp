#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int bin,i=0,sum=0,temp,rem;
    cout<<"Enter the number in Binary:\t";
    cin>>bin;
    temp = bin;
    while (temp!=0)
    {
        rem = temp % 10;
        sum= rem * pow(2,i);
        temp/=10;
        i++;
    }
    
    cout<<"Decimal equivalent of "<<bin<<" is "<<sum;

    return 0;
}