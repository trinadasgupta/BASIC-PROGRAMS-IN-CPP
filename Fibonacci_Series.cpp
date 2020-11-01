#include<iostream>
using namespace std;

int main()
{
    int a=-1,b=1,sum,num;
    cout<<"Enter the no. of terms:\t";
    cin>>num;
    for (int i = 0; i < num; i++)
    {
        sum = a + b;
        a=b;
        b=sum;
        cout<<sum<<"\t";
    }
    
    return 0;
}