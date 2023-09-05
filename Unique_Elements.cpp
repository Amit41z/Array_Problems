#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[100], n, i, j, count;
    cout << "Enter the number of elements in the array:" << endl;
    cin >> n;

    cout << "Enter the elements in the array:" << endl;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "The unique elements in the array is:" << endl;
    ;
    for (i = 0; i < n; i++)
    {
        count = 0;
        for (j = 0; j < n; j++)
        {
            if (i != j)
            {
                if (arr[i] == arr[j])
                {
                    count++;
                }
            }
        }
        if (count == 0)
        {
            cout << arr[i] << endl;
        }
    }
    return 0;
}