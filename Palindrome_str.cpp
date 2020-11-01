#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    char str[100];
    int i,l,flag;
    cout<<"Enter a string (in lowercase):\t";
    cin>>str;
    l = strlen(str);
    for(i=0; i<l; i++)
    {
        flag = 0;
        if(str[i] == str[l-i-1])
            flag = 1;
    }
    if(flag == 1)
        cout<<str<<" is a Palindrome String";
    else
        cout<<str<<" is not a Palindrome String";    
    return 0;

}