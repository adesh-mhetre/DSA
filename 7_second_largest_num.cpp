#include <iostream>
#include <algorithm>
#include <math.h>

using namespace std;

int main()
{
    int n;
    cout<<"Enter the number of array elements : ";
    cin>>n;
    int arr[n];
    cout<<"Enter array Elements : ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    cout<<"Second largest element is "<<arr[n-2];
    return 0;
}