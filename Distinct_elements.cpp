// Program to find the distinct elements in an array

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[100],n,i,j;
    cout<<"Enter the number of elements in the array:"<<endl;
    cin>>n;

    cout<<"Enter the elements in the array:"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    cout<<"The distinct elements in the array is:"<<endl;;
    for(i=0;i<n;i++)
    {
        for(j=0;j<=i;j++)
        {
            if(arr[i]==arr[j])
            {
                break;
            }
        }
        if(i==j)
        {
            cout<<arr[i]<<endl;
        }
    }
    return 0;
}