#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int oct,i=0,sum=0,temp,rem;
    cout<<"Enter the number in Octal:\t";
    cin>>oct;
    temp = oct;
    while (temp!=0)
    {
        rem = temp % 10;
        sum+= rem * pow(8,i);
        temp/=10;
        i++;
    }
    
    cout<<"Decimal equivalent of "<<oct<<" is "<<sum;

    return 0;
}