#include<iostream>
#include<math.h>
using namespace std;

#define SIZE 100

int main()
{
    int dec,rem,temp,arr[SIZE],i,j;
    cout<<"Enter a Decimal number:\t";
    cin>>dec;
    temp = dec;
    for(i=0; temp!=0; i++)
    {
        rem = temp % 8;
        arr[i] = rem;
        temp/= 8;
    }
    cout<<"Octal equivalent of "<<dec<<" is ";
    for(j = i-1 ; j>=0;j--)
    {
        cout<<arr[j];
    }
    return 0;
}