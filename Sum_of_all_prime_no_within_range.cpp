#include <iostream>
using namespace std;

int main()
{
    int start, end, i, j, count, sum = 0;
    cout << "Enter the start and end of the range:\t";
    cin >> start >> end;
    if (start == 0)
    {
        start += 2;
    }
    if (start == 1)
    {
        start += 1;
    }

    for (i = start; i <= end; i++)
    {
        count = 0;
        for (j = 1; j <= end; j++)
        {
            if (i % j == 0)
            {
                count++;
            }
        }
        if (count == 2)
        {
            sum += i;
        }
    }
    cout << "Sum is: " << sum;
    return 0;
}