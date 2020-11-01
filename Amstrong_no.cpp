#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int num,temp,count=0,sum=0,rem;
    cout<<"Enter a number:\t";
    cin>>num;
    temp = num;
    while(temp>0)
    {
        temp/=10;
        count++;
    }
    temp = num;
    while (temp>0)
    {
        rem = temp % 10;
        sum += pow(rem, count);
        temp/=10;
    }
    
    if(sum == num)
        cout<<num<<" is am Armstrong Number";
    else
        cout<<num<<" is not an Armstrong Number";
    return 0;
}