#include <iostream>
using namespace std;

int main()
{
    int start, end, count, i,j,p_arr[100],np_arr[100];
    cout << "Enter the start of range:\t";
    cin >> start;
    cout << "Enter the end of the range:\t";
    cin >> end;

    if(start == 1)
    {
        cout<<start<<" is neither Prime nor composite.\n";
        start+=1;
    }

    for (i = start; i <= end; i++)
    {
        count = 0;
        for (j = 1; j<= end; j++)
        {
            if (i % j == 0)
            {
                count++;
            }
        }
        if (count == 2)
        {
            cout << i << " is a Prime number\n"; 
        }
        else
        {
            cout << i << " is not a Prime Number\n";
        }
    }

    return 0;
}