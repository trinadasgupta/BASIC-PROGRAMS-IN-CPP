#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int bin, dec=0, oct=0,temp,i;
    cout<<"Enter the number in Binary:\t";
    cin>>bin;
    temp = bin;
    for(i = 0; temp!=0; i++)
    {
        dec += (temp % 10) * pow(2, i);
        temp/= 10;
    }
    for(i=1; dec!=0; i*=10)
    {
        oct+= (dec % 8)*i;
        dec/=8;
    }

    cout<<"Octal Equivalent of "<<bin<<" is "<<oct;
    return 0;
}