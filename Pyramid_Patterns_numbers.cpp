#include<iostream>
using namespace std;

int main()
{
    int num,i,j;
    cout<<"Enter a number:";
    cin>>num;
    for(i = 1; i<=num; i++)
    {
        for(j=1; j<=i;j++)
        {
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}