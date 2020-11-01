#include<iostream>
using namespace std;

int fact(int num)
{
    int i,fact=1;
    for(i = num; i>0; i--)
    {
        fact*=i;
    }
    return fact;
}

int main()
{
    int i,in_num,num,temp,sum=0;
    cout<<"Enter a number:\t";
    cin>>in_num;
    temp = in_num;

    // cout<<fact(num);

    while (in_num!=0)
    {
        num = in_num%10;
        sum += fact(num);
        in_num/=10;
    }
    
    if(temp == sum)
        cout<<temp<<" is a Strong Number";
    else
        cout<<temp<<" is not a Strong Number";
    return 0;
}