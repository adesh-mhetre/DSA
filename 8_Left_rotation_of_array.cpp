#include<iostream>
#include<vector>
using namespace std;

vector<int> rotateLeft(int d, vector<int> arr) {
    for(int i=0;i<d;i++)
    {
        int temp=arr[0];
        int len=arr.size();
        int k=1;
        while(k<len)
        {
            arr[k-1]=arr[k];
            k++;
        }
        arr[len-1]=temp;
    }
    return arr;
}

int main()
{
    int n,d,num;
    cout<<"Enter the length of array : ";
    cin>>n;
    cout<<"Enter the amount to rotate by : ";
    cin>>d;
    vector<int> arr;
    cout<<"Enter "<<n<<" array elements (with space) : ";
    for(int i=0;i<n;i++)
    {
        cin>>num;
        arr.push_back(num);
    }
    vector<int> result = rotateLeft(d,arr);
    for(int i=0;i<n;i++)
    {
        cout<<result[i]<<" ";
    }
    return 0;
}