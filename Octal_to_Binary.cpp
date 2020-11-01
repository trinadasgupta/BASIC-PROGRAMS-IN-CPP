#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int oct,dec=0,bin=0,temp,i;
    cout<<"Enter the number in Octal:\t";
    cin>>oct;
    temp = oct;
    for(i = 0; temp!= 0; i++)
    {
        dec += (temp % 10) * pow(8,i);
        temp/= 10;
    }

    for(i=1; dec!=0; i*=10)
    {
        bin += (dec % 2) * i;
        dec/=2; 
    }
    cout<<"Binary Equivalent of "<<oct<<" is "<<bin;
    return 0;
}