#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int start,end,i,temp,count=0,rem,sum=0;
    cout<<"Enter the starting and ending of the range:\t";
    cin>>start>>end;
    cout<<"Amstrong Number between "<<start<<" and "<<end<<" :\n";
    for (i = start; i<=end; i++)
    {
        count = 0;
        sum = 0;
        temp=i;
        while (temp!=0)
        {
            temp/=10;
            count++;
        }
        temp=i;
        while (temp!=0)
        {
            rem = temp % 10;
            sum+= pow(rem, count);
            temp/=10;
        }
        if(sum == i)
        {
            cout<<i<<"\t";
        }
           
    }
    cout<<endl;
    
    return 0;
}