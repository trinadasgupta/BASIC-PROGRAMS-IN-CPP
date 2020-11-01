#include<iostream>
using namespace std;

int main()
{
    int i,count=0;
    char str[100];
    cout<<"Enter a string:\t";
    cin>>str;
    for(i = 1; str[i]!='\0'; i++)
    {
        count++;
    }
    cout<<"Reverse String is : ";
    for(i = count; i>=0; i-- )
    {
        cout<<str[i];
    }

    return 0;
}